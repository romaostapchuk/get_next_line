# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: rostapch <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2016/12/06 17:37:08 by rostapch          #+#    #+#              #
#    Updated: 2016/12/06 17:50:09 by rostapch         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = gcc
CFLAGS = -Wall -Wextra -Werror

NAME = libft

OBJFLAG = -c


SRC_C =	atoi.c         lstdelone.c    putendl.c      strdup.c       strnequ.c \
bzero.c        lstiter.c      putendl_fd.c   strequ.c       strnew.c \
ft_memalloc.c  lstmap.c       putnbr.c       striter.c      strnstr.c \
ft_memdel.c    lstnew.c       putnbr_fd.c    striteri.c     strrchr.c \
isalnum.c      memccpy.c      putstr.c       strjoin.c      strsplit.c \
isalpha.c      memchr.c       putstr_fd.c    strlcat.c      strstr.c \
isascii.c      memcmp.c       strcat.c       strlen.c       strsub.c \
isdigit.c      memcpy.c       strchr.c       strmap.c       strtrim.c \
isprint.c      memmove.c      strclr.c       strmapi.c      tolower.c \
itoa.c         memset.c       strcmp.c       strncat.c      toupper.c \
lstadd.c       putchar.c      strcpy.c       strncmp.c \
lstdel.c       putchar_fd.c   strdel.c       strncpy.c

SRC_O = $(SRC_C:.c=.o)

all: $(NAME)

$(NAME): $(SRC_O)
	ar rcv $(addsuffix .a, $(NAME)) $(SRC_O)

.c.o:
	$(CC) $(CFLAGS) $(OBJFLAG) $< -o $@

clean:
	/bin/rm -f $(SRC_O)

fclean: clean
	/bin/rm -f $(addsuffix .a, $(NAME))

re: fclean all
