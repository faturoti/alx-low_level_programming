#include <stdio.h>
#include <unistd.h>
/**
 * To print pid number
 */
int main(void)
{
	pid_t my_pid, p_pid;
	my_pid = getpid();
	p_pid = getppid();

	printf("%u\n", my_pid);
	printf("%u\n", p_pid);
	return (0);
}
