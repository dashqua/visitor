rm -rf *.o *.out *~
g++ -c car.cpp -o car.o
g++ -c berline.cpp -o berline.o
g++ -c main.cpp -o main.o
g++ -o test.out car.o berline.o main.o
