#include "x86_32.h"

.section .boot
    .long MB_MAGIC
    .long MEM_MAP
    .long CHECK_SUM(MEM_MAP)


.section .bss
    /* be conserative and use 32 bytes */
    .align 32
    stack_bottom:
        .skip 32708, 0

    stack_top:


.section .text
    start_:
        mov $stack_top %esp
        call _kernel_init
        sub $0x6, %esp
        mov $_gdt, 2(%esp)
        mov _gdt_limit, (%esp)
        mov %ax, (%esp)
        lgdt (%esp)
        add $0x6, %esp

        mov $0x10, %cx
        mov %cx, %es
        mov %cx, %ds
        mov %cx, %fs
        mov %cx, %gs
        mov %cx, %ss
        
        push $0x08
        push $_after_gdt
        retf

    _after_gdt:
        push %ebx
        call _kernel_main
        cli
    
    j_:
        /* stuck cpu in this loop */
        hlt
        jmp j_
