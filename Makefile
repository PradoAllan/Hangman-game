NAME = libft.a

CC = cc

FLAGS = -Wall -Wextra -Werror

SOURCES = libftsrc/ft_atoi.c \
		libftsrc/ft_bzero.c \
		libftsrc/ft_calloc.c \
		libftsrc/ft_isalnum.c \
		libftsrc/ft_isalpha.c \
		libftsrc/ft_isascii.c \
		libftsrc/ft_isdigit.c \
		libftsrc/ft_isprint.c \
		libftsrc/ft_itoa.c \
		libftsrc/ft_memchr.c \
		libftsrc/ft_memcmp.c \
		libftsrc/ft_memcpy.c \
		libftsrc/ft_memset.c \
		libftsrc/ft_memmove.c \
		libftsrc/ft_putchar_fd.c \
		libftsrc/ft_putendl_fd.c \
		libftsrc/ft_putnbr_fd.c \
		libftsrc/ft_putstr_fd.c \
		libftsrc/ft_split.c \
		libftsrc/ft_strchr.c \
		libftsrc/ft_strdup.c \
		libftsrc/ft_striteri.c \
		libftsrc/ft_strjoin.c \
		libftsrc/ft_strlcat.c \
		libftsrc/ft_strlcpy.c \
		libftsrc/ft_strlen.c \
		libftsrc/ft_strmapi.c \
		libftsrc/ft_strncmp.c \
		libftsrc/ft_strnstr.c \
		libftsrc/ft_strrchr.c \
		libftsrc/ft_strtrim.c \
		libftsrc/ft_substr.c \
		libftsrc/ft_tolower.c \
		libftsrc/ft_toupper.c \
		libftsrc/ft_lstadd_back.c \
		libftsrc/ft_lstadd_front.c \
		libftsrc/ft_lstclear.c \
		libftsrc/ft_lstdelone.c \
		libftsrc/ft_lstiter.c \
		libftsrc/ft_lstlast.c \
		libftsrc/ft_lstmap.c \
		libftsrc/ft_lstnew.c \
		libftsrc/ft_lstsize.c

OBJECTS = ${SOURCES:.c=.o}

.c.o: 
	$(CC) $(FLAGS) -c $< -o $(<:.c=.o)	 

$(NAME) : $(OBJECTS) 
	ar rcs $(NAME) $(OBJECTS)

all : $(NAME)

clean : 
	rm -rf $(OBJECTS)

fclean : clean
	rm -rf $(NAME) hangman

play : all
	$(CC) $(FLAGS) hangman.c $(NAME) -o hangman

re : fclean all

replay : re play
