# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: tcollart <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2013/11/20 19:30:03 by tcollart          #+#    #+#              #
#    Updated: 2014/02/07 03:20:04 by tcollart         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		=	libft.a

CC			=	gcc

FLAGS		=	-Wall -Werror -Wextra

INC_PATH	=	./includes

SRC_PATH	=	./src/

HEAD		=	$(INC_PATH)/libft.h

INC			=	-I $(INC_PATH)

SRCS		=	ft_memset.c \
				ft_bzero.c \
				ft_memcpy.c \
				ft_memccpy.c \
				ft_memmove.c \
				ft_memchr.c \
				ft_memcmp.c \
				ft_strlen.c \
				ft_strdup.c \
				ft_strcpy.c \
				ft_strncpy.c \
				ft_strcat.c \
				ft_strncat.c \
				ft_strlcat.c \
				ft_strchr.c \
				ft_strrchr.c \
				ft_strstr.c \
				ft_strnstr.c \
				ft_strcmp.c \
				ft_strncmp.c \
				ft_atoi.c \
				ft_isalpha.c \
				ft_isdigit.c \
				ft_isalnum.c \
				ft_isascii.c \
				ft_isprint.c \
				ft_toupper.c \
				ft_tolower.c \
				\
				\
				ft_memalloc.c \
				ft_memdel.c \
				ft_strnew.c \
				ft_strdel.c \
				ft_strclr.c \
				ft_striter.c \
				ft_striteri.c \
				ft_strmap.c \
				ft_strmapi.c \
				ft_strmapi.c \
				ft_strequ.c \
				ft_strnequ.c \
				ft_strsub.c \
				ft_strjoin.c \
				ft_strtrim.c \
				ft_strsplit.c \
				ft_itoa.c \
				ft_putchar.c \
				ft_putstr.c \
				ft_putendl.c \
				ft_putnbr.c \
				ft_putchar_fd.c \
				ft_putstr_fd.c \
				ft_putendl_fd.c \
				ft_putnbr_fd.c \
				\
				\
				ft_lstnew.c \
				ft_lstdelone.c \
				ft_lstdel.c \
				ft_lstadd.c \
				ft_lstiter.c \
				ft_lstmap.c \
				\
				\
				ft_nbrlen.c \
				ft_2dlen.c \
				ft_realloc.c \
				ft_strsplits.c \
				\
				\
				btree_create_node.c \
				btree_apply_prefix.c \
				btree_apply_infix.c \
				btree_apply_suffix.c \
				btree_insert_data.c \
				btree_search_item.c \
				btree_level_count.c


SRC			=	$(addprefix $(SRC_PATH), $(SRCS))

OBJS		=	$(SRC:.c=.o)

.SILENT:

all			:	$(NAME)

$(NAME)		:	$(OBJS)
	    		ar rc $@ $^
		    	ranlib $@

%.o			:	%.c $(HEAD)
	    		$(CC) $(INC) $(FLAGS) -c $< -o $@

clean		:
				rm -f $(OBJS)

fclean		:	clean
				rm -f $(NAME)

re			:	fclean all

.PHONY: all fclean clean re
