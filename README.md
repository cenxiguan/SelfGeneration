
	This program is a interesting C program that prints:
	Hello
	an exact copy of itself
	Goodbye

	To see the effect, you may run this codes in UNIX / terminal:
	step 1: type the following command followed by "enter":
		gcc -ansi -Wall SelfGeneration.c
	step 2: type the following command followed by "enter":
		./a.out > check
	step 3: type the following command followed by "enter":
		diff SelfGeneration.c check
	You can see the result is 
	0a1
	> Hello
	32a34
	> Goodbye
	It proves my program generates an exact copy of itself between
	"Hello" and "Goodbye".

