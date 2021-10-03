#include <stdlib.h>
#include <sys/types.h>
#include <unistd.h>

int main()
{
	
	int pid = fork();

	
	if (pid <= 1)
		sleep(20);

	
	else
	{
		exit(1);
	}
	
	return 1;

}


