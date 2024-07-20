
TARGET = main
CFLAGS = $(METHOD)
SRCS = main.c crc16.c 
OBJS = $(SRCS:.c=.o)

all: $(TARGET)

$(TARGET): $(OBJS)
	@$(CC) $(CFLAGS) -o $(TARGET) $(OBJS)

%.o: %.c
	@$(CC) $(CFLAGS) -c $< -o $@

clean:
	@rm -f $(TARGET) $(OBJS)

