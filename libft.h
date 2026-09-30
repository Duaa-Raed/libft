/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dalinein <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/29 10:32:49 by dalinein          #+#    #+#             */
/*   Updated: 2026/09/29 11:09:09 by dalinein         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <stdlib.h>
# include <stddef.h>
# include <unistd.h>



int	ft_atoi(const char *str);
void	ft_bzero(void *c, size_t n);
void	*ft_calloc(size_t count, size_t size);
int	ft_isalnum(int c);
int	ft_isalpha(int c);
int	ft_isascii(int c);
int	ft_isdigit(int c);
int	ft_isprint(int c);
void	*ft_memchr(const void *s, int c, size_t n);
int	ft_memcmp(const void *s1, const void *s2, size_t);
void	*ft_memcpy(void *dst, const void *src, size_t n);
void	*ft_memset(void *b, int c, size_t len);
char	*ft_strchr(const char *s, int c);
char	*ft_strdup(const char *s);
char	*ft_strjoin(char const *s1, char const *s2);
size_t	ft_strlcat(char *dst, const char *src, size_t size);
size_t	ft_strlcpy(char *dest, const char *src, size_t destsize);
size_t	ft_strlen(const char *c);
char	ft_strncmp(const char *s1, const char *s2, size_t n);
char	*ft_strnstr(const char *haystack, const char *needle, size_t len);
char	*ft_strrchr(const char *s, int c);
char	*ft_strtrim(char const *s1, char const *set);
char	*ft_substr(char const *s, unsigned int start, size_t len);
int	ft_tolower(int x);
int	ft_toupper(int x);

#endif
