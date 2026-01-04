#include <stdio.h>

int	toCelsius(int fahrenheit)
{
	return (int)(5.0/9 * (fahrenheit - 32));
}

int	main(void)
{
	int	fahrenheit;
	int	celsius;
	int	limit;
	
	fahrenheit = 1;
	limit = 10;

	printf("Fahrenheit\tCelsius%d\n", (int)(5.0 / 9 * (1 - 32)) );

	while(fahrenheit < limit)
	{
		printf("%d\t%d\n", fahrenheit, toCelsius(fahrenheit));
		fahrenheit++;
	}
	return 0;
}
