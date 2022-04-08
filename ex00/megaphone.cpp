#include <iostream>
#include <cctype>

int	main(int argc, char **argv)
{
	int	i;
	int	len;
	int	j;

	i = 1;
	if (argc == 1)
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
	else
	{
		while (i < argc)
		{
			j = 0;
			len = strlen(argv[i]);
			while (j < len)
			{
				if (j == len - 1)
					std::cout << (char)toupper(argv[i][j]) << std::endl;
				else
					std::cout << (char)toupper(argv[i][j]);
				j++;
			}
			i++;
		}
	}
	return (0);
}
