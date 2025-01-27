CC = clang
CFLAGS = -Wall -g

TARGET = rods

SRCS = rods.c

$(TARGET): $(SRCS)
	$(CC) $(CFLAGS) -o $(TARGET) $(SRCS)


clean:
	rm -f $(TARGET)
