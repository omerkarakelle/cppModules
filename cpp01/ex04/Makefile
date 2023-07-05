NAME = Sed

SRCS = main.cpp Sed.cpp
OBJS = $(SRCS:.cpp=.o)

CC = c++
CFLAGS = -Wall -Wextra -Werror -std=c++98

all: $(NAME)

.cpp.o:
	$(CC) $(CFLAGS) -c $< -o $(<:.cpp=.o)
	
$(NAME): $(OBJS)
	$(CC) $(OBJS) $(CFLAGS) -o $(NAME)

clean:
	$(RM)  $(OBJS)

fclean: clean
	$(RM) $(NAME)
	$(RM) ./*.replace

re: fclean all

.PHONY: all clean fclean re