CC = cc
CFLAGS = -Wall -Werror -Wextra

NAME = philo

INC_DIR = includes
SRC_DIR = srcs

SRCS = create_threads.c \
	   init.c \
	   main.c \
	   parse_input.c \
	   philo_behavior.c \
	   utils.c \
	   destroy_mutexes.c

OBJS = $(addprefix $(SRC_DIR)/, $(SRCS:.c=.o))

$(NAME): $(OBJS)
	$(CC) $(CFLAGS) $^ -o $@

all: $(NAME)

export ACFLAGS

debug: CFLAGS += $(ACFLAGS) -g3
debug: $(NAME)

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@ -I$(INC_DIR)

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: 
	make fclean
	make all

.PHONY: clean fclean re all debug
