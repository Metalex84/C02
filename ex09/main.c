#include <stdio.h>

char	*ft_strcapitalize(char *str);

int	main(void)
{
	char	cadena1[] = "salut, comment tu vas ? 42mots quarante-deux; cinquante+et+un";
	printf("\'%s\'\n", cadena1);
	ft_strcapitalize(cadena1);
	printf("\'%s\'\n", cadena1);
	return (0);
}