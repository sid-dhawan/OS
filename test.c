#include <stdio.h>
#include <linux/kernel.h>
#include <sys/syscall.h>
#include <unistd.h>
#define sh_task_info 318
int main()
{
	long ret,p_id;
	char* filename;
	printf("\n\nEnter the PID : ");
	scanf("%ld",&p_id);
	printf("\n\nEnter the filename : ");
	scanf("%s",filename);
	ret=syscall(sh_task_info,p_id,filename);
	printf("\nThe system call sh_task_info returned : %ld\n\nUse dmesg command to see the kernel log.\n\n",ret);
	return 0;
}
