
CXX=clang++
CXXFLAGS=-c -std=c++1z -Werror -Wall -Wextra -Wpedantic

EXECUTABLE=main.out
SOURCES=main.cpp
OBJECTS=$(SOURCES:.cpp=.o)
RM=rm -f

all: $(EXECUTABLE)

run: $(EXECUTABLE)
	./$(EXECUTABLE)

$(EXECUTABLE): $(OBJECTS)
	$(CXX) $(OBJECTS) -o $@

.cpp.o:
	$(CXX) $(CXXFLAGS) $< -o $@

clean:
	$(RM) *.o $(EXECUTABLE)

