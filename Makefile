NAME := libft.a
HEADER := libft.h
CFLAGS := -Wall -Werror -Wextra
SRCS := ft_atoi.c		ft_bzero.c		ft_calloc.c		\
		ft_isalnum.c	ft_isalpha.c	ft_isascii.c	\
		ft_isdigit.c	ft_isprint.c	ft_memchr.c		\
		ft_memcmp.c		ft_memcpy.c		ft_memmove.c	\
		ft_memset.c		ft_strchr.c		ft_strdup.c		\
		ft_strlcat.c	ft_strlcpy.c	ft_strlen.c		\
		ft_strncmp.c	ft_strnstr.c	ft_strrchr.c	\
		ft_tolower.c	ft_toupper.c

SRCS += ft_substr.c		ft_strjoin.c	ft_strtrim.c	\
		ft_split.c

OBJS := $(SRCS:.c=.o)
OUT = ./a.out

all: $(NAME)

$(NAME): $(OBJS)
	@ar -rc $(NAME) $(OBJS)
	@echo "Library $(NAME) created with success."
	@ranlib $(NAME)
	@echo "Library $(NAME) indexed with success."

%.o: %.c
	@$(CC) $(CFLAGS) -c $< -o $@ -I $(HEADER)
	@echo "Object created with success."

clean:
	@rm -f $(OBJS)
	@echo "All objects removed with success."

fclean: clean
	@rm -f $(NAME)
	@echo "Library $(NAME) removed with success."

re: fclean all

test:
	$(CC) $(CFLAGS) -lbsd main.c $(NAME) && $(OUT)

.PHONY: all, clean, fclean, re, .o, test
