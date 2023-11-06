#include <stdio.h>

char	*ft_str_is_printable(char *str);

int	main(void)
{
	char	cadena1[] = {72, 111, 108, 97, 33};
	char	cadena2[] = {72, 27, 108, 97, 33};

	if (ft_str_is_printable(cadena1))
		printf("\'%s\': todos sus caracteres son imprimibles\n", cadena1);
	else
		printf("\'%s\': aqui alguno no es imprimible\n", cadena1);
	
	if (ft_str_is_printable(cadena2))
		printf("\'%s\': todos sus caracteres son imprimibles\n", cadena2);
	else
		printf("\'%s\': aqui alguno no es imprimible\n", cadena2);
	return (0);
}