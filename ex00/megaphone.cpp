#include <iostream>

int	main(int argc, char **argv)
{
	for (int i = 1; i < argc; ++i)
	{
		for (int j = 0; argv[i][j]; ++j)
			std::cout << (unsigned char)std::toupper(argv[i][j]);
		if (i < argc - 1)
			std::cout << " ";
		else
			std::cout << std::endl;
	}
	return (0);
}
