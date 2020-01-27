comp:
	clang++ -std=c++11 -Wall -g test-array.cpp

run:
	./a.out

clean:
	rm a.out

 test:
	./a.out