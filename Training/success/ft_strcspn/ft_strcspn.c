
#include <unistd.h>


size_t	ft_strcspn(const char *s, const char *reject)
{
     size_t c;
     size_t i;
     

     c = 0;
     i = 0;
   
     while (s[i] != '\0')
     {
        while (reject[c] != '\0')
        {
            if (s[i] == reject[c])
            {
                i++;
            }
            c = 0;        
        }
          
     }
     return (i);

}

/*
int main (int argc, char **argv)
{
    printf("%zu", ft_strcspn(argv[1], argv[2]));
    return (0);
}
*/