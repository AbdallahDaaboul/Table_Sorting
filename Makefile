CC=gcc
CCFLAGS= -Wall -Werror -g -std=c99
LIBFLAGS=
SRC= Sort_Table.c main.c
OBJ= $(SRC:.c=.o)
EXEC= Main



all: $(EXEC)


$(EXEC): $(OBJ)
	$(CC)  $^ -o $@  $(LIBFLAGS)


%.o: %.c
	$(CC) $(CCFLAGS) -o $@ -c $<

.depends:
	$(CC) -MM $(SRC) > .depends


-include .depends

clean:
	rm -f $(OBJ) $(EXEC) *.*~
