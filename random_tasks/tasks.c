#include <stdio.h>
#include <stdlib.h>
#define NUM_TASKS 3 // to be defined

int	main(void)
{
	int	a;
	a = 0;

	char arr[NUM_TASKS][100] = {"task1", "task2", "task3"};
	
	while (a < NUM_TASKS)
	{
		printf("%s", arr[rand() % NUM_TASKS]);
		a++;
	}
}
