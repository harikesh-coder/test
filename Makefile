CXX = g++
CXXFLAG = -Wall -std=c++11 -g
SRC = $(wildcard *.cpp)
OBJ = $(SRC:.cpp=.o)
target = first

run:$(target)
	./$(target)
$(target):$(OBJ)
	$(CXX) $^ -o $@
%.O:%.cpp
	$(CXX) $(CXXFLAG) -c $< -o $@

clean:
	del *.O $(target) $(obj)