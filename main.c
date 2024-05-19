#include "libft.h"
#include <stdio.h>
#include <string.h>

int main(void)
{
	const char	*str = "Diogo Walter";
	char	m_test[] = "Diogo Walter"; //teste ft_memset
	char	b_test[] = "Diogo Walter"; //teste ft_bzero
	char buffer1[20] = "1234567890";
    	char buffer2[20] = "1234567890";
	char	c = 'o';
	char	*ptr = ft_strchr(str,c); //teste ft_strchr
	char	*ptr2 = ft_strrchr(str,c); //teste ft_strrchr
	int	i = 0;
	size_t len; //teste ft_strlcpy
	size_t len_cat; //teste ft_strlcat
	char src[] = "Hello, world!"; //teste ft_strlcpy
    	char dest[20]; //teste ft_strlcpy
	char	str1[21] = "Diogo Walter"; //teste ft_strlcat
	char	*str2 = "Q B Joao"; //teste ft_strlcat
	size_t	s_memchr = 4; //teste ft_memchr
	char	str3[13] = "Diogo Walter"; //Teste ft_memchr
	int	n_memcmp = 6;
	const char *big = "Hello, world!"; //Teste ft_memcmp
    	const char *little = "world"; //Teste ft_memcmp 
   	size_t len_memcmp = 13; //Teste ft_memcmp 
	
	
	printf("/1/Teste ft_strlen:  O nome Diogo Walter tem %zu caracteres.\n", ft_strlen(str)); //Teste ft_strlen
	printf("/2/Teste ft_strncmp:  As strings são %i\n", ft_strncmp("Diogo","Diogo",2)); //Teste ft_strncmp
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

	ft_memmove(buffer1 + 10, buffer1, 0); //Teste ft_memmove
	printf("/15/Teste ft_memmove:	Resultado 1: %s\t", buffer1 + 10); //Teste ft_memmove

	ft_memmove(buffer1 + 10, buffer1, 10); //Teste ft_memmove
	printf("/15/Teste ft_memmove:	Resultado 1: %s\t", buffer1 + 10); //Teste ft_memmove

	ft_memmove(buffer2 + 4, buffer2, 10);//Teste ft_memmove
	printf("/15/Teste ft_memmove:	Resultado 2: %s\n", buffer2);//Teste ft_memmove

    	len = ft_strlcpy(dest, src, sizeof(dest));//Teste ft_strlcpy
	printf("/16/Teste ft_strlcpy:	Teste 1: dest = '%s', comprimento = %zu\t", dest, len);//Teste ft_strlcpy string com tamanho suficiente

	len = ft_strlcpy(dest, src, 6);//Teste ft_strlcpy
	printf("/16/Teste ft_strlcpy:	este 2: dest = '%s', comprimento = %zu\n", dest, len);//Teste ft_strlcpy string com tamanho insuficiente
	
	len_cat = ft_strlcat(str1, str2, sizeof(str1));//Teste ft_strlcat
	printf("/17/Teste ft_strlcat:	Tamanho total após a concatenação: %zu -> %s\n", len_cat, str1);//Teste ft_strlcat
	
	void *result = ft_memchr(str3, c, s_memchr);// Teste ft_memchr:

    		if (result != NULL) {
        		printf("/18/Teste ft_memchr:	Caractere '%c' encontrado na posição %td\n", c, (char *)result - str3);
    		} else {
        printf("/18/Teste ft_memchr:	Caractere '%c' não encontrado nos primeiros %zu bytes\n", c, s_memchr);
    		}
    		
    		
    	int result_memcmp = ft_memcmp(str, str2, n_memcmp);
    	printf("/19/Teste ft_memchr:	Resultado de ft_memcmp: %d\n", result_memcmp); //Teste ft_memchr
    	
    	
    	char *result_memcmpr = ft_strnstr(big, little, len_memcmp); //Teste ft_memcmpr

    if (result != NULL) {
        printf("/20/Teste ft_memcmpr:	Substring '%s' encontrada na posição %td\n", little, result_memcmpr - big); //Teste ft_memcmpr
    } else {
        printf("/20/Teste ft_memcmpr:	Substring '%s' não encontrada nos primeiros %zu caracteres\n", little, len); //Teste ft_memcmpr
    }
	
	//Teste :	ft_atoi
	const char	*str1_a = "   -1234";
	const char	*str2_a = "5678";	
	const char	*str3_a = "42 is the answer";

	printf("/21/Teste ft_atoi:	%d\t", ft_atoi(str1_a));
	printf("/21/Teste ft_atoi:	%d\t", ft_atoi(str2_a));	
	printf("/21/Teste ft_atoi:	%d\n", ft_atoi(str3_a));

	//Teste :	ft_calloc
	size_t	num_elem = 10;
	size_t	size_of_elem = sizeof(int);
	
	int *array = (int *)ft_calloc(num_elem, size_of_elem);
	if (array == NULL)
	{
		printf("/22/Teste ft_alloc:	Falha na alocação de memória\n");
		return 1;
	}
	int allocation_successful = 1;
	for (size_t i = 0; i < num_elem; i++)
	{
		if (array[i] != 0)
		{
			allocation_successful = 0;
			break;
		}
	}
	if (allocation_successful)
		printf("/22/Teste ft_alloc:	Todos os elementos foram inicializados para zero.\n");
	else
		printf("/22/Teste ft_alloc:	Erro: Nem todos os elementos foram inicializados para zero.\n");	
	free (array);
	
	
	//Teste :	ft_strdup
	char *dup = ft_strdup(str);
	if (dup == NULL)
	{
		printf("/23/Teste ft_strdup:	Falha na duplicação da string\n");
		return 1;
	}
	printf("/23/Teste ft_strdup:	Original -> %s.\t",str);
	printf("/23/Teste ft_strdup:	Duplicada -> %s.\n",dup);
	free (dup);


	//Teste :	ft_substr
	char	*substr = ft_substr(str, 6, 6);
	if (substr != NULL)
	{
		printf("/24/Teste ft_substr:	Substring: %s.\n", substr);
		free (substr);
	}
	else
		printf("/24/Teste ft_substr:	Falha na extração da substring.\n");
		
		
	//Teste :	ft_strjoin
	const char	*j1 = "Diogo ";
	const char	*j2 = "Walter";
	char *joined_str = ft_strjoin(j1,j2);
	if (joined_str == NULL)
	{
		printf("/25/Teste ft_strjoin:	Falha na concatenação das strings\n");
		return 1;
	}
	printf("/25/Teste ft_strjoin:	String Concatenada -> %s.\n",joined_str);
	free (joined_str);
	
	
	//Teste :	ft_strtrim
	const char *str_trim = "   Hello, World!   ";
    	const char *set = " ";
	char	*trimmed_str = ft_strtrim(str_trim, set);
	if (trimmed_str == NULL)
	{
        	printf("/26/Teste ft_strtrim:	Falha na operação de aparar a string\n");
        	return 1;
    	}
	printf("/26/Teste ft_strtrim:	String aparada: '%s'\n", trimmed_str);
	free(trimmed_str);


	
	return (0);
}
