#include <stdio.h>

float	toCelsius(int fahrenheit)
{
	return (5.0/9 * (fahrenheit - 32));
}

int	main(void)
{
	int	fahrenheit;
	int	limit;
	
	fahrenheit = 0;
	limit = 10;

	printf("Fahrenheit\tCelsius\n");

	while(fahrenheit <= limit)
	{
		printf("%d\t\t%.2f\n", fahrenheit, toCelsius(fahrenheit));
		fahrenheit++;
	}
	return 0;
}
