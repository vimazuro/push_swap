# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: vimazuro <vimazuro@student.42barcelon      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/11/20 16:41:15 by vimazuro          #+#    #+#              #
#    Updated: 2025/01/30 14:45:07 by vimazuro         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = push_swap
CC = cc
CFLAGS = -Wall -Wextra -Werror
SRC_DIR = .
INC_DIR = libft/include
LIBFT_DIR = libft/
LIBFT_LIB = $(LIBFT_DIR)libft.a
HEADER = push_swap.h

SRC_FILES = main.c \
	    before_sorting/ft_check_argv.c \
	    before_sorting/ft_check_sorting.c \
	    before_sorting/ft_error_exit.c \
	    before_sorting/ft_make_stacks.c \
	    big_sorting/ft_big_sorting.c \
	    big_sorting/ft_collect_from_b.c \
	    big_sorting/ft_get_sorted_array.c \
	    big_sorting/ft_split_into_chunks.c \
	    operations/ft_swap.c \
	    operations/ft_push.c \
	    operations/ft_rotate.c \
	    operations/ft_rev_rotate.c \
	    small_sorting/ft_get_steps_to_max.c \
	    small_sorting/ft_get_steps_to_min.c \
	    small_sorting/ft_small_sorting.c \
	    small_sorting/ft_sort_2.c \
	    small_sorting/ft_sort_3.c \
	    small_sorting/ft_sort_4.c \
	    small_sorting/ft_sort_5.c

OBJS = $(SRC_FILES:.c=.o)

all: libft $(NAME)

libft: 
	$(MAKE) -C $(LIBFT_DIR)

$(NAME): $(OBJS)
	$(CC) $(CFLAGS) -I$(INC_DIR) -o $(NAME) $(OBJS) $(LIBFT_LIB)

%.o: $(SRC_DIR)/%.c $(HEADER) Makefile
	$(CC) $(CFLAGS) -I$(INC_DIR) -c $< -o $@

clean:
	rm -f $(OBJS)
	$(MAKE) -C $(LIBFT_DIR) clean

fclean: clean
	rm -f $(NAME)
	$(MAKE) -C $(LIBFT_DIR) fclean

re: fclean all

.PHONY: all clean fclean re libft
