CXX = g++
CXXFLAGS = -std=c++11 -Wall -g

main: main.o CharactersList.o WeaponsList.o Character.o Weapon.o
	$(CXX) $(CXXFLAGS) -o main main.o CharactersList.o WeaponsList.o Character.o Weapon.o

main.o: main.cpp CharactersList.h WeaponsList.h Character.h Weapon.h
	$(CXX) $(CXXFLAGS) -c main.cpp

%.0: %.h

#CharactersList.o: CharactersList.h Character.h

#Character.o: Character.h Weapon.h

#Weapon.o: Weapon.h

#WeaponsList.o: WeaponsList.h Weapon.h

clean:
	rm main *.o
