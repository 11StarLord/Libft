#include "libft.h"
#include <stdio.h>

int main(void)
{
	const char	*str = "Diogo Walter";
	char	m_test[] = "Diogo Walter"; //teste ft_memset
	char	b_test[] = "Diogo Walter"; //teste ft_bzero
	char	c = 'o';
	char	*ptr = ft_strchr(str,c); //teste ft_strchr
	char	*ptr2 = ft_strrchr(str,c); //teste ft_strrchr
	int	i = 0;

	printf("/1/Teste ft_strlen:  O nome Diogo Walter tem %zu caracteres.\n", ft_strlen(str)); //Teste ft_strlen
	printf("/2/Teste ft_strcmp:  As strings são %i\n", ft_strcmp("Diogo","Diogo")); //Teste ft_strcmp
	if (ptr != NULL) //Teste ft_strchr
	printf("/3/Teste ft_strchr:  O Caractere %c está presente a partir de %s.\n", c, ptr); //Teste ft_strchr
	else
	printf("/3/Teste ft_strchr:  Caractere %c não encontrado!.\n",c); //Teste ft_strchr

	if (ptr2 != NULL) //Teste ft_strrchr
      	printf("/4/Teste ft_strrchr: O Caractere %c está presente em %s.\n", c, ptr2); //Teste ft_strrchr
	else
	printf("/4/Teste ft_strrchr: Caractere %c não encontrado!.\n", c); //Teste ft_strrchr

	printf("/5/Teste ft_isalnum:  O caractere %i faz parte dos alfanumericos.\n", ft_isalnum(c)); //Teste ft_isalnum
	printf("/6/Teste ft_isalpha:  O caractere %i faz parte do alfabeto.\n", ft_isalpha(c)); //Teste ft_isalpha
	printf("/7/Teste ft_isascii:  O caractere %i faz parte da tabela ascii.\n", ft_isascii(c)); //Teste ft_isascii
	printf("/8/Teste ft_isdigit:  O caractere %i faz parte dos números.\n", ft_isdigit(c)); //Teste ft_isdigit
	printf("/9/Teste ft_isprint:  O caractere %i faz parte dos printaveis.\n", ft_isprint(c)); //Teste ft_isprint
	printf("/10/Teste ft_tolower:  O caractere %i para minusculo.\n", ft_tolower(c)); //Teste ft_tolower
	printf("/11/Teste ft_touuper:  O caractere %i para maiusculo.\n", ft_toupper(c)); //Teste ft_toupper
	printf("/12/Teste ft_memset:  A strinng %s foi alterada para %s.\n", str, (char *)ft_memset(m_test,c , 3)); //Teste ft_memset
	
	ft_bzero(b_test, 3); //Teste ft_bzero
	printf("/13/Teste ft_bzero:  A strinng %s foi alterada para :", str); //Teste ft_bzero
	while(i < (int)ft_strlen(m_test))
	{
		if (b_test[i] == '\0')
		{
			printf("\\0");
		}
		else
		{
			printf("%c", b_test[i]);
		}
		i++;
	}
	printf("\n");

	printf("/14/Teste ft_memcpy:  A strinng %s foi copiada para %s.\n", str, (char *)ft_memcpy(b_test,str , 12)); //Teste ft_memcpy

	return (0);
}
