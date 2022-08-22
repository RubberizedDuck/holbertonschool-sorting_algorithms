# Compilation for all tasks.

CC=gcc
CFLAGS=-Wall -Wextra -Werror -pedantic

TARGET0=bubble
SRC0=	0-bubble_sort.c \
	0-main.c \
	print_array.c

TARGET1=insertion
SRC1=	1-main.c \
	1-insertion_sort_list.c \
	print_list.c

TARGET2=select
SRC2=	2-main.c \
	2-selection_sort.c \
	print_array.c

TARGET3=quick
SRC3=	3-main.c \
	3-quick_sort.c \
	print_array.c

all: 0 1 2 3

0:
	$(CC) $(CFLAGS) $(SRC0) -o $(TARGET0)

1:
	$(CC) $(CFLAGS) $(SRC1) -o $(TARGET1)

2:
	$(CC) $(CFLAGS) $(SRC2) -o $(TARGET2)

3:
	$(CC) $(CFLAGS) $(SRC3) -o $(TARGET3)

clean:
	$(RM) *~ \#*\# \.\#* \
	$(TARGET0) $(TARGET1) $(TARGET2) $(TARGET3)

re: clean all
