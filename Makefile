# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: zmartine <zmartine@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/03/31 17:00:37 by zmartine          #+#    #+#              #
#    Updated: 2022/04/13 11:17:42 by zmartine         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

#Name of the executable file we want to generate
NAME = libft.a

#Files used
FUNCTIONS = ft_bzero.c ft_isalpha.c ft_isdigit.c ft_memcpy.c ft_strchr.c ft_strlcpy.c \
            ft_strncmp.c ft_strrchr.c ft_toupper.c ft_atoi.c ft_isalnum.c ft_isascii.c \
			ft_isprint.c ft_memset.c ft_strlcat.c ft_strlen.c ft_strnstr.c ft_tolower.c \
			ft_memmove.c ft_memcmp.c ft_memchr.c ft_strdup.c ft_strjoin.c ft_substr.c \
			ft_calloc.c ft_strtrim.c ft_putchar_fd.c ft_putstr_fd.c ft_putendl_fd.c \
			ft_putnbr_fd.c ft_itoa.c ft_strmapi.c ft_striteri.c

#OBJ take all .c files from FUNCTIONS and shows them whith a .o
OBJETCS = $(FUNCTIONS:.c=.o)

#Flags to use when using gcc
CFLAGS = -Wall -Werror -Wextra

all: $(NAME)

$(NAME): $(OBJETCS)
		ar rc  $(NAME) $(OBJETCS)

$(OBJETCS): $(FUNCTIONS)
		gcc $(CFLAGS) -c $(FUNCTIONS)		

clean:
		@rm -f $(OBJETCS)

fclean: clean
		@rm -f $(OBJETCS) $(NAME) 

re:	fclean all

.PHONY: all clean fclean re
