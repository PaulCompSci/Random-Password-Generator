#pragma once
#include <iostream>
#include <string>
#include <chrono>
#include <thread>
#include "password.hpp"

void sleep(const int& milliseconds) {
	std::this_thread::sleep_for(std::chrono::milliseconds(milliseconds));
}

class outputPrint {
	public:
	void sleep_cout(const std::string& output, const int& ms) {
		std::cout << output << std::endl;
		sleep(ms);
	}

	void typewriter(const std::string& text) {
		for (std::size_t i = 0; i < text.size(); ++i) {
			std::cout << text[i] << std::flush;
			sleep(50);
		}
		std::cout << std::endl;
	}

	void newline() {
		std::cout << std::endl;
	}
};

/*
inline std::string getPasswordOfType(const int& choice, const int& length) {
	switch (choice) {
		case 1:
			return allNumberPassword(length);
			break;
		case 2:
			return allSymbolPassword(length);
			break;
		case 3:
			return allUppercasePassword(length);
			break;
		case 4:
			return allLowercasePassword(length);
			break;
		case 5:
			return numberAndLowercasePassword(length/2, length/2);
			break;
		case 6:
			return numberAndSymbolPassword(length/2, length/2);
			break;
		case 7:
			return numberAndUppercasePassword(length/2, length/2);
			break;
		case 8:
			return lowercaseAndSymbolPassword(length/2, length/2);
			break;
		case 9:
			return uppercaseAndSymbolPassword(length/2, length/2);
			break;
		case 10:
			return lowercaseAndUppercasePassword(length/2, length/2);
			break;
		case 11:
			return lowercaseUppercaseNumberPassword(length/3, length/3, length/3);
			break;
		case 12:
			return lowercaseUppercaseSymbolPassword(length/3, length/3, length/3);
			break;
		case 13:
			return numberLowercaseSymbolPassword(length/3, length/3, length/3);
			break;
		case 14:
			return numberUppercaseSymbolPassword(length/3, length/3, length/3);
			break;
		case 15:
			return numberLowercaseUppercaseSymbolPassword(length/4, length/4, length/4, length/4);
			break;
		default:
			throw std::runtime_error("Invalid password type choice.");
			break;
	}
}
*/