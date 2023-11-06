#include <stdio.h>

char	*ft_str_is_alpha(char *str);

int	main(void)
{
	char	cadena1[] = "Fundaci0n";
	char	cadena2[] = "Fundacion";

	if (ft_str_is_alpha(cadena1))
		printf("\'%s\': todos sus caracteres son letras\n", cadena1);
	else
		printf("\'%s\': aqui alguno no es una letra\n", cadena1);
	
	if (ft_str_is_alpha(cadena2))
		printf("\'%s\': todos sus caracteres son letras\n", cadena2);
	else
		printf("\'%s\': aqui alguno no es una letra\n", cadena2);
	return (0);
}
