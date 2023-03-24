#pragma once

/*
	This header file contains functions for generating passwords of various types, including passwords with all characters
	the same, passwords with different types of characters, and passwords with four different types of characters.
	The functions are inline for performance reasons.
*/

#include <algorithm>
#include <string>
#include "random_char.hpp"

int i = 0;
std::string password;


inline bool allCharactersSame(const std::string& s) {
	int n = s.length();
	for (i = 1; i < n; i++) {
		if (s[i] != s[0]) return false;
	}
	return true;
}

// Functions for generating passwords with all characters of the same type
inline std::string allNumberPassword(const int& size) { // All digits (1)
	password = "";
	while (allCharactersSame(password))
	{
		password.clear();
		for(i = 0; i < size; i++)
			password.push_back(randomNumber());
	}
	return password;
}

inline std::string allSymbolPassword(const int& size) { // All symbols (2)
	password = "";
	while (allCharactersSame(password))
	{
		password.clear();
		for(i = 0;i < size;i++) { password.push_back(randomSymbol()); }
	}
	return password;
}

inline std::string allUppercasePassword(const int& size) { // All uppercase (3)
	password = "";
	while (allCharactersSame(password))
	{
		password.clear();
		for (i = 0; i < size; i++) password.push_back(randomUppercase());
	}

	return password;
}

inline std::string allLowercasePassword(const int& size) { // All lowercase (4)
	password = "";
	while (allCharactersSame(password))
	{
		password.clear();
		for(i = 0; i < size; i++) { password.push_back(randomLowercase()); }
	}
	return password;
}

// Functions for generating passwords with two different types of characters
inline std::string numberAndLowercasePassword(const int& numberOfNumber, const int& numberOfLowercase) { // Numbers and lowercase (5)
	password = "";
	for (i = 0; i < numberOfNumber; i++) password.push_back(randomNumber());
	for (i = 0; i < numberOfLowercase; i++) password.push_back(randomLowercase());
	random_shuffle(password.begin(), password.end());
	return password;
}

inline std::string numberAndSymbolPassword(const int& numberOfNumber, const int& numberOfSymbol) { // Numbers and symbols (6)
	password = "";
	for (i = 0; i < numberOfNumber; i++) password.push_back(randomNumber());
	for (i = 0; i < numberOfSymbol; i++) password.push_back(randomSymbol());
	random_shuffle(password.begin(), password.end());
	return password;
}

inline std::string numberAndUppercasePassword(const int& numberOfNumber, const int& numberOfUppercase) { // Numbers and uppercase (7)
	password = "";
	for (i = 0; i < numberOfNumber; i++) password.push_back(randomNumber());
	for (i = 0; i < numberOfUppercase; i++) password.push_back(randomUppercase());
	random_shuffle(password.begin(), password.end());
	return password;
}

inline std::string lowercaseAndSymbolPassword(const int& numberOfLowercase, const int& numberOfSymbol) { // Lowercase and symbols (8)
	password = "";
	for(i = 0; i < numberOfLowercase; i++) password.push_back(randomLowercase()); 
	for(i = 0; i < numberOfSymbol; i++) password.push_back(randomSymbol()); 
	random_shuffle(password.begin(), password.end());
	return password;
}

inline std::string uppercaseAndSymbolPassword(const int& numberOfUppercase, const int& numberOfSymbol) { // Uppercase and symbols (9)
	password = "";
	for(i = 0; i < numberOfUppercase; i++) password.push_back(randomUppercase());
	for(i = 0; i < numberOfSymbol; i++) password.push_back(randomSymbol());
	random_shuffle(password.begin(), password.end());
	return password;
}

inline std::string lowercaseAndUppercasePassword(const int& numberOfLowercase, const int& numberOfUppercase) { // Lowercase and uppercase (10)
	password = "";
	for (i = 0; i < numberOfLowercase; i++) password.push_back(randomLowercase());
	for (i = 0; i < numberOfUppercase; i++) password.push_back(randomUppercase());
	random_shuffle(password.begin(), password.end());
	return password;
}

// Functions for generating passwords with three different types of characters
inline std::string lowercaseUppercaseNumberPassword(const int& numberOfUppercase, const int& numberOfLowercase, const int& numberOfNumber) { // Lowercase, uppercase and numbers (11)
	password = "";
	for (i = 0; i < numberOfLowercase; i++) password.push_back(randomLowercase());
	for (i = 0; i < numberOfUppercase; i++) password.push_back(randomUppercase());
	for (i = 0; i < numberOfNumber; i++) password.push_back(randomNumber());
	random_shuffle(password.begin(), password.end());
	return password;
}

inline std::string lowercaseUppercaseSymbolPassword(const int& numberOfLowercase, const int& numberOfUppercase, const int& numberOfSymbol) { // Lowercase, uppercase and symbols (12)
	password = "";
	for (i = 0; i < numberOfLowercase; i++) password.push_back(randomLowercase());
	for (i = 0; i < numberOfUppercase; i++) password.push_back(randomUppercase());
	for (i = 0; i < numberOfSymbol; i++) password.push_back(randomSymbol());
	random_shuffle(password.begin(), password.end());
	return password;
}

inline std::string numberUppercaseSymbolPassword(const int& numberOfNumber, const int& numberOfUppercase, const int& numberOfSymbol) { // Numbers, lowercase letters and symbols (13)
	password = "";
	for (i = 0; i < numberOfNumber; i++) password.push_back(randomNumber());
	for (i = 0; i < numberOfUppercase; i++) password.push_back(randomUppercase());
	for (i = 0; i < numberOfSymbol; i++) password.push_back(randomSymbol());
	random_shuffle(password.begin(), password.end());
	return password;
}

inline std::string numberLowercaseSymbolPassword(const int& numberOfNumber, const int& numberOfLowercase, const int& numberOfSymbol) { // Numbers, uppercase letters, symbols (14)
	password = "";
	for (i = 0; i < numberOfNumber; i++) password.push_back(randomNumber());
	for (i = 0; i < numberOfLowercase; i++) password.push_back(randomLowercase());
	for (i = 0; i < numberOfSymbol; i++) password.push_back(randomSymbol());
	random_shuffle(password.begin(), password.end());
	return password;
}

// Function for generating passwords with four different types of characters
inline std::string numberLowercaseUppercaseSymbolPassword(const int& numberOfNumber, const int& numberOfLowercase, const int& numberOfUppercase, const int& numberOfSymbol) { // Numbers, lowercase, uppercase and symbols (15)
	password = "";
	for (i = 0; i < numberOfNumber; i++) password.push_back(randomNumber());
	for (i = 0; i < numberOfLowercase; i++) password.push_back(randomLowercase());
	for (i = 0; i < numberOfSymbol; i++) password.push_back(randomSymbol());
	for (i = 0; i < numberOfUppercase; i++) password.push_back(randomUppercase());
	random_shuffle(password.begin(), password.end());
	return password;
}