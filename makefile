COMPILER = g++
APP = app.exe

$(APP): main.o
	$(COMPILER) -o $(APP) main.o
main.o: main.cxx
	$(COMPILER) -c main.cxx

clean:
	rm -f *.o $(APP)