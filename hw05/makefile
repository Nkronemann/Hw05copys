CXX = g++
CXXFLAGS = -Wall -Wextra -std=c++11
DEBUGFLAGS = -g

SLIDES = s14.cpp s15.cpp s16.cpp s17.cpp s18.cpp s19.cpp s20.cpp s22.cpp

# Generate object file names
OBJS = $(patsubst %, s%.o, $(SLIDES))

all: pointers

ggdb: CXXFLAGS += $(DEBUGFLAGS)
ggdb: pointers

pointers: $(OBJS)
	$(CXX) $(CXXFLAGS) -o pointers $(OBJS)

s%.o: s%.cpp s%.h
	$(CXX) $(CXXFLAGS) -c $< -o $@

clean:
	rm -f pointers $(OBJS)

tar:
	tar -cvf hw05.tar $(wildcard s*.cpp) $(wildcard s*.h) $(wildcard s*.scr) Makefile hw05gitlog.txt
