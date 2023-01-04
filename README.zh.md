# Mernel
<div align="center">

_✨ 安全与快速的类Unix内核 ✨_

</div>

<p align="center">
  <a href="https://raw.githubusercontent.com/Maxx-Developers/Mernel/master/LICENSE">
    <img src="https://img.shields.io/github/license/Maxx-Developers/Mernel" alt="license">
</p>


<p align="center">
  <a href="mernel.ctri.cc/docs">文档</a>
  ·
  <a href="https:/mernel.ctri.cc/docs/start/installation">安装</a>
  ·
  <a href="https://mernel.ctri.cc/dev-docs">开发文档</a>
  ·
  <a href="">贡献</a>
</p>

## 介绍

Mernel 是一个类 Unix 系统内核，旨在为学习内核开发和操作系统原理提供一个简单易用的平台。Mernel 是一个宏内核，意味着内核和应用程序运行在同一内存空间。

Mernel 使用 Rust 和 C 编写，分别用于内核的核心功能和驱动程序的开发。



## 我们的社区

官方网站: https://mernel.ctri.cc


电子邮件: [QiYiming](mailto:qiyiming@codereservice.top)




## 故障排除
### 内核编译失败
如果在编译 Mernel 时遇到错误，可以尝试以下步骤解决：

- 确保已安装必备工具，包括 Rust、Cargo、GCC 和 NASM。
- 检查代码是否存在语法错误或编译错误。可以使用 Rust 的 cargo check 命令检查代码是否有语法问题。
- 尝试清理编译缓存并重新编译。可以使用 cargo clean 命令清理编译缓存，再使用 cargo build 重新编译。

###内核加载失败
如果在使用 GRUB 加载 Mernel 时遇到错误，可以尝试以下步骤解决：

- 确保已将 kernel.bin 文件复制到了软盘或 USB 闪存盘的根目录下。
- 确保 GRUB 配置文件（一般是 grub.cfg）中的路径正确指向了 kernel.bin。
- 尝试使用 ls 命令查看软盘或 USB 闪存盘的内容，确保它包含了 kernel.bin 文件。
- 尝试使用 set 命令查看 GRUB 环境变量，确保 root 变量指向了正确的设备。

如果仍然无法解决问题，请新建issue

## 问题反馈

Mernel 是一个年轻的软件，并且依旧在开发中。如果你在使用 Mernel 时遇到了问题，请不要轻易地认为这是 Mernel 的 bug。请先检查你的操作是否有问题，并查看文档和故障排除部分是否有相关的解决方案。

如果你确定是 Mernel 的 bug，请在本仓库的 Issues 中提交一个 issue。请尽可能详细地描述问题，并附上错误信息、操作步骤、环境信息等相关信息。这有助于我们尽快地定位和修复 bug。



## Contribute

请查看 [Contributing Guidelines](./CONTRIBUTING.md)


## 赞助我们
这个项目并不盈利，请捐助我们！

请访问: https://afdian.net/a/qiyiming

捐助我们!


## 开源许可

Mernel 使用 ```GPL2.0``` 开源许可


## 贡献者
感谢所有对 Mernel 项目做出贡献的人！

Hanwen Ying：部分内核代码，少数软件驱动，文档修正

Yiming Qi：部分内核代码，文档修正，管理者

Yifeng Li：部分内核代码，部分软件驱动，文档修正，架构设计

Yufan Zhang：软件测试，项目规划

cynosure279：部分内核代码

Acpear：部分内核代码

