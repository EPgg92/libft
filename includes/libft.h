

#ifndef LIBFT_H
#	define LIBFT_H
#	include <stdlib.h>
#	include <unistd.h>
#	include <string.h>

#	define MAX(a,b) ({ __typeof__ (a) _a = (a); __typeof__ (b) _b = (b); _a > _b ? _a : _b; })
#	define MIN(a,b) ({ __typeof__ (a) _a = (a); __typeof__ (b) _b = (b); _a < _b ? _a : _b; })
	// mem
	void *ft_memalloc(size_t size);
	void *ft_memccpy(void *dst, const void *src, int c, size_t n);
	void *ft_memchr(const void *s, int c, size_t n);
	void *ft_memcpy(void *dst, const void *src, size_t n);
	void ft_memdel(void **ap);
	void *ft_memmove(void *dst, const void *src, size_t n);
	void *ft_memset(void *b, int c, size_t len);
	int ft_memcmp(const void *s1, const void *s2, size_t n);
	void *ft_bzero(void *b, size_t n);
	// is
	int ft_isupper(int c);
	int ft_islower(int c);
	int ft_isalpha(int c);
	int ft_isdigit(int c);
	int ft_isalnum(int c);
	int ft_isprint(int c);
	int ft_isascii(int c);
	// conv
	int ft_toupper(int c);
	int ft_tolower(int c);
	// str
	char *ft_strnew(size_t size);
	int	ft_strlen(const char *str);
	char *ft_strchr(const char *s, int c);
	void ft_strclr(char *s);
	void ft_strdel(char **as);
	int strcmp(const char *s1, const char *s2);
	//char *ft_strncpy(char *dst, const char *src, size_t len);
	//char *ft_strcpy(char * dst, const char * src);




#endif
