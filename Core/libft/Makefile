NAME = libft.a

CC = cc
CFLAG = -Wall -Wextra -Werror
# ar program creates, modifies, and extracts from archives
# r -> replace files in the archive or add them if they don't exist
# c -> create the archive if doesn't exist
AR = ar rc
# ranlib is used to index the archive and make it faster to access
# the files in the archive.
RANLIB = ranlib

SRC = $(wildcard *.c)
OBJ = $(SRC:.c=.o)

HEADER = libft.h

# running 'make' will behave like 'make all' and 'make all' will
# behave like 'make libft.a'
all: $(NAME)

# the .o files are dependencies for the .a file
# creates the archive libft.a from the .o files
# indexes the archive to make it faster to access the files
$(NAME): $(OBJ)
	$(AR) $(NAME) $(OBJ)
	$(RANLIB) $(NAME)

# $< = first dependency, the .c file
# $@ = target, the .o file
# This rule will only compile the .c files that have been modified since the
# last compilation, so it won't compile unnecessarily.
srcs/%.o: srcs/%.c $(HEADER)
	$(CC) $(CFLAGS) -c $< -o $@

# removes the .o files
clean:
	rm -f $(OBJ)

# removes the .o files and the libft.a file
fclean: clean
	rm -f $(NAME)

# rebuilds from scratch
re: fclean all

# .PHONY tells make that these are not files, but just names for commands to run
.PHONY: clean fclean re all