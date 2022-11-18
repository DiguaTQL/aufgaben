HEADERS = resistor.h
OBJECTS = main.c
CC = gcc

default: main.o

%.o: %.c $(HEADERS)
	gcc -c $< -o $@

#%.o : %.c
#	$(CC) -c $(CFLAGS) $< -o $@

#main.o: $(OBJECTS)
#	gcc $(OBJECTS) -o $@

clean:
#	-rm -f $(OBJECTS)
	-rm -f main.o

git:
	git add .
	git commit -m "ITA"
	git push -u origin main 