#include <stdio.h>

char	*ft_strcpy(char *dest, char *src);

int	main(void)
{
	char	cadena1[50] = "Fundacion";
	char	cadena2[] = "";
	ft_strcpy(cadena2, cadena1);
	printf("%s\n", cadena2);
	return (0);
}
