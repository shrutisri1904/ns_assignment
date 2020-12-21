all: des

des: des.o subkey.o substitution.o
	g++ des.o subkey.o substitution.o -o des
	
des.o: des.cpp
	g++ -c des.cpp
	
subkey.o: subkey.cpp
	g++ -c subkey.cpp

substitution.o: substitution.cpp
	g++ -c substitution.cpp

clean:
	rm -rf *o des
