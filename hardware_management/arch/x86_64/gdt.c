#include <mernel/arch/gdt.h>
#include <lib/stdint.h>


#define GDT_ENTRY 5

uint64_t _gdt[GDT_ENTRY];
uint16_t _gdt_limit = sizeof(_gdt);

void _set_gdt_entry(uint32_t index, uint32_t base, uint32_t limit, uint32_t flag)
{
    _gdt[index] = SEG_BASE_H(base) | flag | SEG_LIM_H(limit) | SEG_BASE_M(base);
    _gdt_limit <<= 32;
    _gdt[index] |= SEG_BASE_L(base) | SEG_LIM_L(limit);
}

void _init_gdt()
{
    _set_gdt_entry(0, 0, 0, 0);
    _set_gdt_entry(1, 0, 0xfffff, SEG_R0_CODE);
    _set_gdt_entry(2, 0, 0xfffff, SEG_R0_DATA);
    _set_gdt_entry(3, 0, 0xfffff, SEG_R3_CODE);
    _set_gdt_entry(4, 0, 0xfffff, SEG_R3_DATA);
}