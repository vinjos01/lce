cc		= gcc
ccflags	 	= -v -g 
src_c	 	= hello

all:		$(src_c).o run
$(src_c).o:	$(src_c).c
		$(cc) $(ccflags) $(src_c).c -o $(src_c).elf 
clean:
		rm -rf *.[os]
		rm -rf *.elf *.out *.dSYM
run:
		./$(src_c).elf

