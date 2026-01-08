#include <stdio.h>
#define	 LIMIT	10

float	toCelsius(int fahrenheit)
{
	return (5.0/9 * (fahrenheit - 32));
}

int	main(void)
{
	int	fahrenheit;
	
	fahrenheit = 0;

	printf("Fahrenheit\tCelsius\n");

	while(fahrenheit <= LIMIT)
	{
		printf("%d\t\t%.2f\n", fahrenheit, toCelsius(fahrenheit));
		fahrenheit++;
	}
	return 0;
}
