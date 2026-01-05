#include <stdio.h>

int	main(void)
{
	int	x;
	x = 0;

	while (x <= 10)
	{
		printf("%d\t-%d\n", x,  x * x);
		x++;
	}
	return 0;
}
