#==============================================================================#
#                                   LIBFT PROJECT                              #
#==============================================================================#

NAME = libft.a
EXEC = libft_tester.out

#------------------------------------------------------------------------------#
#                            	  NAMES AND PATHS                              #
#------------------------------------------------------------------------------#

BUILD_PATH = .build
SRC_PATH = srcs
BONUS_PATH = srcs_bonus
INC_PATH = includes
TESTS_PATH = tests
HEADERS = ${INC_PATH}/libft.h
SRCS = ${addprefix ${SRC_PATH}/,ft_isalpha.c ft_isdigit.c ft_isalnum.c \
	   ft_isascii.c ft_isprint.c ft_strlen.c ft_memset.c \
	   ft_bzero.c ft_memcpy.c ft_memmove.c ft_strlcpy.c ft_strlcat.c \
	   ft_toupper.c ft_tolower.c ft_strchr.c ft_strrchr.c \
	   ft_strncmp.c ft_memchr.c ft_memcmp.c ft_strnstr.c ft_atoi.c \
	   ft_calloc.c ft_strdup.c ft_substr.c ft_strjoin.c ft_strtrim.c \
	   ft_split.c ft_itoa.c ft_strmapi.c ft_striteri.c \
	   ft_putchar_fd.c ft_putstr_fd.c ft_putendl_fd.c ft_putnbr_fd.c}
SRCS_BONUS = ${addprefix ${BONUS_PATH}/, ft_lstnew.c ft_lstadd_front.c \
			 ft_lstsize.c ft_lstlast.c ft_lstadd_back.c ft_lstdelone.c \
			 ft_lstclear.c ft_lstiter.c ft_lstmap.c}
OBJS = ${addprefix ${BUILD_PATH}/, ${notdir ${SRCS:.c=.o}}}
OBJS_BONUS = ${addprefix ${BUILD_PATH}/, ${notdir ${SRCS_BONUS:.c=.o}}}

#------------------------------------------------------------------------------#
#                            	   FLAGS & COMMANDS                            #
#------------------------------------------------------------------------------#

CC = cc
CCFLAGS = -Wall -Wextra -Werror
AR = ar rcs
RM = rm -fr
MKDIR_P = mkdir -p
MAKE = make -C
MAKE_BONUS = make bonus -C
INC = -I ${INC_PATH}

#------------------------------------------------------------------------------#
#                            	       RULES                                   #
#------------------------------------------------------------------------------#

##  Compilation Rules for Libft  ##

all: ${NAME}

${BUILD_PATH}:
	${MKDIR_P} ${BUILD_PATH}
	@echo "\n*********************** \
		\n${BUILD_PATH} folder was created sucessfully! \
		\n***********************\n"

${NAME}: ${BUILD_PATH} ${OBJS}
	${AR} ${NAME} ${OBJS}
	@echo "\n*********************** \
		\n${NAME} was created sucessfully! \
		\n***********************\n"

${BUILD_PATH}/%.o: ${SRC_PATH}/%.c ${HEADERS}
	${CC} ${CCFLAGS} ${INC} -c $< -o $@

${BUILD_PATH}/%.o: ${BONUS_PATH}/%.c ${HEADERS}
	${CC} ${CCFLAGS} ${INC} -c $< -o $@

bonus: ${OBJS} ${OBJS_BONUS}
	${AR} ${NAME} ${OBJS} ${OBJS_BONUS}
	@echo "\n*********************** \
		\n${NAME} was created sucessfully with BONUS! \
		\n***********************\n"

##  Testing Rules  ##

test: all
	${MAKE} ${TESTS_PATH}
	mv ${TESTS_PATH}/${EXEC} .

test_bonus:
	${MAKE_BONUS} ${TESTS_PATH}
	mv ${TESTS_PATH}/${EXEC} .

##  Cleaning Rules  ##

clean:
	${RM} ${OBJS} ${OBJS_BONUS}
	@echo "Object files removed."

fclean: clean
	${RM} ${NAME}
	${RM} ${BUILD_PATH}
	@echo "Executable and build files removed."

re: fclean ${NAME}

.PHONY: all test clean fclean re
