#include <stdio.h>

char	*ft_strncpy(char *dest, char *src, unsigned int n);

int	main(void)
{
	char	cadena1[50] = "Fundacion";
	char	cadena2[] = "";
	ft_strncpy(cadena2, cadena1, 5);
	printf("%s\n", cadena2);
	return (0);
}
