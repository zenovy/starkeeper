all:
	g++ -std=c++11 -o starkeeper *.cpp *.h

clean:
	rm -rf starkeeper
