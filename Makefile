CXX = g++
CXXFLAGS = -std=c++11 -Wall -g
SRCS = main.cpp Character.cpp CharactersList.cpp Weapon.cpp WeaponsList.cpp
OBJS = $(SRCS:.cpp=.o)

EXEC = myGame

all: $(EXEC)
	@echo $(EXEC) has been compiled

$(EXEC): $(OBJS) 
	$(CXX) $(CXXFLAGS) -o $(EXEC) $(OBJS)

.cpp.o:
	$(CXX) $(CXXFLAGS) -c $< -o $@

clean:
	$(RM) $(EXEC) *.o

depend: $(SRCS)
	makedepend $^