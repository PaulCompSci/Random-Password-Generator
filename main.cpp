#include <iostream>
#include <string>
#include <map>
#include "function/outputFunction.hpp"
#include "function/password.hpp"
using std::cout;
using std::cin;
using std::endl;

int main(int argc, char* argv[]) {

	outputPrint print;
	std::map<int, std::string> choiceMap = {
		{1, "All numbers"},
		{2, "All symbols"},
		{3, "All uppercase letters"},
		{4, "All lowercase letters"},
		{5, "Numbers and lowecase letters"},
		{6, "Numbers and symbols"},
		{7, "Numbers and uppercase letters"},
		{8, "Lowercase letters and uppercase letters"},
		{9, "Uppercase letters and symbols"},
		{10, "Lowercase letters and uppercase letters"},
		{11, "Lowercase letters, uppercase letters and numbers"},
		{12, "Lowercase letters, uppercase letters and symbols"},
		{13, "Numbers, lowercase letters, symbols"},
		{14, "Numbers, uppercase letters, symbols"},
		{15, "Numbers, lowercase letters, uppercase letters, symbols"}
	};

	print.typewriter("Enter the desired length of password (minimum: 8, maximum: 128)");
	print.typewriter("Decent password length: 8 to 14");
	print.typewriter("Strong password length: 14 to 128");
	int length, half = length / 2, third = length / 3;
	std::cout << "> "; std::cin >> length;
	print.newline();

	if (length < 8 || length > 128) {
		std::cout << "Please enter a valid length of password." << std::endl;
	}

	else {
		std::cout << std::endl << "The length of password you chose is: " << length << " characters." << std::endl;

		int choice;

		print.typewriter("Below is a list of password combinations available:");
		print.newline();

		print.sleep_cout("ID combinations:", 50);
		print.sleep_cout("1. All numbers", 150);
		print.sleep_cout("2. All symbols", 150);
		print.sleep_cout("3. All uppercase letters", 150);
		print.sleep_cout("4. All lowercase letters", 150);
		print.sleep_cout("5. Numbers and lowercase letters", 150);
		print.sleep_cout("6. Numbers and symbols", 150);
		print.sleep_cout("7. Numbers and uppercase letters", 150);
		print.sleep_cout("8. Lowercase letters and symbols", 150);
		print.sleep_cout("9. Uppercase letters and symbols", 150);
		print.sleep_cout("10. Lowercase letters and uppercase letters", 150);
		print.sleep_cout("11. Lowercase letters, uppercase letters and numbers", 150);
		print.sleep_cout("12. Lowercase letters, uppercase letters and symbols", 150);
		print.sleep_cout("13. Numbers, lowercase letters, symbols", 150);
		print.sleep_cout("14. Numbers, uppercase letters, symbols", 150);
		print.sleep_cout("15. Numbers, lowercase letters, uppercase letters, symbols", 150);
		print.newline();

		print.typewriter("Enter the ID of the password combination: ");
		std::cout << "> "; std::cin >> choice;

		if (choice <= 0 || choice > 15) {
			throw std::runtime_error("Invalid password type choice.");
			return 1;
		}

		else {
			int numberCount, lowercaseCount, uppercaseCount, symbolCount;
			print.newline();
			const std::string chosenOutput = "Combination of password you chose: " + std::to_string(choice) + " - " + choiceMap[choice];
			print.typewriter(chosenOutput);

			switch (choice) {
				case 1:
					print.typewriter(allNumberPassword(length));
					break;

				case 2:
					print.typewriter(allSymbolPassword(length));
					break;

				case 3:
					print.typewriter(allUppercasePassword(length));
					break;

				case 4:
					print.typewriter(allLowercasePassword(length));
					break;

				case 5:
					print.typewriter("How many numbers do you want the password to have?");
					std::cout << "> "; std::cin >> numberCount;
					print.typewriter("How many lowercase characters do you want the password to have?");
					std::cout << "> "; std::cin >> lowercaseCount;
					if ( (numberCount + lowercaseCount) != length ) {
						numberCount = half;
						lowercaseCount = half;
					}
					print.typewriter(numberAndLowercasePassword(numberCount, lowercaseCount));
					break;

				case 6
					print.typewriter("How many numbers do you want the password to have?");
					std::cout << "> "; std::cin >> numberCount;
					print.typewriter("How many special characters do you want the password to have?");
					std::cout << "> "; std::cin >> symbolCount;
					if ( (numberCount + symbolCount) != length ) {
						numberCount = half;
						symbolCount = half;
					}

					print.typewriter(numberAndSymbolPassword(numberCount, symbolCount));
					break;

				case 7: // num & upp
					print.typewriter("How many numbers do you want the password to have?");
					std::cout << "> "; std::cin >> numberCount;
					print.typewriter("How many special characters do you want the password to have?");
					std::cout << "> "; std::cin >> uppercaseCount;
					if ( (numberCount + uppercaseCount) != length ) {
						numberCount = half;
						uppercaseCount = half;
					}
					print.typewriter(numberAndUppercasePassword((numberCount), uppercaseCount));
					break;

				case 8: // low & app
					print.typewriter("How many lowercase characters do you want the password to have?");
					std::cout << "> "; std::cin >> lowercaseCount;
					print.typewriter("How many special characters do you want the password to have?");
					std::cout << "> "; std::cin >> symbolCount;
					if ( (lowercaseCount + symbolCount) != length ) {
						lowercaseCount = half;
						symbolCount = half;
					}
					print.typewriter(lowercaseAndUppercasePassword(lowercaseCount, symbolCount));
					break;

				case 9:
					print.typewriter("How many uppercase characters do you want the password to have?");
					std::cout << "> "; std::cin >> uppercaseCount;
					print.typewriter("How many special characters do you want the password to have?");
					std::cout << "> "; std::cin >> symbolCount;
					if ( (uppercaseCount + symbolCount) != length ) {
						uppercaseCount = half;
						symbolCount = half;
					}
					print.typewriter(uppercaseAndSymbolPassword(lowercaseCount, symbolCount));
					break;

				case 10: //Lowercase letters and uppercase letters
					print.typewriter("How many uppercase characters do you want the password to have?");
					std::cout << "> "; std::cin >> lowercaseCount;
					print.typewriter("How many uppercase characters do you want the password to have?");
					std::cout << "> "; std::cin >> uppercaseCount;
					if ( (lowercaseCount + uppercaseCount) != length ) {
						lowercaseCount = half;
						uppercaseCount = half;
					}
					print.typewriter(lowercaseAndUppercasePassword(lowercaseCount, uppercaseCount));
					break;

				case 11: //Lowercase letters, uppercase letters and numbers
					print.typewriter("How many lower characters do you want the password to have?");
					std::cout << "> "; std::cin >> lowercaseCount;
					print.typewriter("How many uppercase characters do you want the password to have?");
					std::cout << "> "; std::cin >> uppercaseCount;
					print.typewriter("How many numbers do you want the password to have?");
					std::cout << "> "; std::cin >> numberCount;
					if ( (lowercaseCount + uppercaseCount + numberCount) != length ) {
						lowercaseCount = third;
						uppercaseCount = third;
						numberCount = third;
					}
					print.typewriter(lowercaseUppercaseNumberPassword(lowercaseCount, uppercaseCount, numberCount));
					break;

				case 12: //Lowercase letters, uppercase letters and symbols
					print.typewriter("How many lower characters do you want the password to have?");
					std::cout << "> "; std::cin >> lowercaseCount;
					print.typewriter("How many uppercase characters do you want the password to have?");
					std::cout << "> "; std::cin >> uppercaseCount;
					print.typewriter("How many special characters do you want the password to have?");
					std::cout << "> "; std::cin >> symbolCount;
					if ( (lowercaseCount + uppercaseCount + symbolCount) != length ) {
						lowercaseCount = third;
						uppercaseCount = third;
						symbolCount = third;
					}
					print.typewriter(lowercaseUppercaseSymbolPassword(lowercaseCount, uppercaseCount, symbolCount));
					break;

				case 13: //Numbers, lowercase letters, symbols
					print.typewriter("How many numbers do you want the password to have?");
					std::cout << "> "; std::cin >> numberCount;
					print.typewriter("How many lowercase characters do you want the password to have?");
					std::cout << "> "; std::cin >> lowercaseCount;
					print.typewriter("How many special characters do you want the password to have?");
					std::cout << "> "; std::cin >> symbolCount;
					if ( (numberCount + lowercaseCount + symbolCount) != length ) {
						numberCount = third;
						lowercaseCount = third;
						symbolCount = third;
					}
					print.typewriter(numberLowercaseSymbolPassword(numberCount, lowercaseCount, symbolCount));
					break;

				case 14: //Numbers, uppercase letters, symbols
					print.typewriter("How many numbers do you want the password to have?");
					std::cout << "> "; std::cin >> numberCount;
					print.typewriter("How many uppercase characters do you want the password to have?");
					std::cout << "> "; std::cin >> uppercaseCount;
					print.typewriter("How many special characters do you want the password to have?");
					std::cout << "> "; std::cin >> symbolCount;
					if ( (numberCount + uppercaseCount + symbolCount) != length ) {
						lowercaseCount = third;
						uppercaseCount = third;
						symbolCount = third;
					}
					print.typewriter(numberUppercaseSymbolPassword(numberCount, lowercaseCount, symbolCount));
					break;

				case 15: //Numbers, lowercase letters, uppercase letters, symbols
					print.typewriter("How many numbers do you want the password to have?");
					std::cout << "> "; std::cin >> numberCount;
					print.typewriter("How many lowercase characters do you want the password to have?");
					std::cout << "> "; std::cin >> lowercaseCount;
					print.typewriter("How many special characters do you want the password to have?");
					std::cout << "> "; std::cin >> uppercaseCount;
					print.typewriter("How many special characters do you want the password to have?");
					std::cout << "> "; std::cin >> symbolCount;
					if ( (numberCount + lowercaseCount + uppercaseCount + symbolCount) != length ) {
						numberCount = length / 4;
						lowercaseCount = length / 4;
						uppercaseCount = length / 4;
						symbolCount = length / 4;
					}
					print.typewriter(numberLowercaseUppercaseSymbolPassword(numberCount, lowercaseCount, uppercaseCount, symbolCount));
					break;

					default:
						throw std::runtime_error("Error.");
						break;
			}

		}

	}

	return 0;
}