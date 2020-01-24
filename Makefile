comp:
	clang++ -std=c++11 -Wall -g main.cpp

docker:
    g++ -Wall -std=c++11 main.cpp

run:
	./a.out

clean:
	rm a.out

 test:
	./a.out
	