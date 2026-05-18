CXX = g++
CXXFLAGS = -std=c++11 -Wall -Wextra
TARGET = agenda
SOURCES = main.cpp contatto.cpp gestore_ram_ordinata.cpp gestore_mirrored_ram.cpp
OBJECTS = $(SOURCES:.cpp=.o)
all: $(TARGET)
$(TARGET): $(OBJECTS)
	$(CXX) $(CXXFLAGS) -o $(TARGET) $(OBJECTS)
%.o: %.cpp
	$(CXX) $(CXXFLAGS) -c $< -o $@
clean:
	rm -f $(TARGET) $(OBJECTS) agenda.txt

.PHONY: all clean
