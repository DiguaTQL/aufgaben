HEADERS = resistor.h
OBJECTS = main.c

default:
	gcc -Wall main.c -o main.o -lm
	main.o

#%.o: %.c $(HEADERS)
#	gcc $< -o $@

main.o: $(OBJECTS)
	gcc -Wall $(OBJECTS) -o $@

clean:
#	-rm -f $(OBJECTS)
	-rm -f main.o

git:
	git add .
	git commit -m "ITA"
	git push -u origin main