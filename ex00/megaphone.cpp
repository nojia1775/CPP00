#include <iostream>

int     main(int argc, char **argv)
{
        int             i;
        char    c;

        if (argc != 2)
                return (1);
        i = 0;
        while (argv[1][i])
        {
                if (argv[1][i] >= 'a' && argv[1][i] <= 'z')
                        c = argv[1][i] - 32;
                else
                        c = argv[1][i];
                std::cout << c;
                i++;
        }
        std::cout << std::endl;
        return (0);
}