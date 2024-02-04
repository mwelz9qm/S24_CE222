main: HW1Prob1.o CounterImp.o 
	g++ -o main HW1Prob1.o CounterImp.o
	rm -f *.o

HW1Prob1.o: HW1Prob1.cpp counterType.h
	g++ -c HW1Prob1.cpp

CounterImp.o: CounterImp.cpp counterType.h 
	g++ -c CounterImp.cpp

clean:
	rm -f main *.o


