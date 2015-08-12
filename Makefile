CC		=g++
MAIN	=main
FLAGS	=-O3

.PHONY:clean
all:$(MAIN)

$(MAIN):$(MAIN).cpp
	$(CC) $< $(FLAGS) -o $@

clean:
	rm $(MAIN)
