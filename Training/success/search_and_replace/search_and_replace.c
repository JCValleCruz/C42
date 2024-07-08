#include <unistd.h>

void    ft_putchar (char c)
{
    write (1, &c, 1);
}

void    ft_search (char *str, char x, char y)
{
    int i;

    i = 0;
    while (str[i] != '\0')
    {
        if (str[i] == x)
        {
            str[i] = y;
        }
        ft_putchar(str[i]);
        i++;
    }
    ft_putchar ('\n');
}

int main (int argc, char **argv)
{
    int i = 0;

    if (argc != 4)
    {
        ft_putchar('\n');
        return (-1);
    }
    while (argv[2][i] != '\0' || argv[3][i] != '\0')
    {
        i++;
        if (argv[2][i] >= 1 || argv[3][i] >= 1)
        {
            ft_putchar('\n');
            return (-1);
        }
    }
    
    ft_search(argv[1], argv[2][0], argv[3][0]);
    return (0);
}