#pragma once
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

inline std::string allNumberPassword(const int& size) {
	password = "";
	while (allCharactersSame(password))
	{
		password.clear();
		for(i = 0; i < size; i++)
			password.push_back(randomNumber());
	}
	return password;
}

inline std::string allSymbolPassword(const int& size) {
	password = "";
	while (allCharactersSame(password))
	{
		password.clear();
		for(i = 0;i < size;i++) { password.push_back(randomSymbol()); }
	}
	return password;
}

inline std::string allUppercasePassword(const int& size) {
	password = "";
	while (allCharactersSame(password))
	{
		password.clear();
		for (i = 0; i < size; i++) password.push_back(randomUppercase());
	}

	return password;
}

inline std::string allLowercasePassword(const int& size) {
	password = "";
	while (allCharactersSame(password))
	{
		password.clear();
		for(i = 0; i < size; i++) { password.push_back(randomLowercase()); }
	}
	return password;
}

inline std::string numberAndLowercasePassword(const int& numberOfNumber, const int& numberOfLowercase) {
	password = "";
	for (i = 0; i < numberOfNumber; i++) password.push_back(randomNumber());
	for (i = 0; i < numberOfLowercase; i++) password.push_back(randomLowercase());
	random_shuffle(password.begin(), password.end());
	return password;
}

inline std::string numberAndSymbolPassword(const int& numberOfNumber, const int& numberOfSymbol) {
	password = "";
	for (i = 0; i < numberOfNumber; i++) password.push_back(randomNumber());
	for (i = 0; i < numberOfSymbol; i++) password.push_back(randomSymbol());
	random_shuffle(password.begin(), password.end());
	return password;
}

inline std::string numberAndUppercasePassword(const int& numberOfNumber, const int& numberOfUppercase) {
	password = "";
	for (i = 0; i < numberOfNumber; i++) password.push_back(randomNumber());
	for (i = 0; i < numberOfUppercase; i++) password.push_back(randomUppercase());
	random_shuffle(password.begin(), password.end());
	return password;
}

inline std::string lowercaseAndSymbolPassword(const int& numberOfLowercase, const int& numberOfSymbol) {
	password = "";
	for(i = 0; i < numberOfLowercase; i++) password.push_back(randomLowercase()); 
	for(i = 0; i < numberOfSymbol; i++) password.push_back(randomSymbol()); 
	random_shuffle(password.begin(), password.end());
	return password;
}

inline std::string uppercaseAndSymbolPassword(const int& numberOfUppercase, const int& numberOfSymbol) {
	password = "";
	for(i = 0; i < numberOfUppercase; i++) password.push_back(randomUppercase());
	for(i = 0; i < numberOfSymbol; i++) password.push_back(randomSymbol());
	random_shuffle(password.begin(), password.end());
	return password;
}

inline std::string lowercaseAndUppercasePassword(const int& numberOfLowercase, const int& numberOfUppercase) {
	password = "";
	for (i = 0; i < numberOfLowercase; i++) password.push_back(randomLowercase());
	for (i = 0; i < numberOfUppercase; i++) password.push_back(randomUppercase());
	random_shuffle(password.begin(), password.end());
	return password;
}

// Functions for generating passwords with three different types of characters
inline std::string lowercaseUppercaseNumberPassword(const int& numberOfUppercase, const int& numberOfLowercase, const int& numberOfNumber) {
	password = "";
	for (i = 0; i < numberOfLowercase; i++) password.push_back(randomLowercase());
	for (i = 0; i < numberOfUppercase; i++) password.push_back(randomUppercase());
	for (i = 0; i < numberOfNumber; i++) password.push_back(randomNumber());
	random_shuffle(password.begin(), password.end());
	return password;
}

inline std::string lowercaseUppercaseSymbolPassword(const int& numberOfLowercase, const int& numberOfUppercase, const int& numberOfSymbol) {
	password = "";
	for (i = 0; i < numberOfLowercase; i++) password.push_back(randomLowercase());
	for (i = 0; i < numberOfUppercase; i++) password.push_back(randomUppercase());
	for (i = 0; i < numberOfSymbol; i++) password.push_back(randomSymbol());
	random_shuffle(password.begin(), password.end());
	return password;
}

inline std::string numberUppercaseSymbolPassword(const int& numberOfNumber, const int& numberOfUppercase, const int& numberOfSymbol) {
	password = "";
	for (i = 0; i < numberOfNumber; i++) password.push_back(randomNumber());
	for (i = 0; i < numberOfUppercase; i++) password.push_back(randomUppercase());
	for (i = 0; i < numberOfSymbol; i++) password.push_back(randomSymbol());
	random_shuffle(password.begin(), password.end());
	return password;
}

inline std::string numberLowercaseSymbolPassword(const int& numberOfNumber, const int& numberOfLowercase, const int& numberOfSymbol) {
	password = "";
	for (i = 0; i < numberOfNumber; i++) password.push_back(randomNumber());
	for (i = 0; i < numberOfLowercase; i++) password.push_back(randomLowercase());
	for (i = 0; i < numberOfSymbol; i++) password.push_back(randomSymbol());
	random_shuffle(password.begin(), password.end());
	return password;
}

// Function for generating passwords with four different types of characters
inline std::string numberLowercaseUppercaseSymbolPassword(const int& numberOfNumber, const int& numberOfLowercase, const int& numberOfUppercase, const int& numberOfSymbol) {
	password = "";
	for (i = 0; i < numberOfNumber; i++) password.push_back(randomNumber());
	for (i = 0; i < numberOfLowercase; i++) password.push_back(randomLowercase());
	for (i = 0; i < numberOfSymbol; i++) password.push_back(randomSymbol());
	for (i = 0; i < numberOfUppercase; i++) password.push_back(randomUppercase());
	random_shuffle(password.begin(), password.end());
	return password;
}