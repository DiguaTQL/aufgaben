HEADERS = program.h headers.h
OBJECTS = main.c

default: main.o

%.o: %.c $(HEADERS)
	gcc -c $< -o $@

main.o: $(OBJECTS)
	gcc $(OBJECTS) -o $@

clean:
#	-rm -f $(OBJECTS)
	-rm -f main.o

git:
	git add .
	git commit -m "ITA"
	git push -u origin main 