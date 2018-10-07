

#ifndef LIBFT_H
#	define LIBFT_H
#	include <stdlib.h>
#	include <unistd.h>

	void *ft_memalloc(size_t size);
	void *ft_memccpy(void *dst, const void *src, int c, size_t n);
	void *ft_memchr(const void *s, int c, size_t n);
	void *ft_memcpy(void *dst, const void *src, size_t n);
	void ft_memdel(void **ap);
	void *ft_memmove(void *dst, const void *src, size_t n);
	void *ft_memset(void *b, int c, size_t len);
	int ft_memcmp(const void *s1, const void *s2, size_t n);
	void *ft_bzero(void *b, size_t n);

	int ft_isupper(char c);
	int ft_islower(char c);
	int ft_isalpha(char c);
	int ft_isdigit(char c);
	int ft_isalnum(char c);
	int ft_isprint(char c);
	int ft_isascii(char c);

#endif
