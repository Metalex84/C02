#include <stdio.h>

char	*ft_str_is_uppercase(char *str);

int	main(void)
{
	char	cadena1[] = "ALEJANDRITO";
	char	cadena2[] = "ALEJANDRIT0";

	if (ft_str_is_uppercase(cadena1))
		printf("\'%s\': todos sus caracteres son letras mayusculas\n", cadena1);
	else
		printf("\'%s\': aqui alguno no es una mayuscula\n", cadena1);
	
	if (ft_str_is_uppercase(cadena2))
		printf("\'%s\': todos sus caracteres son letras mayusculas\n", cadena2);
	else
		printf("\'%s\': aqui alguno no es una mayuscula\n", cadena2);
	return (0);
}
