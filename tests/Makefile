#==============================================================================#
#                         TESTS FOR LIBFT PROJECT                              #
#==============================================================================#

NAME = functions_test
LIBFT_ARC = ../libft.a
EXEC = libft_tester.out

#------------------------------------------------------------------------------#
#                            	  NAMES AND PATHS                              #
#------------------------------------------------------------------------------#

SRC_PATH = srcs_tests
BONUS_PATH = srcs_bonus_tests
LIBFT_PATH = ..
INC_PATH = .
BUILD_PATH = .build
HEADERS = ${INC_PATH}/test.h

SRCS = ${addprefix ${SRC_PATH}/, ft_isalpha_test.c ft_isdigit_test.c ft_isalnum_test.c \
    ft_isascii_test.c ft_isprint_test.c ft_strlen_test.c ft_memset_test.c \
    ft_bzero_test.c ft_memcpy_test.c ft_memmove_test.c ft_strlcpy_test.c ft_strlcat_test.c \
    ft_toupper_test.c ft_tolower_test.c ft_strchr_test.c ft_strrchr_test.c \
	ft_strncmp_test.c ft_memchr_test.c ft_memcmp_test.c ft_strnstr_test.c ft_atoi_test.c \
    ft_calloc_test.c ft_strdup_test.c ft_substr_test.c ft_strjoin_test.c ft_strtrim_test.c \
    ft_split_test.c ft_itoa_test.c ft_strmapi_test.c ft_striteri_test.c \
    ft_putchar_fd_test.c ft_putstr_fd_test.c ft_putendl_fd_test.c ft_putnbr_fd_test.c \
	main.c}
SRCS_BONUS = ${addprefix ${BONUS_PATH}/, ft_lstnew_test.c ft_lstadd_front_test.c \
    ft_lstsize_test.c ft_lstlast_test.c ft_lstadd_back_test.c ft_lstdelone_test.c \
    ft_lstclear_test.c ft_lstiter_test.c ft_lstmap_test.c main.c}
OBJS = ${addprefix ${BUILD_PATH}/, ${notdir ${SRCS:.c=.o}}}
OBJS_BONUS = ${addprefix ${BUILD_PATH}/, ${notdir ${SRCS_BONUS:.c=.o}}}

#------------------------------------------------------------------------------#
#                            	   FLAGS & COMMANDS                            #
#------------------------------------------------------------------------------#

CC = cc
CCFLAGS = -Wall -Wextra -Werror
LDFLAGS = -L.. -lft
INC = -I ${INC_PATH}
RM = rm -fr
MKDIR_P = mkdir -p
MAKE = make -C
MAKE_BONUS = make bonus -C

#------------------------------------------------------------------------------#
#                            	       RULES                                   #
#------------------------------------------------------------------------------#

all: ${NAME}

${BUILD_PATH}:
	${MKDIR_P} ${BUILD_PATH}
	@echo "\n*********************** \
		\n${BUILD_PATH} folder was created successfully! \
		\n***********************\n"

${NAME}: ${BUILD_PATH} ${OBJS} ${LIBFT_ARC}
	${CC} ${CCFLAGS} ${OBJS} ${LDFLAGS} -o ${EXEC}
	@echo "\n*********************** \
		\n${NAME} was created successfully! \
		\n Type ./${EXEC} to execute the program! \
		\n***********************\n"

# Rule for compiling source files
${BUILD_PATH}/%.o: ${SRC_PATH}/%.c ${HEADERS} | ${BUILD_PATH}
	${CC} ${CCFLAGS} ${INC} -c $< -o $@

${BUILD_PATH}/%.o: ${BONUS_PATH}/%.c ${HEADERS} | ${BUILD_PATH}
	${CC} ${CCFLAGS} ${INC} -c $< -o $@

${BUILD_PATH}/main.o: main.c ${HEADERS} | ${BUILD_PATH}
	${CC} ${CCFLAGS} ${INC} -c $< -o $@

# Ensure the libft.a is built
${LIBFT_ARC}:
	${MAKE} ${LIBFT_PATH}

${LIBFT_ARC_BONUS}:
	${MAKE_BONUS} ${LIBFT_PATH}

bonus: ${BUILD_PATH} ${OBJS_BONUS} ${LIBFT_ARC_BONUS}
	${CC} ${CCFLAGS} ${OBJS_BONUS} ${LDFLAGS} -o ${EXEC}
	@echo "\n*********************** \
		\n Type ./${EXEC} to execute the program! \
		\n${NAME} was created successfully to test BONUS! \
		\n***********************\n"

##  Cleaning Rules  ##

clean:
	${RM} ${OBJS} ${OBJS_BONUS}
	@echo "Object files removed."

fclean: clean
	${RM} ${EXEC}
	${RM} ${BUILD_PATH}
	@echo "Executable and build files removed."

re: fclean all

.PHONY: all clean fclean re bonus
