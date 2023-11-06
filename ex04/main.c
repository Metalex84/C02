#include <stdio.h>

char	*ft_str_is_lowercase(char *str);

int	main(void)
{
	char	cadena1[] = "alejandrito";
	char	cadena2[] = "aleJandrIto";

	if (ft_str_is_lowercase(cadena1))
		printf("\'%s\': todos sus caracteres son letras minusculas\n", cadena1);
	else
		printf("\'%s\': aqui alguno no es una minuscula\n", cadena1);
	
	if (ft_str_is_lowercase(cadena2))
		printf("\'%s\': todos sus caracteres son letras minusculas\n", cadena2);
	else
		printf("\'%s\': aqui alguno no es una minuscula\n", cadena2);
	return (0);
}
