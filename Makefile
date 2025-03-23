all:
	g++ -Wall -Wextra -Wpedantic -o DonkeyKong DonkeyKong\ COP\ 3003\ Project.cpp
//compille with 
g++ -fsanitize=address -g -o DonkeyKong DonkeyKong\ COP\ 3003\ Project.cpp
./DonkeyKong 
