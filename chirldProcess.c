#include <stdio.h>
#include <sys/types.h>
#include <unistd.h>

int main(int argc, char const *argv[])
{
	//pid_t is a data type, actually works as an integer
	pid_t pid;
	pid_t cid;
	//getpid() function is used to returning  the current process's id

	printf("before fork process id :%d\n",getpid());	//6101
	cid = fork();
	//fork function can be used to create a new process, and the new process is a child process of the current process
	printf("after fork,process id:%d\n",cid);
	pause();
	return 0;
}
