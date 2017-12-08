variant2 : main.o variant2.o
	gcc -o variant2 main.o variant2.o
	gcc main.o variant2.o -o variant2.elf
	objdump -x -s -w -d variant2.elf >variant2.dump
	objcopy -O binary variant2.elf variant2.bin
	main.o : main.c stdlib.h stdio.h string.h variant2.h
	gcc -c main.c
	variant2.o : ll.c stdlib.h variant2.h string.h
	gcc -c variant2.c
	
	
