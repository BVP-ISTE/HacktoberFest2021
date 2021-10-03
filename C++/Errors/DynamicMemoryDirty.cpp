#include <stdio.h>
#include <stdlib.h>

int main()
{
		int*iVar;

		iVar=(int*)malloc((sizeof(int))) ;

		printf("Now, input an integer value: ");
		scanf("%d",iVar);

		printf("Great!!! you entered: %d \n",*iVar);

		free(iVar);
		return 0;
}

