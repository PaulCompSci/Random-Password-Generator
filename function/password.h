# pragma once 
# include <string> 
using namespace std;


bool allCharactersSame(string s);

string allNumberPassword(const int& size );
string allLowercasePassword(const int& size) ;
string allSymbolPassword(const int& size) ;
string allUppercasePassword(const int& size) ;
string numberAndLowercasePassword(const int& numberOfNumber , const int& numberOfLowercase);
string numberAndUppercasePassword(const int& numberOfNumber , const int& numberOfUppercase) ;
string numberAndSymbolPassword(const int& numberOfNumber,  const int& numberOfSymbol);
string lowercaseAndSymbolPassword(const int& numberOfLowercase , const int& numberOfSymbol) ;
string uppercaseAndSymbolPassword(const int& numberOfUppercase , const int& numberOfSymbol);
string lowercaesAndUppercasePassword (const int& numberOfLowercase , const int& numberOfUppercase) ;
string lowercaseUppercaseNumberPassword(const int& numberOfUppercase , const int& numberOfLowercase , const int& numberOfNumber);