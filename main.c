#include "libft.h"
#include <stdio.h>

int main(void)
{
    const char    *str = "Diogo Walter";
    char    c = 'o';
    char    *ptr = ft_strchr(str,c); //teste ft_strchr
    char    *ptr2 = ft_strrchr(str,c); //teste ft_strrchr

    printf("//Teste ft_strlen:  O nome Diogo Walter tem %zu caracteres.\n", ft_strlen(str)); //Teste ft_strlen
    printf("//Teste ft_strcmp:  As strings são %i\n", ft_strcmp("Diogo","Diogo")); //Teste ft_strcmp
    if (ptr != NULL) //Teste ft_strchr
        printf("//Teste ft_strchr:  O Caractere %c está presente a partir de %s.\n", c, ptr); //Teste ft_strchr
    else
        printf("//Teste ft_strchr:  Caractere %c não encontrado!.\n",c); //Teste ft_strchr

    if (ptr2 != NULL) //Teste ft_strrchr
        printf("//Teste ft_strrchr: O Caractere %c está presente em %s.\n", c, ptr2); //Teste ft_strrchr
    else
        printf("//Teste ft_strrchr: Caractere %c não encontrado!.\n", c); //Teste ft_strrchr
    


    return (0);
}