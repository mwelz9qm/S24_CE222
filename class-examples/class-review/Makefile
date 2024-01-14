main: main.o bankAccountImp.o 
	g++ -o main main.o bankAccountImp.o
	rm -f *.o

main.o: main.cpp bankAccount.h
	g++ -c main.cpp

bankAccountImp.o: bankAccountImp.cpp bankAccount.h 
	g++ -c bankAccountImp.cpp

clean:
	rm -f main *.o


