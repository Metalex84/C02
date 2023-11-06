#include <stdio.h>

char	*ft_strupcase(char *str);

int	main(void)
{
	char	cadena1[] = "te he dicho que no mires atras...";
	printf("\'%s\'\n", cadena1);
	ft_strupcase(cadena1);
	printf("\'%s\'\n", cadena1);
	return (0);
}
