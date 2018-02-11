#include <stdio.h>
#include <linux/kernel.h>
#include <sys/syscall.h>
#include <unistd.h>
#define sh_task_info 319
int main()
{
	long ret=syscall(sh_task_info,getpid(),"log");
	printf("\nThe system call sh_task_info returned : %ld\n\nUse dmesg command to see the kernel log.\n\n",ret);
	return 0;
}
