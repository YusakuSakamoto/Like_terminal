CC		=g++
MAIN	=main
FLAGS	=-O3
CFLAGS	=`pkg-config sakamoto --cflags --libs`

.PHONY:clean
.PHONY:install
all:$(MAIN)

$(MAIN).o:$(MAIN).cpp
	$(CC) -c $< $(FLAGS) $(CFLAGS) -o $@

$(MAIN):$(MAIN).o
	$(CC) $< $(FLAGS) $(CFLAGS) -o $@

clean:
	rm $(MAIN) $(MAIN).o

install:
	cd install && sh install.sh 
