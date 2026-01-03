#include <unistd.h>
void	not_putchar(char c)
{
	write(1, &c, 1);
}

int	main(int argc, char **argv)
{
	int a;
	a = 0;
	if (argc != 2)
		return 1;
	while ((2 * a + 1) < (int)argv[0])
	{
		not_putchar(a - '0');
		a++;
	}
}


