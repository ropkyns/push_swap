# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: paulmart <paulmart@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/11/25 17:11:17 by ropkyns           #+#    #+#              #
#    Updated: 2024/03/15 11:57:52 by paulmart         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS			=	main.c split.c ft_error.c init_stack.c stack_utils.c mini_sort.c sort_command.c \
					init_sort.c sort_command.c ft_swap.c ft_push.c ft_rotate.c ft_rev_rotate.c

OBJS			= $(SRCS:.c=.o)

HEADER			= push_swap.h
CC				= cc
RM				= rm -f
CFLAGS			= -Wall -Wextra -Werror

NAME			= push_swap

.c.o: 			$(HEADER)
				$(CC) -I. $(CFLAGS) -c $< -o ${<:.c=.o}

$(NAME):		$(OBJS)
				ar rcs $(NAME) $?
				ranlib $(NAME)

all:			$(NAME)

clean:
				$(RM) $(OBJS)

fclean:			clean
				$(RM) $(NAME)

re:				fclean $(NAME)
