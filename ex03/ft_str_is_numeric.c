//#include <unistd.h>
#include <stdio.h>

int check_numeric(char c)
{
    if ((c >= '0') && (c <= '9'))
    {
        return (1);
    }
    return (0);
}

int ft_str_is_numeric(char* str)
{
    unsigned int    i;

    i = 0;
    while (str[i] != '\0')
    {
        if (!(check_numeric(str[i])))
        {
            return (0);
        }
        i++;
    }
    return (1);
}

int main()
{
    char str[] = "12345";

    if (ft_str_is_numeric(str))
    {
        printf("The string contains only numeric characters.\n");
    }
    else
    {
        printf("The string contains non-numeric characters.\n");
    }
    return (0);
}