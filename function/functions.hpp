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