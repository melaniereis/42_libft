#==============================================================================#
#                                   LIBFT PROJECT                              #
#==============================================================================#

#------------------------------------------------------------------------------#
#                            	   FLAGS & COMMANDS                            #
#------------------------------------------------------------------------------#

CC = cc
CCFLAGS = -Wall -Wextra -Werror
LIB = -L.. -lft 
AR = ar rcs
RM = rm 

#------------------------------------------------------------------------------#
#                            	  NAMES AND PATHS                              #
#------------------------------------------------------------------------------#

NAME = libft.a
NAME_TEST = functions_test
SRCDIR = srcs
INCDIR = includes
TESTDIR = tests
HEADERS = ${INCDIR}/libft.h
SRCS = ${addprefix ${SRCDIR}/,ft_isalpha.c ft_isdigit.c ft_isalnum.c \
		ft_isascii.c ft_isprint.c ft_strlen.c ft_memset.c \
		ft_bzero.c ft_memcpy.c ft_memmove.c ft_strlcpy.c ft_strlcat.c }
#\
		ft_toupper.c ft_tolower.c ft_strchr.c ft_strrchr.c \
		ft_strncmp.c ft_memchr.c ft_memcmp.c ft_strnstr.c ft_atoi.c \
		ft_calloc.c ft_strdup.c ft_substr.c ft_strjoin.c ft_strtrim.c \
		ft_split.c ft_itoa.c ft_strmapi.c ft_striteri.c \
		ft_putchar_fd.c ft_putstr_fd.c ft_putendl_fd.c ft_putnbr_fd.c}

OBJS = ${SRCS:.c=.o}
MAIN_C = ${TESTDIR}/main.c
MAIN_O = ${TESTDIR}/main.o
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

test: ${MAIN_O} ${NAME}
	${CC} ${CCFLAGS} ${MAIN_O} ${L} -o ${NAME_TEST}

${TESTDIR}/%.o:  ${TESTDIR}/%.c ${HEADERS} ${SRCDIR}/%.c
	${CC} ${CCFLAGS} -I ${INCDIR} -c $< -o $@ 

##  Cleaning Rules  ##

clean:
	${RM} ${OBJS}
	${RM} ${MAIN_O}

fclean: clean
	${RM} ${NAME}
	${RM} ${NAME_TEST}

re: fclean ${NAME}

.PHONY: all clean fclean re
