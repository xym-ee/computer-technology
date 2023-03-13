---
sort: 2
---
# 操作系统：设计与实现(南京大学)


- [Yanyan's Wiki](http://jyywiki.cn/)
- [操作系统：设计与实现 (2022 春季学期)](http://jyywiki.cn/OS/2022/)


WHY WHAT HOW

## 为什么学操作系统

为什么要学xxx

```note
为什么学微积分？

做题和背后的东西。Newton 时代的启蒙和应用，后来 Cauchy 时代的严格化与**公理化**。

现在教科书一上来就是极限的定义，然后后面是微积分的计算技巧。各种曲线曲面的计算，这些技巧帮助我考上了研究生。

但是，还是要问，为什么学微积分呢？

现代应用：优化理论，有限元，现代工业的基础，控制理论。

一个经典的反例，线性代数。教材上定义定理习题定理习题....

就像是学了一门计算课一样，和小学练习100以内加减法没什么本质区别，更多的是见到题目之后的条件反射，而未思考线性代数背后的东西。真正的数学。

泛函分析，矩阵分析。
```

```note
为什么学微积分？

数学是很有用的。但是教的方式有一点小问题。一上来的公理化的定义定义体现了一个严谨，但是丢失了直观。固然直观不可靠，但是抽象和严谨让初学者在理解其内涵、理解数学的美之前就已经觉得痛苦了。
```

为什么学操作系统。学了C语言没地方用，只是停留在 leetcode ，岂不是很无聊？所以学了C语言是不是可以用起来，做一点看起来很好玩的事情，很可惜。

每天在电脑上用的东西，比如键盘鼠标显示屏，尽管明确的知道这些东西就是C语言实现的，如果我能知道背后的原理，那一定是一件很有意思的事情。

浏览器，编译器，IDE，游戏外挂，安全。

学完操作系统，会给一个人和编程有关的全部知识，具有了编写一切程序的能力。就这一门课，学好了就可以在计算机技术(工程)这个方向上毕业了。

虽然但是，学完操作系统也搞不出来这些（LOL），但是，学完操作系统给了编程全部的知识。 

如果不经过一些理论上的学习，直接啃 linux 内核源码是件很崩溃的事情。想知道一个函数是怎么用的，点开，跳转，一层层跳，跳了10层发现就是一个简单的表达 `__x = __y` ，这不直接崩溃？它太复杂了，内核源码是数万工程师几十年积累的结果。

所以不妨先用一个最小的，但是原理上完全一样的东西来看看是怎么工作的。再看 linux 源码就可以把代码和概念以及思路映射到这个简单的最小系统上，然后就知道 linux 是怎么工作的了，就可以理解 linux 内核了。这就可以真的去调试内核了。


```note
当然还有一点，会操作系统以后，工资水平，还行。

我相信我在物质财富积累足够以后，精神境界也会有追求的。啥解决卡脖子技术，做中国人自己的操作系统，都行。

软件，美国比较厉害。起步早，在上大学前，就知道了游戏，浏览器，外挂。在上学前想的是这些东西，上学了发现全是分部积分、中值定理，这就很难过。

所以，课程还差一点东西，把难过的事情和好玩的事情之间联系起来。

操作系统，大家都说很难，一个中国式的教材。为了期末考试的分数内卷，刷题，背题。最大化分数，

新闻在讲美国人在芯片、操作系统掐脖子，如果每个同学都是这种学习方式，那这脖子要被美国人掐断了。。
```

## 什么是操作系统

Operating System: A body of software, in fact, that is responsible for m*aking it easy to run programs* (even allowing you to seemingly run many at the same time), allowing programs to share memory, enabling programs to interact with devices, and other fun stuff like that. (OSTEP)

操作系统是一个软件体，让应用程序更容易的运行起来（甚至允许您似乎同时运行多个程序），允许程序共享内存，允许程序与设备交互，以及其他类似的有趣的东西。

- programs : 所有的东西都是，OS甚至让病毒也容易的跑起来
- devices : 电脑上接个机械臂，能让他动起来。（这是我的专业，ROS机器人操作系统，很有意思）

通过巧妙地算法算出一个有意思的值，可以借助操作系统丢给设备，操作系统就是干这个事的，可以让数据和设备交互。

教材会给一个东西下一个滴水不漏的定义。但是读起来味同嚼蜡：操作系统（英语：Operating System，缩写：OS）是一组主管并控制计算机操作、运用和运行硬件、软件资源和提供公共服务来组织用户交互的相互关联的系统软件程序。

操作系统的边界是比较模糊的。操作系统管理一些资源，提供一些服务。

把这么大的很宽泛的概念搞清楚，不是去背定义，“精准”的教科书定义没啥用。

如何解释服务，宽泛一点呢？微信小程序，浏览器启动一个vscode，再往外延申，校长管理各种院系（资源）为国家提供服务。

这些概念太过于宽泛了。精确的定义一点都没有错，但是。。。

<figure>
    <img src="./images/os.png" width=500 border=1>
</figure>


一个东西刚诞生的时候都是简单的。计算机从第一台变成今天这样，操作系统如何从一开始编程现在这样的？一个东西都是慢慢从简单变得复杂的。

话说回来，定义还是有点用的，操作系统是管理硬件的软件，三个重要线索：
- 计算机（硬件）
- 程序（软件）
- 操作系统（管理软件的软件）

这里去学习，狭义的操作系统：
- 对单一计算机硬件系统作出抽象、支撑程序执行的软件系统

所以，不妨回头看看，这些复杂的东西刚诞生的时候，是个什么样子。

1940 年的计算机，很简单，很大。是个时序逻辑电路，甚至都不如一个本科课程上用FPGA实现的CPU。但是有很多天才的创造，真空管实现逻辑门，存储器用延迟线（delay lines，很有意思），输入输出是带着洞的纸带和指示灯。这还不是冯诺依曼结构。重新编成需要重新接线，最早成功运行的程序：打印平方数，素数表，计算弹道。

这是个正经的图灵机。

```note
状态机，每个状态用组合逻辑表示，变成一个时序逻辑电路。
```

```note
[ENIAC Simulator and Related Material](https://www.cs.drexel.edu/~bls96/eniac/)

一个模拟器。

为啥总是说外国人卡脖子呢，他们愿意去花时间做这些东西，虽然看起来没啥用。

每个人都有自己的兴趣。
```

这时候的计算机根本不需要操作系统，程序直接用指令操作硬件，不需要画蛇添足的用操作系统这个程序来管理。能把这个程序运行起来就很了不起了。这个时期，实现了从无到有的跨越，能帮助人去算各种东西。

1950 年就广泛应用了，有了晶体管逻辑门，更大更快的磁芯内存，更多的 IO 设备。而且 IO 设备的速度已经严重低于处理器的速度，于是 1953 年出现了中断机制。

这时候要考虑这代码怎么写，不可能说 IDE 用 C，那时候的程序员在卡片上打孔，这些程序也像是编译器输出的机器码。

这个时期，计算机非常昂贵，一个大学就只有一台，一群人排队等着用。一群人排队等着用这台机器，一个学校只有一个计算机，一个计算机只有一个 CPU，这时候该如何处理。这时候的程序是一堆卡片，我们只有一个卡片机，一个卡片执行完了，自动换下一个卡片进来。管理这台机器的程序员提前一天收好这些卡片，排队，一个卡片执行完了自动下一个。这时候这时候就逐渐有操作系统的概念开始出来了，操作(operate)任务(jobs)的系统(system)。这时候操作系统还可以提供一些 API，能不能把计算结果在写在一张新的卡片上，这就是“文件”（真物理文件）。所有的概念的出现都是很自然的。

```note
计算机的整个发展历史就是越来越快，内存越来越大。
```

1960年，集成电路发展，有了巨大的内存，可以同时把好几个程序同时放入内存了，不需要换卡了。但是还是只有一个CPU，这时候怎么办呢。想要同时更好的管理好两个程序，该怎么办呢？有个小点：我们这时候见到的所有程序那个时候都有了。所有的运算都在CPU的话，同时装入内存也没啥意义，但是，除了运算，还要把数据打印出来，或者写到磁盘上，这是很自然的事情。CPU 30s 算完，打印 5 分钟，这也是很正常的。在等待打印的时候 CPU 是空着的，是不是可以用起来呢？这就是这个时期的操作系统，两个程序交替着运行。

这里有了多道程序的概念。多个程序载入内存，又有设计上的要求，内存最好隔离开，因为不同人写的程序会有 BUG，一个坏的程序破坏好的程序是很难过的。这时候为了让多个程序互不干扰，硬件上也要有相应的配套的变化，这也是很基本的想法，基于这个想法设计的操作系统，与现在的很接近了。

这就有了进程的概念。进程在执行 I/O 时，可以将 CPU 让给另一个进程，在多个地址空间隔离的程序之间切换。虚拟存储使一个程序出 bug 不会 crash 整个系统。操作系统中自然地增加进程管理 API。

```note
有两个程序A和B跑在一个单CPU的PC上，运行的样子：

A运行->操作系统运行->B运行->操作系统运行

操作系统做一些切换时的必要工作
```

既然操作系统已经可以在程序之间切换，为什么不让它们无条件的定时切换呢？A执行100ms，操作系统的代码执行，换B执行100ms，这也是个想法。现在操作系统是计算机的最高管理者，不管程序是谁，执行100ms必须停下来让另一个去走。这就有了基于中断的机制。这个想法的实现 Multics，1965年，有了，自此，现代操作系统诞生。

1970年就有了个人电脑。这时候的计算机和现在的计算机并没有太多区别了。今年能用计算机干的事情1970年的计算机也能干。上天入地，那个时候就有人工智能了。甚至可以在字符终端上处理字符了，上古时期的word。

1972年C语言也出现了。

1973年，信号API（进程间通信）、管道、grep

1983：socket套接字，GNU ， 

1984：procfs

再后来，unix衍生出的家族

1BSD (1977), GNU (1983), MacOS (1984), AIX (1986), Minix (1987), Windows (1985), Linux 0.01 (1991), Windows NT (1993), Debian (1996), Windows XP (2002), Ubuntu (2004), iOS (2007), Android (2008), Windows 10 (2015), ……


```note
一本书：《unix传奇》，讲贝尔实验室。

一帮人聚在一起，有一些想法，用一些代码实现它。不用太多，500一千行搞定。

今天也是，做创新，我们有很好的软件工具，有个小团队，有个小想法就可以做非常棒的事情，看看能不能实现。就像当年在贝尔实验室做的那样。
```

今天的操作系统，通过 “虚拟化” 硬件资源为程序运行提供服务的软件。

操作系统从最早的时候开始，从打孔开始，到现在越来越复杂，相应的操作系统也要为软件提供更复杂的服务，今天的操作系统并没有离开1970年的框架，但是也遇到了许多麻烦的事情：
- 更复杂的处理器和内存
  - 非对称多处理器 (ARM big.LITTLE; Intel P/E-cores)
  - Non-uniform Memory Access (NUMA)
  - 更多的硬件机制 Intel-VT/AMD-V, TrustZone/SGX, TSX, ...
- 更多的设备和资源
  - 网卡、SSD、GPU、FPGA...
- 复杂的应用需求和应用环境
  - 服务器、个人电脑、智能手机、手表、手环、IoT/微控制器……

```note
非对称处理器，Intel大小核，12900K，8 Performance-cores 8 efficient-cores

最早的arm有的，手机上用的，比如A53 + A57，这时候如果把游戏调度到小核，这就惨了，12代CPU大不过11代。

以前的电脑，内存其128、256，现在个人PC都可以装上32G或者64G的RAM。电脑主板可以查4个内存条，CPU访问内存的时间，操作系统都要考虑这些问题。现代操作系统是很复杂的东西。

这里不讲这些，仅仅是讲一个最简单的原理性的小系统。如果真的感兴趣，那么下一步可以去看看这些东西。
```

理解操作系统：回答三个根本问题

操作系统服务谁？
- 程序 = 状态机
- 课程涉及：多线程 Linux 应用程序

(设计/应用视角) 操作系统为程序提供什么服务？
- 操作系统 = 对象 + API
- 课程涉及：POSIX + 部分 Linux 特性

(实现/硬件视角) 如何实现操作系统提供的服务？
- 操作系统 = C 程序
  - 完成初始化后就成为 interrupt/trap/fault handler
- 课程涉及：xv6, 自制迷你操作系统

```note
操作系统服务程序，程序是状态机。内核和寄存器，每执行一条程序，内存和寄存器就变了。

操作系统为程序提供服务，文件进程管道这些对象还有操作这些东西的API，学习POSIX的接口，linux的接口。

实现一些常用的API，操作系统就是个C程序，操作系统初始化结束后就变成了一个中断处理程序，这就结束了。
```

```tip
这部分笔记的结构：

先看操作系统服务的对象：程序。理解程序是什么东西。

```


## 如何学操作系统？

学操作系统还是有些要求的。会有一些小困难，但是可以克服

首先是合格的操作系统用户
- 遇到问题，会 STFW/RTFM 自己动手解决问题
- 不怕使用任何命令行工具
    - vim, tmux, grep, gcc, binutils, ...
- 不惧怕写代码
  - 能管理一定规模 (数千行) 的代码
  - 能在出 bug 时默念 “**机器永远是对的**、我肯定能调出来的”
    - 然后开始用正确的工具/方法调试

```note
STFW：search the fucking web

RTFM：read The Fucking Manual

自己解决问题，比如学linux，需要这个环境。能在网上找到这个教程，跟着做下来。这其实也不是很困难。

一个命令行工具，可以正确的使用他。

Computer must be right
```

成为操作系统的 Power User，



对新的东西感兴趣。

比如

<figure>
  <img src="./images/tar.png" width=500 >
</figure>

不用网络，那么查自带手册

```bash
man tar

# 精简一点
tar --help
```
但是，有更好用的工具 `tldr`


其次是学会写代码

写代码 = 创造有趣的东西
- 命令行+浏览器
- 不需要语言特性，不用特意去讲设计模式
  - 当代码大到一定程度，自然就会关注这些东西




