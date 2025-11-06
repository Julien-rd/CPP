#include <iostream>

int	main(int argc, char **argv)
{
	int	i;
	int	z;

	i = 0;
	z = 1;
	if (argc == 1)
		return (std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl, 0);
	while (argv[z])
	{
		i = 0;
		while (argv[z][i])
		{
			if (argv[z][i] >= 'a' && argv[z][i] <= 'z')
				argv[z][i] -= 32;
			i++;
		}
		z++;
	}
	z = 0;
	while (argv[++z])
		std::cout << argv[z];
	std::cout << std::endl;
	return (0);
}
