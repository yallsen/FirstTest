
person: main.o person.o dog.o
	g++ -o $@ $^

%.o: %.cpp 
	g++ -o $@ $<

clean:
	rm -f *.o person
