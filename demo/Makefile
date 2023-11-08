all: demo recursionExample

demo: demo.o
	clang++ demo.o ../src/libturtle.a ../src/libpoint.a ../libembroidery/libembroidery.a -o demo

demo.o: demo.cpp
	clang++ -g -c -std=c++1z -Wall -Wextra -pedantic -I../libembroidery demo.cpp

recursionExample: recursionExample.o 
	clang++ demo.o ../src/libturtle.a ../src/libpoint.a ../libembroidery/libembroidery.a -o recursionExample

recursionExample.o: recursionExample.cpp
	clang++ -g -c -std=c++1z -Wall -Wextra -pedantic -I../libembroidery recursionExample.cpp

clean:
	rm *.o demo
	rm *.o recursionExample
