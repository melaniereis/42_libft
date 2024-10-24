#==============================================================================#
#                                   LIBFT PROJECT                              #
#==============================================================================#

EXEC = libft_tester.out

#------------------------------------------------------------------------------#
#                            	   FLAGS & COMMANDS                            #
#------------------------------------------------------------------------------#

CC = cc
CCFLAGS = -Wall -Wextra -Werror
AR = ar rcs
RM = rm 
MAKE = make -C
#------------------------------------------------------------------------------#
#                            	  NAMES AND PATHS                              #
#------------------------------------------------------------------------------#

NAME = libft.a
SRCDIR = srcs
INCDIR = includes
TESTS_PATH = tests
HEADERS = ${INCDIR}/libft.h
SRCS = ${addprefix ${SRCDIR}/,ft_isalpha.c ft_isdigit.c ft_isalnum.c} \
		##ft_isascii.c ft_isprint.c ft_strlen.c ft_memset.c \
		##ft_bzero.c ft_memcpy.c ft_memmove.c ft_strlcpy.c ft_strlcat.c \
		##ft_toupper.c ft_tolower.c ft_strchr.c ft_strrchr.c }
# 		ft_strncmp.c ft_memchr.c ft_memcmp.c ft_strnstr.c ft_atoi.c \
# 		ft_calloc.c ft_strdup.c ft_substr.c ft_strjoin.c ft_strtrim.c \
# 		ft_split.c ft_itoa.c ft_strmapi.c ft_striteri.c \
# 		ft_putchar_fd.c ft_putstr_fd.c ft_putendl_fd.c ft_putnbr_fd.c}

OBJS = ${SRCS:.c=.o}
#------------------------------------------------------------------------------#
#                            	       RULES                                   #
#------------------------------------------------------------------------------#

##  Compilation Rules for Libft  ##

all: ${NAME}

${NAME}: ${OBJS}
	${AR} ${NAME} ${OBJS}
	@echo "\n*********************** \
		\n${NAME} was created sucessfully! \
		\n***********************\n"

${SRCDIR}/%.o: ${SRCDIR}/%.c ${HEADERS}
	${CC} ${CCFLAGS} -I ${INCDIR} -c $< -o $@

##  Testing Rules  ##

test: all
	${MAKE} ${TESTS_PATH}
	mv ${TESTS_PATH}/${EXEC} .

##  Cleaning Rules  ##

clean:
	${RM} ${OBJS}

fclean: clean
	${RM} ${NAME}

re: fclean ${NAME}

.PHONY: all test clean fclean re
