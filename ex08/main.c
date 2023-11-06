#include <stdio.h>

char	*ft_strlowcase(char *str);

int	main(void)
{
	char	cadena1[] = "¡SIRENA, VUELVE AL MAR!";
	printf("\'%s\'\n", cadena1);
	ft_strlowcase(cadena1);
	printf("\'%s\'\n", cadena1);
	return (0);
}
