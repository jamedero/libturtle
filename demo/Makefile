all: demo cross-stitch-demo

demo: demo.o
	clang++ demo.o ../src/libturtle.a ../src/libpoint.a ../libembroidery/libembroidery.a -o demo

demo.o: demo.cpp
	clang++ -g -c -std=c++1z -Wall -Wextra -pedantic -I../libembroidery demo.cpp

cross-stitch-demo: cross-stitch-demo.o
	clang++ cross-stitch-demo.o ../src/libturtle.a ../src/libpoint.a ../libembroidery/libembroidery.a -o cross-stitch-demo

cross-stitch-demo.o: cross-stitch-demo.cpp
	clang++ -g -c -std=c++1z -Wall -Wextra -pedantic -I../libembroidery cross-stitch-demo.cpp

clean:
	rm *.o demo
