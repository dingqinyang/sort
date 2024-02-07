.PHONY:clean

select:select.o sort.o
	gcc -o $@ $^

insert:insert.o sort.o
	gcc -o $@ $^

bubble:bubble.o sort.o
	gcc -o $@ $^

shell:shell.o sort.o
	gcc -o $@ $^

quick:quick.o sort.o
	gcc -o $@ $^

quick.o:quick.c
	gcc -c $^

bubble.o:bubble.c
	gcc -c $^

shell.o:shell.c
	gcc -c $^

select.o:select.c
	gcc -c $^

insert.o:insert.c
	gcc -c $^

sort.o:sort.c
	gcc -c $^


clean:
	rm *.o

