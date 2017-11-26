all: main animal bird cow
	g++ -o hw9 hw9_main.o animal.o bird.o cow.o

main:
	g++ -c -s hw9_main.cpp

animal:
	g++ -c -s animal.cpp

bird:
	g++ -c -s bird.cpp

cow:
	g++ -c -s cow.cpp
	
clean:
	rm hw9_main.o animal.o bird.o cow.o
