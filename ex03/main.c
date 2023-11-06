#include <stdio.h>

char	*ft_str_is_numeric(char *str);

int	main(void)
{
	char	cadena1[] = "6546742682";
	char	cadena2[] = "38746598ff";

	if (ft_str_is_numeric(cadena1))
		printf("\'%s\': todos sus caracteres son numeros\n", cadena1);
	else
		printf("\'%s\': aqui alguno no es un numero\n", cadena1);
	
	if (ft_str_is_numeric(cadena2))
		printf("\'%s\': todos sus caracteres son numeros\n", cadena2);
	else
		printf("\'%s\': aqui alguno no es un numero\n", cadena2);
	return (0);
}
