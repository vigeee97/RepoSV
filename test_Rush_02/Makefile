# Компилятор
CC = gcc

# Флаги компиляции
CFLAGS = -Wall -Wextra -Werror -I includes

# Исходные файлы
SRCS = srcs/main.c \
       srcs/converter.c \
       srcs/converter_utils.c \
       srcs/ft_utils.c \
       srcs/parse_file.c \
       srcs/parse_file_utils.c \
       srcs/parse_dict.c \
       srcs/parse_dict_utils.c

# Объектные файлы
OBJS = ${SRCS:.c=.o}

# Исполняемый файл
NAME = rush-02

# Правило по умолчанию
all: ${NAME}

# Компиляция исполняемого файла
${NAME}: ${OBJS}
	${CC} ${CFLAGS} -o $@ $^

# Правило для компиляции .c в .o
%.o: %.c
	${CC} ${CFLAGS} -c $< -o $@

# Удаление объектных файлов
clean:
	rm -f ${OBJS}

# Полное удаление (объектные файлы + исполняемый файл)
fclean: clean
	rm -f ${NAME}

# Фиктивные цели
.PHONY: all clean fclean

