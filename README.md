
![GitHub last commit](https://badgen.net/github/last-commit/Meng2025/computer-technology/main)
![Github commits](https://badgen.net/github/commits/Meng2025/computer-technology/main)
![no problems](https://badgen.net/badge/no%20problem/(maybe)/red)

*感谢访问我的学习笔记。*

*如果是在 GitHub 看到这些内容，那么可以前往[独立网页](https://xu.yumeng.tech/computer-technology)获得更好的浏览体验。*

*如果觉得我的笔记内容对您有帮助，那我会感到非常开心。*

最重要的**如果我在内容上有理解错误，或者表达不严谨、符号不规范的地方，还请不吝指正。**

我的邮箱地址：<m@njust.edu.cn>

---

最早的计算机被发明用来解决代数问题，计算机也在以令人难以致信的速度发展，现在一台智能手机的运算能力比60年代全世界的计算能力还要强。两台NES游戏机就能承担阿波罗登月计划需要的全部运算能力。

计算机科学在探究计算机可以做什么，粗略的分成这三部分：
- 计算机基础理论
- 计算机工程
- 计算机应用

Alan Tuning 提出了图灵机(Tuning Machine)的概念，为通用计算机提供了一个简要描述。后来设计的其他所有计算机都等价于图灵机。

**可计算理论(Computability Theory)**试图区分什么是可以计算的，什么是不可计算的。有些问题因为本身的性质永远无法被计算机解决（还有一些因为理论上可以但事实上要花太多内存或者太多时间，超过宇宙寿命这种的），那么就不浪费时间去做了。**算法(Algorithms)**就是为了解决一个特定的问题创造出来的一系列和硬件以及编程语言无关的指令，并且人们花大量的时间去改进他，以期获得最好的效果。算法可以获得同样的最终效果，比如排序，但是有些算法就更加的高效，这就是 $$ O(n) $$ 复杂性。

**信息理论(Information Theory)**研究信息的性质，衡量方法，如何存储以及通信。其中一个应用就是如何尽可能的压缩(Compression)数据，在能够保留大部分或者所有信息的同时，尽量少的占用存储资源。此外还有其他应用。和信息论相关的是**编码理论(Coding Theory)**，显然密码学(Cryptography)对于因特网上传递的信息的隐私非常重要，目前已有的加密方案大多基于一些非常复杂的数学问题设计，计算理论的主干就这些，但是还有更多细节。逻辑(Logic)、图论(Graph Theory)、计算几何(Computational Geometry)、自动机理论(Automata Theory)、量子计算(Quantum Coputation)、并行编程(Parallel Programming)、形式化方法(Formal Methods)、数据结构(Datastructures)。

还是先来看看计算机工程(Computer Engineering)。

设计计算机是一个挑战，这里涉及到特别多的领域，设计者要保证计算机可以解决各种各样的难题，并尽可能的优化。每个在计算机上运行的任务都会通过计算机的核心部件——CPU，但在同一时间执行不同的事情的时候，CPU需要在这些事件之间来回切换，这样才能保证每件事情都能在一个合理的时间内完成，这是通过一个调度程序实现的，这个程序会选择什么时候做什么事情，并且尝试以最有效的方式来组织任务，有时候这是一件很难的事情。多核技术能够帮助提高速度，因为有多个核的CPU可以并行执行多个任务，但是这也让调度更加复杂。**计算机体系结构(Computer Architecture)**是研究如何设计处理器完成任务的，因为不同的架构会擅长执行不同的任务，CPU是基于通用目的，GPU是基于图像优化的，FPGA则是可以被编程，从而非常高效的完成非常特定的任务。

在基础硬件的上层，有许多层次的软件，他们是程序员用各式各样的程序语言来写的。人类使用程序语言去告诉计算机该去做什么，而且这些语言之间的差异巨大，这些差别来自于需要完成的工作不同，如和硬件打交道的汇编与C，开发网站的css和JavaScript，总的来说，一个语言越接近硬件人类使用起来越难。程序员编写的所有层次的代码都必须转换成CPU指令，这通过一种或几种称为**编译器(Compilers)**的程序可以实现，设计程序语言和编译器是一件大事，它们是程序员构建万物的基础。，因此他们必须有足够的易用性，同时必须有足够多的功能，这样程序员才能用他们实现自己的奇妙想法。

**操作系统(Operating System)**是计算机软件中的重要一环，是人和计算机交互的接口，同时它管理着其他所有运行在硬件上的程序，要开发出一款优秀的操作系统是一个极大的挑战。由此带来了**软件工程(Software Engineering)**：有组织的编写指令，告诉计算机该做什么。构建优秀的软件是某种形式的艺术，必须把创意翻译成某种语言下的逻辑指令，并且尽可能的高效，还要正确无误，因此也诞生了许多的优秀实践和设计理念供人们参考(如版本控制、设计模式、面向对象方法、软件测试方法等)

另外还有一些重要领域，比如计算机网络：让多计算机通信并协同工作，以解决各类难题。数据管理与数据库：存储和检索大量数据。计算机图形：绘制逼真的画面。这些都是计算机的应用，计算机科学里的一个很有意思的部分，解决真实世界的问题。这些技术是我们使用许多程序、应用和网站的基础。

有了计算机工具，我们就可以用他来做些事情，这就是计算机应用。比如，解决最优化问题，花最少的钱获得最好的体验，找到最佳路径，或者最有效的组合，这些都有实际的经济价值。当尝试计算出一个逻辑公式是否可以被满足的时候，这就设计到了布尔可满足性问题。这是第一个被证明为NP完备的问题，因此普遍被认为是不可解决的，但是伴随着SAT求解器的惊人发展，如今大量的SAT问题被解决，特别是在人工智能领域。计算机扩展了我们的大脑，增强了我们的感官，计算机科学的前沿研究领域则正在发展一种可以独立思考的计算机系统：人工只能(AI)。AI研究的道路有许多，其中最突出的就是机器学习，它的目标是发展技术和算法，使得计算机能从大量的数据中学习，然后用学到的东西做一些有用的事情，例如进行决策，比如进行分类。与之密切相关的领域有例如及其视觉，目标是像人一样，在图像中利用图像处理技术，使得计算机可以看到物体。自然语言处理的目标则是使得计算机可以理解人类的语言并用其来沟通，或者是帮助分析和处理大批量的文本信息。这其中还会用到另一个领域，一般称为知识表示。知识根据他们的相互关系来组织，比如意思相近的词就聚集在一起。机器学习的算法得到了改进，因为我们现在可以提供大量的数据给它们。大数据技术着眼于如何管理和分析这么多的数据，并从中获得价值。未来我们会从物联网添加数据集以及日常的通讯中获得更多的数据。黑客技术并不是传统学科，但是绝对值得一提，尝试发现计算机系统中的弱点，并且在不被发现的情况下加以利用。计算机科学则使用计算机来帮助解答科学问题，从基础物理到神经科学，甚至用超级计算机来解决非常庞大的难题，这在模拟计算领域很常见。人机交互技术的目的是研究如何设计好计算机系统使得方便又直观。虚拟现实增强现实和远程增强，也增加了我们对现实的体验。最终机器人技术赋予了计算机物理的实体，从一个扫地机器人制造像人类一样聪明的机器人。

以上就是计算机的一个粗略地图，这是一个仍在高速发展的领域。尽管现在我们不太容易再去小型化一个晶体管，硬件好像到达了一个极限，因此许多人也在研发其他的计算机来客服这个问题。计算机给人类社会带来了巨大冲击。


**这个笔记本将要整理的内容：**

计算机工程相关：
- [ ] 计算机基础
  - 计算机概念、历史、基础知识
- [ ] 计算机语言和程序设计
  - C/C++与汇编，编译初步，软件工程及设计思想
  - 软件工程的一些工具：git与GitHub
- [ ] 数据结构和算法
  - 数据结构，算法初步，数据库、数据压缩
  - leetcode 刷题
- [ ] 计算机原理
  - 从逻辑门到计算机，设计一个简单CPU
  - 组成原理、体系结构，实例：IBM5150(微机原理)
- [ ] 操作系统
  - 操作系统原理
  - 计算机系统基础、操作系统的使用，linux与shell、各种工具
  - 操作系统设计实现
- [ ] 计算机网络


计算机应用相关，单开新的笔记本来记录：
- [ ] 前端技术
  - http协议，HTML，CSS，JavaScript
- [ ] 嵌入式系统
- [ ] 机器人


## 从hello world开始

计算机科学的知识可以强行拆成软硬两部分，但是计算机是个**系统**，这里主要是强调硬件和软件的整体性，没有软件的硬件就是一堆废铁，脱离硬件的软件都没法运行。

展开各种细节前举个例子，我在某本书上看了一个hello world的小故事。

编程经典程序Hello World，这个程序的意义不简单，屏幕上出现这行问候，说明硬件工作正常、语法正确、编译链接没毛病、环境能跑的通了。意义重大！！这也是我记得上大一第一节C语言课老师展示的代码。
```c
/* hello.c */
#include <stdio.h>

int main()
{
	printf("hello world\n");
	return 0;
}
```

现在来看看他是怎么跑起来的，从程序员坐在电脑面前到程序员看到屏幕上出现Hello World为止。

程序员敲击键盘，键盘产生中断送入键位数据形成屏幕的字符（这段还是必要的简化了），有了源程序`hello.c`。`hello.c`的存储方式为Ascii文本编码，源文件里的内容8bit一组作为一个字节放在存储器里，计算机理解信息的方式就是上下文（这个概念在汇编机器码位置会更深入理解），所以说“**信息就是位+上下文**”。

有了源文件，接下来要搞出可执行文件，指令
``` bash
$ gcc -o hello hello.c
```
使用GCC编译器把我们看得懂的代码翻译成计算机看得懂的机器码。实际上也进行了4个步骤

<figure>
	<img src="./images/编译系统.jpg" width=450 />
</figure>

- 预处理阶段，预处理器找'#'后面'include'他就知道去相应路径找文件包含展开了，要是'define'就是替换，其他类似。
- 编译阶段，编译器则把`hello.i`翻译成`hello.s`
```nasm
main:
	subq	$8, %rsp
	movl	$.LCO, %edi
	call	puts
	movl	$0, %eax
	addq	$8 %rsp
	ret
```
- 汇编阶段，输出`hello.o`，这时候就是二进制机器码了，可以对着手册查机器码手工反汇编😂。
- 链接阶段，把调用的函数和自己写的拼起来，得到了`hello`文件，加载到内存中就可以执行了。

上面这一部分还是软件操作，下面就到硬件了。在shell中运行
```bash
linux> ./hello
hello world
linux>
```
shell等待输入一个命令行，然后执行这个命令。如果该命令行的第一个单词不是一个内置的shell命令，那么shell就会假设这是一个可执行文件的名字，它将加载并运行这个文件。shell将加载并运行hello程序，然后等待程序终止。hello程序在屏幕上输出它的消息，然后终止。shell随后输出一个提示符，等待下一个输入的命令行。

在深入一点点，信息是怎么在电脑里面流动的呢？

键盘上输入`./hello`后，shell程序读入到寄存器，然后存到内存中，

<figure>
  <img src="./images/键盘输入hello指令.jpg" width=300 /> 
</figure>

前面编译好的程序在磁盘中，磁盘中的程序想执行都要想加载到内存里。敲击回车后，shell知道了指令输入结束，然后**理性分析**出了这个是文件，于是就在当前目录找到了hello，并且通过DMA加载到了内存里（这里有个地址寻址的问题以后说）。

<figure>
  <img src="./images/磁盘加载文件到主存.jpg" width=300 /> 
</figure>

数据到了主存以后CPU就真正开始执行程序了，这里的数据（字符串）是嵌在代码段里的，每读一个机器码程序技术寄存器+1，取指执行重复。这些指令将“hello, world\n”字符串中的字节从主存复制到寄存器文件，再从寄存器文件中复制到显示设备，最终显示在屏幕上

<figure>
  <img src="./images/存储器写到显示器.jpg" width=300 />
</figure>

这段小程序涉及到了整个计算机体系，可以作为后面展开学习的线索，这几个线索分别是：

- 程序语言和编译过程——程序到机器码
  - 学计算机起码得会一种语言。最低要求。
  - C/C++ 编译原理*
  - 数据结构、面向对象方法、软件工程*

- 计算机硬件结构——看得见摸得着的东西
  - 计算机组成原理 
  - 微机原理（前置知识：数字逻辑电路，模拟电路*，电路*）

- 操作系统——计算机资源管理
  - 操作系统原理

- 网络通信——现代信息产业的基石
  - 计算机网络

上面几个主题概括了计算机学科的很大一部分，也会在后面的章节中展开来，想都整明白是个不小的挑战，有侧重点的学习也是一个不错的选择😁。

在有了坚实的计算机基础以后，学习新技术也会比较容易，比如说理解操作系统和计算机网络后，再去学习 ROS(Robot Operating System) 会非常轻松，并没有什么新的概念，只要去熟悉类和接口就好了。

## 关于计算机的学习

<!--引出计算机这个事情-->
前段时间玩了个游戏[叫戴森球计划（Dyson Sphere Program）](https://store.steampowered.com/app/1366540/Dyson_Sphere_Program/)，玩法是一个人在整个宇宙，通过采集资源、规划和设计生产线、研发解锁新科技最后建起来戴森球。游戏初期PCB布线的感觉，到了后期，错综复杂的流水线，飞在天上看有种手搓CPU的错觉。下面的视频是Steam官网视频，全是游戏里的内容，看起来还是挺震撼的。

<center>
    <video src="https://media.st.dl.pinyuncloud.com/steam/apps/256800538/movie480_vp9.webm?t=1600949954" width=480 controls="controls">
    </video>
</center>

人比动物先进的地方在于人会制造和使用工具。在游戏世界里，靠各种工具在一个人的努力下开发整个星系。在现实世界中，计算机就是由人设计的一种强到不可思议的工具，越深入了解越崇拜设计这个东西的人。计算机真是人类工程历史上的奇迹，尤其是现代计算机，所以想一下子学会也是不太现实的，还是得慢慢来😂😂😂。

<!--专业背景-->
计算机科学和纯软件工程还不太一样，知乎里常讲的EE(Electronic Engineering)除了计算机科学，此还有其他的正统的电子技术。我本科学的是电气工程大类专业，Electrical Engineering，二级学科是电力电子技术，有点电机工程的意思。本科沉迷于控制方向的智能车和电子设计竞赛，反而专业课里要学的一些东西比如电机设计、传统的电力系统学的稀碎。好在都是电子大类的专业，往计算机和自动化靠靠也是合情合理的。

学计算机一个是学计算机这个工具本身，学这个工具是咋回事儿。另一个就是作为工具学应用，比如控制领域的计算机控制技术。这里的内容是工科学生为了更好的使用计算机，应该要掌握的计算机基础知识，所以笔记本的名字叫“计算机基础”。

计算机已经渗透到各个工程学科了，随便拎出来一个专业都用的到计算机平台，比如我了解的，控制学科、车辆工程、还有一些传感器学科都在参与的移动轮式机器人（简约版自动驾驶）好大一部分是基于ROS使用C++开发的。如果开发者对计算机组成原理、操作系统原理、面向对象设计、数据结构、网络通信有深入的理解，再加上自己的专业特色，那么肯定是比不是特别熟悉计算机技术的开发者有优势的。

<figure>
  <img src="./images/轮式机器人.jpg" width=300 />
</figure>

对于计算机本身，知识可以分为偏硬和偏软两类知识。对于计算机应用，知识可以分为工程类和理论类。计算机作为工具，工程是基石，理论是精髓。比如电机控制，使用现代控制理论、基于稳定的硬件电路和高精度传感器、以32位MCU作为控制核心搭载一个嵌入式操作系统实现。再比如上面提到的ROS机器人，SLAM建图一种方案：使用各种算法（粒子滤波、传感器融合...一大堆搞不懂的算法）、基于特别贵的激光雷达特别贵的IMU、以高性能工控机为上层核心运行着ROS实现；底层也是32位微处理器运行个小的嵌入式操作系统。

总之，掌握好这个基本工具还是很有必要的。

