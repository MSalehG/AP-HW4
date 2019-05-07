CXX = g++
CXXFLAGS = -std=c++17 -Wall -c
LXXFLAGS = -std=c++17
OBJECTS = main.o two_dimensional_shape.o three_dimensional_shape.o point.o square.o circle.o sphere.o cube.o
TARGET = main


$(TARGET): $(OBJECTS)
	$(CXX) $(LXXFLAGS) $(OBJECTS) -o $(TARGET)
main.o: main.cpp
	$(CXX) $(CXXFLAGS) main.cpp

two_dimensional_shape.o: two_dimensional_shape.cpp two_dimensional_shape.h
	$(CXX) $(CXXFLAGS) two_dimensional_shape.cpp

three_dimensional_shape.o: three_dimensional_shape.cpp three_dimensional_shape.h
	$(CXX) $(CXXFLAGS) three_dimensional_shape.cpp

point.o: point.cpp point.h
	$(CXX) $(CXXFLAGS) point.cpp

square.o: square.cpp square.h
	$(CXX) $(CXXFLAGS) square.cpp

circle.o: circle.cpp circle.h
	$(CXX) $(CXXFLAGS) circle.cpp

sphere.o: sphere.cpp sphere.h
	$(CXX) $(CXXFLAGS) sphere.cpp

cube.o: cube.cpp cube.h
	$(CXX) $(CXXFLAGS) cube.cpp

clean:
	rm -f $(TARGET) $(OBJECTS)

