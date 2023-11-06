#include <stdio.h>

unsigned int	*ft_strlcpy(char *dest, char *src, unsigned int size);

int	main(void)
{
	char	cadena1[50] = "Fundacion";
	char	cadena2[50] = "";
	ft_strlcpy(cadena2, cadena1, 5);
	printf("%s\n", cadena2);
	return (0);
}
