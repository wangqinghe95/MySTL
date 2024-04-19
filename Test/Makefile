INCLUDE = ../Alloc/

.PHONY: all
all : test_vector test_alloc test_iterator

test_alloc: test_MyAlloc.cpp
	g++ -I $(INCLUDE) test_MyAlloc.cpp -o test_alloc

test_iterator: test_iterator.cpp
	g++ -I../Iterator test_iterator.cpp -o test_iterator

.PHONY : clean

clean:
	rm test_vector test_alloc test_iterator