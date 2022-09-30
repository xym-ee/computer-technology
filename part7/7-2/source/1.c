#include <stdio.h>
#include <unistd.h>


/*  宏的参数是_，把这个参数放到宏里，再一次
 *  给这个参数传了参数 X 和 Y
 *  然后就可以传入操作了，这是C语言的一个小语法特性
 **/
#define REGS_FOREACH(_)  _(X) _(Y)




#define RUN_LOGIC        X1 = !X && Y; \
                         Y1 = !X && !Y;
#define DEFINE(X)        static int X, X##1;
#define UPDATE(X)        X = X##1;
#define PRINT(X)         printf(#X " = %d; ", X);

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


