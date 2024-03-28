
bin/uc: src/functions.c src/main.c
	gcc src/functions.c src/main.c -o bin/uc
#PHONY
clean:
	rm -f bin/*.o bin/uc
