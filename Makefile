lab2: BMI.o lab2_a.o
	g++ -o lab2 BMI.o lab2_a.o

timer6.o: BMI.cpp BMI.h
	g++ -c BMI.cpp

main6.o: lab2_a.cpp BMI.h
	g++ -c lab2_a.cpp

clean:
	rm lab2 *.o
