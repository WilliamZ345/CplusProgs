equal: equal.C 
	g++ -o equal equal.C 
menumain: menudisplay.hpp menumain.cpp
	g++ -o menumain menudisplay.hpp menumain.cpp

