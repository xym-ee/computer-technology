#include <stdio.h>
#include <unistd.h>

int main()
{
	while(1)
	{
		asm volatile("rdrand %rax");
	}
}
