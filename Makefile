

exec = hello.out

src = $(wildcard *.c)

obj = $(src:.c=.o)

flag = -g

$(exec) : $(obj)
	gcc $(obj) $(flag) -o $(exec)

%.o: %.c %.h
	gcc -c $(flag) $< -o $@

clean: 
	-rm *.out 
	-rm *.o
	-rm src/*.o
