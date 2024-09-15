#include <iostream>

int	main(int argc, char **argv)
{
	for (int i = 1; i < argc; ++i)
	{
		std::string	arg = argv[i];
		for (std::size_t j = 0; j < arg.length(); ++j)
			std::cout << static_cast<unsigned char>(std::toupper(arg[j]));
		if (i < argc - 1)
			std::cout << " ";
		else
			std::cout << std::endl;
	}
	return (0);
}
