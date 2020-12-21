all: des

des: des.o substitution.o
	g++ des.o substitution.o -o des
	
des.o: des.cpp
	g++ -c des.cpp
	
substitution.o: substitution.cpp
	g++ -c substitution.cpp

clean:
	rm -rf *o des
