CC=g++
CFLAGS=-I. -I/home/Kevin/peuler/lib/BigNumber
LDFLAGS=
SOURCES=main.cpp
OBJECTS=main.o
EXE=LargeSum.

DEPS = BigNumber.h

%.o: %.cpp $(DEPS)
	$(CC) -c -o $@ $(CFLAGS) $<

all: $(SOURCES) $(EXE) 
  
 
$(EXE): $(OBJECTS)
	$(CC) $(LDFLAGS) $(OBJECTS) -o $@

clean:
	rm *.o
