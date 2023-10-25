CC = gcc
SRC = main.c school.c
OBJ = main.o school.o
NAME = school

all: school

main.o: main.c
        $(CC) -o $@ -c $<

school.o: school.c
        $(CC) -o $@ -c $<

school: $(OBJ)
        $(CC) $(OBJ) -o $(NAME)
