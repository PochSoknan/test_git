# Compiler (change if needed)
CC = gcc

# Compiler flags (warnings, optimization, etc.)
CFLAGS = -Wall -Wextra

# Target: executable named "main"
main: main.o
  $(CC) $(CFLAGS) -o main main.o

# Rule to compile a .c file to a .o object file
%.o: %.c
  $(CC) $(CFLAGS) -c $< -o $@

# Phony target for cleaning (optional)
clean:
  rm -f main *.o
