// #include <unistd.h>
#include <stdio.h>

char* ft_strcpy(char* dest, char* src)
{
    unsigned int     i;

    i = 0;
    while (src[i] != '\0')
    {
        dest[i] = src[i];
        i++;
    }
    dest[i] = '\0';
    return dest;
}

int main()
{
    char src[] = "Hello, world!";
    char dest[50];

    ft_strcpy(dest, src);
    write(1, src, 13);
    write(1, "\n", 1);
    write(1, dest, 13);
    return 0;
}
