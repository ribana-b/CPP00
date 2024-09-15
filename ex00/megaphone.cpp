#include <iostream>

int	main(int argc, char **argv)
{
	for (int i = 1; i < argc; ++i)
	{
		std::string	arg = argv[i];
		for (std::string::iterator it = arg.begin(); it != arg.end(); ++it)
			std::cout << static_cast<unsigned char>(std::toupper(*it));
		if (i < argc - 1)
			std::cout << " ";
		else
			std::cout << std::endl;
	}
	return (0);
}
