//#include <unistd.h>
#include <stdio.h>

int check_alpha(char c)
{
    if ((c >= 'a') && (c <= 'z'))
    {
        return (1);
    }
    if ((c >= 'A') && (c <= 'Z'))
    {
        return (1);
    }
    return (0);
}

int ft_str_is_alpha(char* str)
{
    unsigned int    i;

    i = 0;
    while (str[i] != '\0')
    {
        if (!(check_alpha(str[i])))
        {
            return (0);
        }
        i++;
    }
    return (1);
}

int main()
{
    char str[] = "HelloWorld";

    if (ft_str_is_alpha(str))
    {
        printf("The string only alphabetic characters.\n");
    }
    else
    {
        printf("The string non-alphabetic characters.\n");
    }
    return (0);
}
