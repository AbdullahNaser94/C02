#include <stdio.h>

int check_printable(char c)
{
    if ((c >= ' ') && (c <= '~'))
    {
        return (1);
    }
    return (0);
}

int ft_str_is_printable(char* str)
{
    unsigned int i;
    
    i = 0;
    while (str[i] != '\0')
    {
        if (!(check_printable(str[i])))
        {
            return (0);
        }
        i++;
    }
    return (1);
}

int main()
{
    char str[] = "Hello, World!";

    if (ft_str_is_printable(str))
    {
        printf("The string contains only printable characters.\n");
    }
    else
    {
        printf("The string contains non-printable characters.\n");
    }
    return (0);
}