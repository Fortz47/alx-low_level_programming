CC = gcc
SRC = school.c main.c

all: school

school: $(SRC)
	$(CC) -o $@ $^

clean:
	rm -f school
