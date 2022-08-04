 
clean:
	find . -name '*.o' -delete

	
SRCS = $(shell find . -name '*.c')
PROGS = $(patsubst %.c,%,$(SRCS))
all: $(PROGS)
%: %.c
	$(CC) $(CFLAGS) -o $@.o $< -lcs50 -lm