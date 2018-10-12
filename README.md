# All Tests LIBFT

Nomenclature :

-   ✅ : pass test
-   🚫 : fail test
-   🆗 : function not asked but working
-   ❗️ : miss something

| name func       |              moulitest              | Maintest | libft Unit test | My test |
| --------------- | :---------------------------------: | :------: | :-------------: | :-----: |
| ft_atoi.c       |                  ✅                  |     ✅    |     ✅ ❗️long    |    🚫   |
| ft_bzero.c      |                  ✅                  |     ✅    |        ✅        |    🚫   |
| ft_isalnum.c    |                  ✅                  |     ✅    |        ✅        |    🚫   |
| ft_isalpha.c    |                  ✅                  |     ✅    |        ✅        |    🚫   |
| ft_isascii.c    |                  ✅                  |     ✅    |        ✅        |    🚫   |
| ft_isdigit.c    |                  ✅                  |     ✅    |        ✅        |    🚫   |
| ft_islower.c    |                  🆗                 |    🆗    |        🆗       |    🚫   |
| ft_isprint.c    |                  ✅                  |     ✅    |        ✅        |    🚫   |
| ft_isspace.c    |                  🆗                 |    🆗    |        🆗       |    🚫   |
| ft_isupper.c    |                  🆗                 |    🆗    |        🆗       |    🚫   |
| ft_itoa.c       |                  ✅                  |     ✅    |        ✅        |    🚫   |
| ft_lstadd.c     |                  🚫                 |    🚫    |        🚫       |    🚫   |
| ft_lstdel.c     |                  🚫                 |    🚫    |        🚫       |    🚫   |
| ft_lstdelone.c  |                  🚫                 |    🚫    |        🚫       |    🚫   |
| ft_lstiter.c    |                  🚫                 |    🚫    |        🚫       |    🚫   |
| ft_lstmap.c     |                  🚫                 |    🚫    |        🚫       |    🚫   |
| ft_lstnew.c     |                  🚫                 |    🚫    |        🚫       |    🚫   |
| ft_memalloc.c   |                  ✅                  |     ✅    |        ✅        |    🚫   |
| ft_memccpy.c    |                  ✅                  |     ✅    |        ✅        |    🚫   |
| ft_memchr.c     |                  ✅                  |     ✅    |        ✅        |    🚫   |
| ft_memcmp.c     |                  ✅                  |     ✅    |        ✅        |    🚫   |
| ft_memcpy.c     |                  ✅                  |     ✅    |        ✅        |    🚫   |
| ft_memdel.c     |                  ✅                  |     ✅    |        ✅        |    🚫   |
| ft_memmem.c     |                  🚫                 |    🚫    |        🚫       |    🚫   |
| ft_memmove.c    |                  ✅                  |     ✅    |        ✅        |    🚫   |
| ft_memset.c     |                  ✅                  |     ✅    |        ✅        |    🚫   |
| ft_nbrlen.c     |                  🆗                 |    🆗    |        🆗       |    🚫   |
| ft_power.c      |                  🆗                 |    🆗    |        🆗       |    🚫   |
| ft_putchar.c    |                  ✅                  |     ✅    |   ✅ ❗️Unicode   |    🚫   |
| ft_putchar_fd.c |                  ✅                  |     ✅    |   ✅ ❗️Unicode   |    🚫   |
| ft_putendl.c    |                  ✅                  |     ✅    |        ✅        |    🚫   |
| ft_putendl_fd.c |                  ✅                  |     ✅    |        ✅        |    🚫   |
| ft_putnbr.c     |                  ✅                  |     ✅    |        ✅        |    🚫   |
| ft_putnbr_fd.c  |                  ✅                  |     ✅    |        ✅        |    🚫   |
| ft_putstr.c     |                  ✅                  |     ✅    |        ✅        |    🚫   |
| ft_putstr_fd.c  |                  ✅                  |     ✅    |        ✅        |    🚫   |
| ft_strcat.c     |     🚫 buf == ft_strcat(buf, "")    |     ✅    |        ✅        |    🚫   |
| ft_strchr.c     |                  ✅                  |     ✅    |        ✅        |    🚫   |
| ft_strclr.c     |                  ✅                  |     ✅    |        ✅        |    🚫   |
| ft_strcmp.c     |                  ✅                  |     ✅    |        ✅        |    🚫   |
| ft_strcpy.c     |                  ✅                  |     ✅    |        ✅        |    🚫   |
| ft_strdel.c     |                  ✅                  |     ✅    |        ✅        |    🚫   |
| ft_strdup.c     |                  ✅                  |     ✅    |        ✅        |    🚫   |
| ft_strequ.c     |                  ✅                  |     ✅    |        ✅        |    🚫   |
| ft_striter.c    |                  ✅                  |     ✅    |        ✅        |    🚫   |
| ft_striteri.c   |                  ✅                  |     ✅    |        ✅        |    🚫   |
| ft_strjoin.c    |                  ✅                  |     ✅    |        ✅        |    🚫   |
| ft_strlcat.c    |                  🚫                 |    🚫    |        🚫       |    🚫   |
| ft_strlen.c     |                  ✅                  |     ✅    |        ✅        |    🚫   |
| ft_strmap.c     |                  ✅                  |     ✅    |        ✅        |    🚫   |
| ft_strmapi.c    |                  ✅                  |     ✅    |        ✅        |    🚫   |
| ft_strncat.c    | 🚫 strcmp(buf, "To be or not") == 0 |     ✅    |        ✅        |    🚫   |
| ft_strncmp.c    |                  ✅                  |     ✅    |        ✅        |    🚫   |
| ft_strncpy.c    |                  ✅                  |     ✅    |        ✅        |    🚫   |
| ft_strnequ.c    |                  ✅                  |     ✅    |        ✅        |    🚫   |
| ft_strnew.c     |                  ✅                  |     ✅    |        ✅        |    🚫   |
| ft_strnlen.c    |                  🆗                 |    🆗    |        🆗       |    🚫   |
| ft_strnstr.c    |                  🚫                 |    🚫    |        🚫       |    🚫   |
| ft_strrchr.c    |                  ✅                  |     ✅    |        ✅        |    🚫   |
| ft_strreplace.c |                  🆗                 |    🆗    |        🆗       |    🚫   |
| ft_strrev.c     |                  🆗                 |    🆗    |        🆗       |    🚫   |
| ft_strsplit.c   |                  🚫                 |    🚫    |        🚫       |    🚫   |
| ft_strstr.c     |                  ✅                  |     ✅    |        ✅        |    🚫   |
| ft_strsub.c     |                  🚫                 |     ✅    |        ✅        |    🚫   |
| ft_strtrim.c    |                  ✅                  |     ✅    |        ✅        |    🚫   |
| ft_tolower.c    |                  ✅                  |     ✅    |        ✅        |    🚫   |
| ft_toupper.c    |                  ✅                  |     ✅    |        ✅        |    🚫   |
