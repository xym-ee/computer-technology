#include <stdio.h>
#include <unistd.h>
#include <sys/syscall.h>

int main()
{
	syscall(SYS_exit, 42);
}




