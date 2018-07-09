NAME		= libft.a

SRC_DIR		= srcs/
INC_DIR		= includes/

CFLAGS		= -Wall -Werror -Wextra
FILES		=  ft_bzero.c \
			   ft_memalloc.c \
			   ft_memdel.c \
			   ft_strnew.c \
			   ft_strdel.c \
			   ft_strclr.c \
			   ft_striter.c \
			   ft_striteri.c \
			   ft_strmap.c \
			   ft_strmapi.c \
			   ft_strequ.c \
			   ft_strnequ.c \
			   ft_strsub.c \
			   ft_strjoin.c \
			   ft_strtrim.c \
			   ft_strcpy.c \
			   ft_strlen.c
			  

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
