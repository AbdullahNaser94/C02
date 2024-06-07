// #include <unistd.h>

char* ft_strncpy(char* dest, char* src, unsigned int n)
{
	unsigned int    i;

	i = 0;
	while (src[i] != '\0' && i < n)
	{
		dest[i] = src[i];
		i++;
	}

	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return dest;
}

int main()
{
	char src[] = "Hello, world!";
	char dest[20];

	ft_strncpy(dest, src, 13);
	write(1, dest, 13);
	return 0;
}
