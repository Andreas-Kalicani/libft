/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andreasgjertsenkalicani <andreasgjertse    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/12 15:07:42 by andreasgjer       #+#    #+#             */
/*   Updated: 2023/10/08 17:50:25 by andreasgjer      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef LIBFT_H
#define LIBFT_H
#include <stdlib.h>
#include <unistd.h>

size_t ft_strlen(const char *s);
int ft_isdigit(int c);
int ft_tolower(int c);
int ft_toupper(int c);
int ft_isalpha(unsigned char str);
int ft_isascii(int c);
int ft_isalnum(int c);  
int ft_isprint(int c);
void *ft_memset(void *b, int c, size_t len);
void ft_bzero(void *s, size_t n);
void *ft_memcpy(void *restrict dst, const void *restrict src, size_t n);
void *ft_memmove(void *dst, const void *src, size_t len);
size_t ft_strlcpy(char *restrict dst, const char * restrict src, size_t dstsize);
size_t ft_strlcat(char *restrict s1, const char *restrict s2, size_t n);
char *ft_strchr(const char *str, int c);
char *ft_strrchar(const char *str, int c);

#endif
