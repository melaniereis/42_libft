#==============================================================================#
#                                   LIBFT PROJECT                              #
#==============================================================================#

NAME = functions_test
LIBFT_ARC = ../libft.a
EXEC = libft_tester.out

#------------------------------------------------------------------------------#
#                            	  NAMES AND PATHS                              #
#------------------------------------------------------------------------------#

SRCDIR = srcs_tests
INC_PATH=.
BUILD_PATH=.build
HEADERS = test.h
SRCS = ${addprefix ${SRCDIR}/,ft_isalpha_test.c ft_isdigit_test.c \
	   ft_isalnum_test.c }
		# ft_isascii_test.c ft_isprint_test.c \
		# ft_strlen_test.c ft_memset_test.c ft_bzero_test.c \
		# ft_memcpy_test.c ft_memmove_test.c ft_strlcpy_test.c \
		# ft_strlcat_test.c ft_toupper_test.c ft_tolower_test.c \
		# ft_strchr_test.c}
		# #ft_strrchr_test.c ft_strncmp_test.c \
		# ft_memchr_test.c ft_memcmp_test.c ft_strnstr_test.c \
		# ft_atoi_test.c ft_calloc_test.c ft_strdup_test.c \
		# ft_substr_test.c ft_strjoin_test.c ft_strtrim_test.c \
		# ft_split_test.c ft_itoa_test.c ft_strmapi_test.c \
		# ft_striteri_test.c ft_putchar_fd_test.c ft_putstr_fd_test.c \
		# ft_putendl_fd_test.c ft_putnbr_fd_test.c}
SRCS += main.c

OBJS = ${SRCS:.c=.o}

#------------------------------------------------------------------------------#
#                            	   FLAGS & COMMANDS                            #
#------------------------------------------------------------------------------#

MAKE = make -C
CC = cc
CCFLAGS = -Wall -Wextra -Werror
L = -L.. -lft 
INC = -I ${INC_PATH}

RM = rm -fr
MKDIR_P = mkdir -p

#------------------------------------------------------------------------------#
#                            	       RULES                                   #
#------------------------------------------------------------------------------#

##  Compilation Rules for Libft  ##

all: ${NAME}

${NAME}: $(BUILD_PATH) ${OBJS} ${LIBFT_ARC}
	${CC} ${CCFLAGS} ${OBJS} ${LIBFT_ARC} -o ${EXEC}
	@echo "\n*********************** \
		\n${NAME} was created sucessfully! \
		\nType ./${EXEC} to execute the program! \
		\n***********************\n"

$(BUILD_PATH):
	$(MKDIR_P) $(BUILD_PATH)

${BUILD_PATH}/%.o: ${SRCDIR}/%.c ${HEADERS}
	${CC} ${CCFLAGS} -I ${HEADERS} -c $< -o $@

${LIBFT_ARC}:


##  Testing Rules  ##

test: ${MAIN_O} ${NAME}
	${CC} ${CCFLAGS} ${MAIN_O} ${L} -o ${NAME}

${TESTDIR}/%.o:  ${TESTDIR}/%.c ${HEADERS} ${SRCDIR}/%.c
	${CC} ${CCFLAGS} -I ${INCDIR} -c $< -o $@ 

##  Cleaning Rules  ##

clean:
	${RM} ${OBJS}
	${RM} ${MAIN_O}

fclean: clean
	${RM} ${NAME}

re: fclean ${NAME}

.PHONY: all clean fclean re
