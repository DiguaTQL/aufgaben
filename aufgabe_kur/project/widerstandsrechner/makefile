git:
	git add .
	git commit -m "$m"
	git push -u origin main 

HEADERS = program.h headers.h
OBJECTS = program.o

default: program

%.o: %.c $(HEADERS)
	gcc -c $< -o $@

program: $(OBJECTS)
	gcc $(OBJECTS) -o $@

clean:
	-rm -f $(OBJECTS)
	-rm -f program