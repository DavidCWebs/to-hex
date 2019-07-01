SOURCES:= $(wildcard *.cpp) $(wildcard *.hpp)
OBJECTS:= $(wildcard *.cpp)
OUT:= bin/main
main: $(SOURCES)
	g++ -W -Wall -std=c++17 -o $(OUT) $(OBJECTS)

debug: $(SOURCES)
	g++ -W -Wall -std=c++14 -g -o $(OUT) $(OBJECTS)
