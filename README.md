# Mernel
<div align="center">

_✨ A secure and efficent unix-like kernel ✨_

</div>

<p align="center">
  <a href="https://raw.githubusercontent.com/Maxx-Developers/Mernel/master/LICENSE">
    <img src="https://img.shields.io/github/license/Maxx-Developers/Mernel" alt="license">
</p>


<p align="center">
  <a href="https://mernel.codereservice.top/docs">Docs</a>
  ·
  <a href="https://mernel.codereservice.top/docs/start/installation">Installation</a>
  ·
  <a href="https://mernel.codereservice.top/dev-docs">Development Documentation</a>
  ·
  <a href="https://github.com/Maxx-Developers/Mernel/blob/master/README.zh.md">中文</a>
</p>



## Introduction

Mernel is a Unix-like system kernel designed to provide an easy-to-use platform for learning kernel development and operating system principles.Mernel is a macro kernel, meaning that the kernel and the application run in the same memory space. This makes the Mernel lighter, faster, and easier to develop and debug.

The Mernel is written in Rust and C for core kernel functionality and driver development respectively.



## Our Community

Offical Website: https://mernel.codereservice.top


Email: [QiyiMing](mailto:qiyiming@codereservice.top)




## Troubleshooting
### Kernel compilation failure
If you encounter an error while compiling the Mernel, you can try the following steps to resolve it.

- Make sure you have installed the required dependencies, including Rust, Cargo, GCC, and NASM.
- Check the code for syntax errors or compilation errors. You can use Rust's cargo check command to check the code for syntax issues.
- Try to clean the compile cache and recompile. You can use the cargo clean command to clean the compilation cache and then recompile with cargo build.

### Kernel load failure
If you encounter an error while loading the Mernel using GRUB, you can try the following steps to resolve it.

- Make sure that the kernel.bin file has been copied to the root directory of the floppy or USB flash drive.
- Make sure that the path in the GRUB configuration file (usually grub.cfg) points to kernel.bin correctly.
- Try using the ls command to view the contents of the floppy or USB flash drive to ensure that it contains the kernel.bin file.
- Try looking at the GRUB environment variables with the set command to ensure that the root variable is pointing to the correct device.

If your problem is not in the list above, try creating an issue and our staff will get back to you when they see it


## Problem Feedback

Mernel is a young kernel and is still under development. If you encounter a problem with Mernel, please do not assume that it is a bug in Mernel; first check if there is something wrong with your operation and see if there is a solution in the documentation and troubleshooting section.

If you are sure it is a Mernel bug, please submit an issue in the Issues section of this repository, describing the problem in as much detail as possible and including information such as error messages, steps, and environment information such as error messages, steps, and environment information. This will help us to locate and fix the bug as soon as possible.

If you are sure it is a Mernel bug, please submit an issue in the Issues section of this repository, describing the problem in as much detail as possible and including information such as error messages, steps, and environment information. This will help us to locate and fix the bug as soon as possible.




## Contribute

Please refer to the [Contributing Guidelines](./CONTRIBUTING.md)


## Sponsorship

Since this project is not for profit, we need your donation

Please visit: https://afdian.net/a/mdevs

Donate to us!



## License

Mernel adopts ```GPL2.0``` license to open source

We accept sponsorship, but we do not accept profit

Any violation of the license is not permitted

## Thanks to
Thank you to all who have contributed to the Mernel project!

Hanwen Ying: Responsible for developing part of the kernel code, a few software drivers, documentation fixes

Yiming Qi: Responsible for developing part of kernel code, documentation fixes, administrator

Yifeng Li: Responsible for developing part of kernel code, part of software driver, documentation fixes, architecture design

Yufan Zhang：Software testing, project planning

cynosure279: Responsible for developing part of the kernel code

Acpear: Responsible for developing part of the kernel code

