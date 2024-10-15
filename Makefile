SRC = $(*.c)
OBJS = $(SRC:%.c=%.o)
NAME = libft.a
CC = gcc
FLAGS = -Wall -Wextra -Werror
all: $(NAME)

$(NAME): $(OBJS)
	ar $(OBJS)

%.o: %.c
    $(CC) $(CPPFLAGS) $(CCFLAGS) -o $@ -c $<

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all
