all: des

des: des.o subkey.o
	g++ des.o subkey.o -o des
	
des.o: des.cpp
	g++ -c des.cpp
	
subkey.o: subkey.cpp
	g++ -c subkey.cpp

clean:
	rm -rf *o des
