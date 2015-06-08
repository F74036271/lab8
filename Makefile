lab7: Mino.o MinoJ.o MinoZ.o genMino.o main.o
	g++ -o lab7 Mino.o MinoJ.o MinoZ.o genMino.o main.o
Mino.o: Mino.h Mino.cpp
	g++ -c Mino.cpp
MinoJ.o: MinoJ.h MinoJ.cpp
	g++ -c MinoJ.cpp
MinoZ.o: MinoZ.h MinoZ.cpp
	g++ -c MinoZ.cpp
genMino.o: genMino.h genMino.cpp
	g++ -c genMino.cpp
main.o: genMino.h main.cpp
	g++ -c main.cpp

