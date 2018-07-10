NAME		= libft.a

SRC_DIR		= srcs/
INC_DIR		= includes/

CFLAGS		= -Wall -Werror -Wextra
FILES		=  ft_bzero.c \
				ft_atoi.c \
				ft_isalpha.c \
				ft_isalnum.c \
				ft_isascii.c \
				ft_isdigit.c \
				ft_isprint.c \
				ft_itoa.c \
				ft_memalloc.c \
				ft_strdup.c \
				ft_strcpy.c \
				ft_strlen.c \
				ft_memccpy.c \
				ft_memcpy.c \
				ft_memchr.c \
				ft_memcmp.c \
				ft_memdel.c \
				ft_memmove.c \
				ft_memset.c \
				ft_putchar_fd.c \
				ft_putchar.c \
				ft_putendl_fd.c \
				ft_putendl.c \
				ft_putnbr_fd.c \
				ft_putnbr.c \
				ft_putstr_fd.c \
				ft_putstr.c \
				ft_strcat.c \
				ft_strcmp.c \
				ft_strcmp.c \
				ft_strdel.c \
				ft_strequ.c \
				ft_striter.c \
				ft_striteri.c \
				ft_strjoin.c \
				ft_strnew.c \
				ft_strmap.c \
				ft_strncat.c \
				ft_strncmp.c \
				ft_strncpy.c \
				ft_strnequ.c \
				ft_strnstr.c \
				ft_strsplit.c \
				ft_strstr.c \
				ft_strsub.c \
				ft_strtrim.c \
				ft_tolower.c \
				ft_toupper.c \
				ft_strchr.c \
				ft_strmapi.c \
				ft_strlcat.c \
				ft_strclr.c \
				ft_strrchr.c





			  
			  

SRCS		= $(patsubst %,$(SRC_DIR)%,$(FILES))
OBJ			= $(FILES:%.c=%.o)

all: $(NAME)

$(NAME): $(OBJ)
	ar rcs $(NAME) $(OBJ)

$(OBJ): $(SRCS)
	gcc -c -I$(INC_DIR) $(CFLAGS) $(SRCS)

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all
