#include <stdio.h>
#include <unistd.h>


/*  宏的参数是_，把这个参数放到宏里，再一次
 *  给这个参数传了参数 X 和 Y
 *  然后就可以传入操作了，这是C语言的一个小语法特性
 *  可以一直展开到没法展开
 **/
#define REGS_FOREACH(_)  _(X) _(Y)

/*  定义组合逻辑，通过现在的状态计算下一个状态
 *  
 **/
#define RUN_LOGIC        X1 = !X && Y; \
                         Y1 = !X && !Y;

/*  定义一些对寄存器做操作的宏
 *  
 **/
#define DEFINE(X)        static int X, X##1;
#define UPDATE(X)        X = X##1;
#define PRINT(X)         printf(#X " = %d; ", X);

/*  任何一个数字逻辑电路，做的事情就是定义寄存器，
 *  时钟周期来了以后运行组合逻辑，然后更新状态
 **/
int main() 
{
  REGS_FOREACH(DEFINE);
  while (1) 
  { // clock
    RUN_LOGIC;
    REGS_FOREACH(PRINT);
    REGS_FOREACH(UPDATE);
    putchar('\n'); sleep(1);
  }
}


