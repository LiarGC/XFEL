# This is a test demo!
# The first group of designers are chinese students, so the English Guide will be published later
---
## 这个软件是干什么的？
这是一个基于qt的，模拟激光与物质相互作用的软件，由于我们的工程还在起步阶段，现在只是测试开源的方式

---

## Linux用户
1. 准备 
   
   1. QT 5.9.0 或者更高 http://download.qt.io/archive/qt/ 下载Linux版本的QT，下载的.run文件是可执行文件，直接双击即可开始安装
   2. git Linux系统用户获取git https://git-scm.com/download/linux 

2. 通过git下载并同步代码
   
   在终端输入如下代码
   ```
   cd PATH(用户需要自己填写PATH这个保存路径)
   git clone git@github.com:LiarGC/XREF.git
   ```
   这样你就得到了我们的代码！
3. 编译
   继续上一步，输入如下代码
   ```
   cd XREF
   cd Huang_GC/
   rm Huang_GC.pro.user
   mkdir build
   cd build
   qmake ..
   make
   ```
   至此编译完成，生成的可执行文件Huang_GC可由如下代码执行
   ```
   ./Huang_GC
   ```

---

## Windows用户
1. 准备
   
   1. QT 5.9.0 或者更高 http://download.qt.io/archive/qt/ 下载Windows版本的QT，下载的.exe文件是可执行文件，直接双击即可开始安装
   2. git Windows系统用户获取git https://git-scm.com/download/win