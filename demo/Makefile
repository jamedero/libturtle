all: demo

demo: demo.o ../src/libturtle.a ../src/libpoint.a ../libembroidery/libembroidery.a
	clang++ demo.o ../src/libturtle.a ../src/libpoint.a ../libembroidery/libembroidery.a -o demo

demo.o: demo.cpp
	clang++ -g -c -std=c++1z -Wall -Wextra -pedantic -I../libembroidery demo.cpp

clean:
	rm *.o demo
