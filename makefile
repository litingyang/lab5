big_number:main.o big_number.o
	g++ -o big_number main.o big_number.o
main.o:main.cpp big_number.h
	g++ -c main.cpp
big_number.o:big_number.cpp big_number.h
	g++ -c big_number.cpp

