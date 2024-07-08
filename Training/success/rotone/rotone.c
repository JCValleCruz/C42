#include <unistd.h>

void ft_putchar (char c)
{
    write (1, &c, 1);
}

void    ft_rotone (char *str)
{
    int c = 0;

    while (str[c] != '\0')
    {
        if (str[c] >= 'a' && str[c] <= 'y')
        {
            str[c] += 1; 
        }
        else if (str[c] >= 'A' && str[c] <= 'Y')
        {
            str[c] += 1; 
        }
        else if (str[c] == 'z')
        {
            str[c] = 'a';
        }
        else if (str[c] == 'Z')
        {
            str[c] = 'A';
        }
        ft_putchar (str[c]);
        c++;
    }
}

int main (int argc, char **argv)
{
    if (argc != 2)
    {
        ft_putchar('\n');
        return (-1);
    }
    ft_rotone(argv[1]);
    ft_putchar('\n');
    return (0);
}