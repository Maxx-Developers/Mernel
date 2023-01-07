# Mernel 贡献指南

[English](https://github.com/Maxx-Developers/Mernel/blob/master/CONTRIBUTING_CN.md)

首先，感谢您为 Mernel 贡献出自己的一份力量

本指南旨在引导你更规范地向 Mernel 提交贡献，请务必认真阅读。

## 提交 Issue

在提交 Issue 前，我们建议你先查看 [FAQ](https://github.com/Maxx-Developers/Mernel/discussions/2) and [已存在的 Issues ](https://github.com/Maxx-Developers/Mernel/issues)，以防重复提交。

### 报告问题、故障、漏洞

Mernel 仍然是一个不够稳定的开发中项目，如果你在使用过程中发现问题并确信是由 Mernel 引起的，欢迎提交 Issue。

### 提建议

Mernel 还未进入正式版，欢迎在 Issue 中提议要加入哪些新功能。

为了让开发者更好地理解你的意图，请认真描述你所需要的特性，可能的话可以提出你认为可行的解决方案。


## PR

### commit message格式

```bash
<type>(<scope>): <subject>
```

**type(必须)** 

用于说明git commit的类别，只允许使用下面的标识。

feat：新功能（feature）。

fix/to：修复bug，可以是QA发现的BUG，也可以是研发自己发现的BUG。

    fix：产生diff并自动修复此问题。适合于一次提交直接修复问题 to：只产生diff不自动修复此问题。适合于多次提交。最终修复问题提交时使用fix 

docs：文档（documentation）。

style：格式（不影响代码运行的变动）。

refactor：重构（即不是新增功能，也不是修改bug的代码变动）。

perf：优化相关，比如提升性能、体验。

test：增加测试。

chore：构建过程或辅助工具的变动。

revert：回滚到上一个版本。

merge：代码合并。

sync：同步主线或分支的Bug。

**scope(可选)**

scope用于说明 commit 影响的范围，比如数据层、控制层、视图层等等，视项目不同而不同。

例如在Angular，可以是location，browser，compile，compile，rootScope， ngHref，ngClick，ngView等。如果你的修改影响了不止一个scope，你可以使用*代替。

**subject(必须)**

subject是commit目的的简短描述，不超过50个字符。

英文和中文都可以

结尾不加句号或其他标点符号。 根据以上规范git commit message将是如下的格式： 

```
fix(DAO):用户查询缺少username属性 
feat(Controller):用户查询接口开发
```

### 工作流概述

`master` 分支为 Mernel 的开发分支，在任何情况下都请不要直接修改 `master` 分支，而是创建一个目标分支为 ```Mernel:feature``` 的 Pull Request 来提交修改。等到各种特性稳定下来，我们再 merge 到 master分支

如果你是 Mernel Developers 的成员的话，可以选择 fork 到本地再提交 Pull Request的方式，或者直接提交到 feature 分支

如果你不是 Mernel Developers 的成员，可在 fork 本仓库后，向本仓库的 feature 分支发起 Pull Request，注意遵循先前提到的 commit message 规范创建 commit。我们将在 code review 通过后通过 squash merge 方式将您的贡献合并到主分支。