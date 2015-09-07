CC	=g++
MAIN	=main
CFLAGS	=`pkg-config sakamoto --cflags --libs`

.PHONY:clean
all:$(MAIN)

$(MAIN).o:$(MAIN).cpp
	$(CC) -c $< $(FLAGS) $(CFLAGS) -o $@

$(MAIN):$(MAIN).o
	$(CC) $< $(FLAGS) $(CFLAGS) -o $@

clean:
	rm $(MAIN) $(MAIN).o
