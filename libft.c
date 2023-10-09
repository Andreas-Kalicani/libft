/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andreasgjertsenkalicani <andreasgjertse    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/12 15:12:08 by andreasgjer       #+#    #+#             */
/*   Updated: 2023/10/08 18:58:08 by andreasgjer      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "libft.h"
#include <stdio.h>
#include <ctype.h>
#include <strings.h>

int main(void)
{
    char buffer[10];
    char b[10] = "Hello";
    char str[] = "Hello world";
    char dest[] = "Hello friend";
    char src[] = "pølse"; 
    char d[] = "bread";
    char s[] = "toast";
    char strs1[] = "Monkey";
    char strs2[] = "Gorilla";
    char strs3[] = "tik";
    char strs4[] = "tok";
    int str2 = 'a';
    char str3 = 'C';
    char str4 = 'A';
    char str5 = '0';
    size_t i = 10;
    const char strs5[] = "www.hello.com";
    const char ch = 'w';
    char *ret;
    const char strs6[] = "www.vg.no";
    const char chr = '.'; 
    char *ret1;
    const char strs7[] = "wwww.facecake.com";
    const char chr2 = '.';
    char *ret2;

 

    // Initialize the buffer to zero using bzero
    bzero(buffer, sizeof(buffer));

    printf("%zu",ft_strlen(str));
    printf("\n");
    printf("%c", ft_toupper(str2));
    printf("\n");
    printf("%c", ft_tolower(str3));
    printf("\n");
    printf("%d", ft_isalpha(str4));
    printf("\n");
    printf("%d", ft_isdigit(str5));
    printf("\n");
    printf("%d", ft_isalnum('H'));
    printf("\n");
    printf("%d", ft_isprint(' '));
    printf("\n");
    ft_memset(str, 'a', 5);
    printf("%s", str);
    printf("Buffer after bzero: %s\n", buffer);
    printf(" before bzero %s \n", b);
    ft_bzero(b, sizeof(b));
    printf("After bzero %s \n", b);
    ft_memcpy(dest, src, sizeof(src));
    printf("New dest: %s\n", dest);
    printf("before memmove : %s\n", d);
    ft_memmove(d, s, 5);
    printf("after memmove : %s\n", d);
    printf("result strlcpy: %zu\n", ft_strlcpy(strs1, strs2, 7));
    printf("result strlcat: %zu\n", ft_strlcat(strs3, strs4, i));
    ret = strchr(strs5, ch);
    printf("string after |%c| |%s| \n", ch, ret);
    ret1 = ft_strchr(strs6, chr);
    printf("ft_strchr result: %c %s \n", chr, ret1);
    ret2 = ft_strrchr(strs7, chr2);
    printf("ft_strrchr result: %c %s \n", chr2, ret2);


}