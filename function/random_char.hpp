#pragma once
#include <cstdlib>

// This function returns a random lowercase letter from a-z (ASCII code 97-122)
inline char randomLowercase() {
	return rand() % 26 + 97;
}

// This function returns a random digit from 0-9 (ASCII code 48-57)
inline char randomNumber() {
	return rand() % 10 + 48;
}

// This function returns a random symbol from ! to / (ASCII code 33-47)
inline char randomSymbol1() {
	return rand() % 15 + 33;
}

// This function returns a random symbol from : to @ (ASCII code 58-64)
inline char randomSymbol2() {
	return rand() % 7 + 58;
}

// This function returns a random symbol from [ to ` (ASCII code 91-96)
inline char randomSymbol3() {
	return rand() % 6 + 91;
}

// This function returns a random symbol from { to ~ (ASCII code 123-126)
inline char randomSymbol4() {
	return rand() % 4 + 123; 
}

// This function returns a random symbol, using one of the four randomSymbol functions above
inline char randomSymbol() {
	int choice = rand() % 4 + 1;
	if (choice == 1)
		return randomSymbol1();
	else if (choice == 2)
		return randomSymbol2();
	else if (choice == 3)
		return randomSymbol3();
	else
		return randomSymbol4(); 
}

// This function returns a random uppercase letter from A-Z (ASCII code 65-90)
inline char randomUppercase() {
	return rand() % 26 + 65;
}