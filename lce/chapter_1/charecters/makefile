CC			 = gcc
CCFLAGS		 = -v -g 
SRC_C		 = copy

all:		$(SRC_C).o run

$(SRC_C).o:	$(SRC_C).c
			$(CC) $(CCFLAGS) $(SRC_C).c -o $(SRC_C).elf 
clean:
			rm -rf *.[os]
			rm -rf *.elf *.out *.dSYM
run:
		./$(SRC_C).elf
	
