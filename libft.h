/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   libft.h                                          .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: epoggio <marvin@le-101.fr>                 +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/10/11 20:06:09 by epoggio      #+#   ##    ##    #+#       */
/*   Updated: 2018/10/11 20:08:45 by epoggio     ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#ifndef LIBFT_H
#	define LIBFT_H
#	include <stdlib.h>
#	include <unistd.h>
#	include <string.h>
#	define MAX(a,b) ({ __typeof__ (a) _a = (a); __typeof__ (b) _b = (b); _a > _b ? _a : _b; })
#	define MIN(a,b) ({ __typeof__ (a) _a = (a); __typeof__ (b) _b = (b); _a < _b ? _a : _b; })
#	define ABS(x)  ({ __typeof__ (x) _x = (x); ((_x) < 0) ? -(_x) : (_x);})
	void	*ft_memalloc(size_t size);
	void	*ft_memccpy(void *dst, const void *src, int c, size_t n);
	void	*ft_memchr(const void *s, int c, size_t n);
	void	*ft_memrchr(const void *s, int c, size_t n);
	void	*ft_memcpy(void *dst, const void *src, size_t n);
	void	ft_memdel(void **ap);
	void	*ft_memmove(void *dst, const void *src, size_t n);
	void	*ft_memset(void *b, int c, size_t len);
	int		ft_memcmp(const void *s1, const void *s2, size_t n);
	void	*ft_bzero(void *b, size_t n);
	void	*ft_memmem(const void *big, size_t big_len, const void *little, size_t little_len);
	int		ft_isupper(int c);
	int		ft_islower(int c);
	int		ft_isalpha(int c);
	int		ft_isdigit(int c);
	int		ft_isalnum(int c);
	int		ft_isprint(int c);
	int		ft_isascii(int c);
	int		ft_isspace(int c);
	int		ft_toupper(int c);
	int		ft_tolower(int c);
	long	ft_nbrlen(int input);
	char	*ft_itoa(int n);
	int		ft_atoi(const char *str);
	char	*ft_strnew(size_t size);
	size_t	ft_strlen(const char *str);
	char	*ft_strchr(const char *s, int c);
	void	ft_strclr(char *s);
	void	ft_strdel(char **as);
	int		ft_strcmp(const char *s1, const char *s2);
	int		ft_strncmp(const char *s1, const char *s2, size_t n);
	char	*ft_strrchr(const char *s, int c);
	int		ft_strnequ(char const *s1, char const *s2, size_t n);
	int		ft_strequ(char const *s1, char const *s2);
	char	*ft_strncpy(char *dst, const char *src, size_t len);
	char	*ft_strcpy(char * dst, const char * src);
	size_t	ft_strnlen(const char *str, size_t n);
	char	*ft_strdup(const char *s1);
	char	*ft_strrev(const char *str);
	char	*fr_strstr(const char *haystack, const char *needle);
	char	**ft_strsplit(char const *s, char c);
	char	*ft_strreplace(char *dst, char chr, char repl_chr);
	void	ft_striter(char *s, void (*f)(char *));
	void	ft_striteri(char *s, void (*f)(unsigned int, char *));
	char	*ft_strmap(char const *s, char (*f)(char));
	char	*ft_strmapi(char const *s, char (*f)(unsigned int, char));
	void	ft_putchar_fd(char c, int fd);
	void	ft_putchar(char c);
	void	ft_putstr(char *str);
	void	ft_putstr_fd(char* str, int fd);
	void	ft_putendl_fd(char *str, int fd);
	void	ft_putendl(char *str);
	void	ft_putnbr_fd(int n, int fd);
	void	ft_putnbr(int n);
	long	ft_power(long x, unsigned long y);
	char	ft_ctoupper(char c);
#endif
