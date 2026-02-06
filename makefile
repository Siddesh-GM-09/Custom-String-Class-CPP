target = main.o methods.o friend.o CustomString.o
CC=g++

output:$(target)
	$(CC) $(target) -o output

main.o:main.cpp
	$(CC) -c main.cpp

methods.o:methods.cpp
	$(CC) -c methods.cpp

friend.o:friend.cpp
	$(CC) -c friend.cpp

CustomString.o:CustomString.cpp
	$(CC) -c CustomString.cpp
clear: 
	@echo Cleaning Object File
	@del /Q *.o 2>nul