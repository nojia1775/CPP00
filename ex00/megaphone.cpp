#include <iostream>

int	main(int argc, char **argv)
{
	if (argc == 1)
		return (std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl, 0);
	for (int i = 1 ; i < argc ; i++)
	{
 		for (int j = 0 ; argv[i][j] ; j++)
		{
			if (islower(argv[i][j]))
				std::cout << (char)(argv[i][j] - 32);
			else
				std::cout << argv[i][j];
		}
		std::cout << " ";
	}
	std::cout << std::endl;
	return 0;
}