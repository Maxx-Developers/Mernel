# Mernel Contributing Guide

[中文](https://github.com/Maxx-Developers/Mernel/blob/master/CONTRIBUTING_CN.md)

First of all, thank you for your contribution to Mernel!

This guide is designed to guide you to submit contributions to Mernel in a more standardized way, please read it carefully.



## Submit Issue

Before submitting an Issue, we recommend that you check [FAQ](https://github.com/Maxx-Developers/Mernel/discussions/2) and [Existing Issues](https://github.com/Maxx-Developers/Mernel/issues) to prevent duplicate submissions.

### Reporting Issues, Bugs and Bugs

Mernel is still a project under development that is not stable enough. If you find a problem during use and believe it is caused by Mernel, please submit an Issue.

### Suggestions

Mernel has not yet entered the official version, welcome to propose new features to be added in the Issue.

In order for developers to better understand your intentions, please carefully describe the features you need, and if possible, propose a solution that you think is feasible.


## Pull Request

### Commit specification

Please make sure that each of your commits can clearly describe its intent, and try to have only one intent for a commit

The commit message format is as follows:

```
<type>(<scope>): <subject>
```

**type (required)**

The category used to describe git commits, only the following identities are allowed.

feat: new function (feature)

fix/to: Fix bugs, which can be bugs discovered by QA, or bugs discovered by R&D itself.

fix: generate a diff and automatically fix this issue. Suitable for one commit to directly fix the problem to: only generate diff and not automatically fix the problem. Good for multiple commits. Use fix when submitting final fixes

docs: documentation

style: format (changes that do not affect code operation)

refactor: refactoring (that is, not a new feature, nor a code change to modify a bug)

perf: optimization related, such as improving performance and experience

test: add test

chore: changes to the build process or auxiliary tools

revert: Roll back to the previous version

merge: code merge

sync: Synchronize bugs on the mainline or branch

**scope (optional)**

Scope is used to illustrate the scope of commit influence, such as data layer, control layer, view layer, etc., depending on the project.


### Workflow Overview

The `master` branch is the development branch of Mernel. In any case, please do not modify the `master` branch directly, but create a Pull Request with the target branch of `Mernel:master` to submit the modification.

If you are not a member of Mernel Developers, you can initiate a Pull Request to the `master` branch of this repository after forking this repository, and follow the commit message specification mentioned earlier to create a commit. We will merge your contribution into the main branch through squash merge after the code review is passed.
