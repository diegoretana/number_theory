OBJS = gcd.o PPTriple.o Pythagorean.o 
CXXFLAGS = -Wall -pedantic -ansi

pythagoras: $(OBJS)
			g++ $(OBJS) -o pythagoras

clean:
		rm -f *.o