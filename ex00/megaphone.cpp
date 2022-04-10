#include <iostream>
#include <cctype>



int	main(int argc, char **argv)
{
	if (argc == 1)
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
	else
	{
		for (int i = 1; i < argc; ++i)
		{
			for (size_t j = 0; j < strlen(argv[i]); ++j)
				std::cout << static_cast<char>(toupper(argv[i][j]));
		}
		std::cout << '\n';
	}
	return (0);
}
