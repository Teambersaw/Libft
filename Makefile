CC = gcc

CFLAGS = -Wall -Wextra -Werror

SRCS = ft_isalpha.c ft_isdigit.c ft_isalnum.c ft_isascii.c \
           ft_isprint.c ft_strlen.c ft_memset.c ft_bzero.c \
           ft_memcpy.c ft_memmove.c ft_strlcpy.c ft_strlcat.c \
           ft_strncmp.c ft_strdup.c ft_atoi.c ft_toupper.c \
           ft_tolower.c ft_strchr.c ft_strrchr.c ft_memchr.c \
           ft_memcmp.c ft_strnstr.c ft_calloc.c ft_substr.c \
		   ft_strjoin.c ft_strtrim.c ft_split.c \
		   ft_putchar_fd.c ft_putstr_fd.c ft_putendl_fd.c \
		   ft_putnbr_fd.c ft_itoa.c ft_strmapi.c ft_striteri.c \
		   get_next_line.c get_next_line_utils.c \

SRCS2 = ft_lstnew.c ft_lstadd_front.c ft_lstsize.c ft_lstlast.c \
		ft_lstadd_back.c ft_lstdelone.c ft_lstclear.c ft_lstiter.c \
		ft_lstmap.c \

OBJS = ${SRCS:.c=.o}

OBJS2 = ${SRCS2:.c=.o}

NAME = libft.a

$(NAME): ${OBJS}
	ar rc ${NAME} ${OBJS}

all: ${NAME}

bonus: ${OBJS2} ${OBJS}
	ar rc ${NAME} ${OBJS2} ${OBJS}

clean:
	rm -f ${OBJS} ${OBJS2}

fclean: clean
	rm -f ${NAME}

re: fclean all

.PHONY: all clean fclean re bonus