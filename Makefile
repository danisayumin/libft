CC = gcc

FLAGS = -Wall -Werror -Wextra

NAME = libft.a

SRC = ft_isalnum.c \
	ft_isalpha.c \
	ft_isascii.c \
	ft_isdigit.c \
	ft_isprint.c \
	ft_strlen.c \
	ft_toupper.c \
	ft_tolower.c \
	ft_strchr.c \
	ft_strrchr.c \
	ft_strncmp.c \
	ft_memset.c \
	ft_strlcpy.c \
	ft_strlcat.c \
	ft_bzero.c \
	ft_memcpy.c \
	ft_memset.c \
	ft_atoi.c \
	ft_memchr.c \
	ft_memcmp.c \
	ft_memmove.c \
	ft_strdup.c \
	ft_strnstr.c \
	ft_substr.c \
	ft_strtrim.c \
	ft_split.c \
	ft_itoa.c \
	ft_strmapi.c \
	ft_striteri.c \
	ft_putchar_fd.c \
	ft_putstr_fd.c \
	ft_putendl_fd.c \
	ft_putnbr_fd.c

INCLUDE = ./include

OBJ = $(SRC:.c=.o)

all: libft.a

libft.a: $(OBJ)
	ar rcs $@ $^

%.o: %.c
	$(CC) $(FLAGS) -c $< -I $(INCLUDE) -o $@

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f libft.a

re: fclean all
