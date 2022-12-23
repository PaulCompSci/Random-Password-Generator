# pragma once 
# include <string> 
using namespace std;


bool allCharactersSame(string s);


//password with the same type of character 
string allNumberPassword(const int& size );
string allLowercasePassword(const int& size) ;
string allSymbolPassword(const int& size) ;
string allUppercasePassword(const int& size) ;

//password with two different type of character 
string numberAndLowercasePassword(const int& numberOfNumber , const int& numberOfLowercase);
string numberAndUppercasePassword(const int& numberOfNumber , const int& numberOfUppercase) ;
string numberAndSymbolPassword(const int& numberOfNumber,  const int& numberOfSymbol);
string lowercaseAndSymbolPassword(const int& numberOfLowercase , const int& numberOfSymbol) ;
string uppercaseAndSymbolPassword(const int& numberOfUppercase , const int& numberOfSymbol);
string lowercaseAndUppercasePassword (const int& numberOfLowercase , const int& numberOfUppercase) ;

//password with three different type of character 
string lowercaseUppercaseNumberPassword(const int& numberOfUppercase , const int& numberOfLowercase , const int& numberOfNumber);
string lowercaseUppercaseSymbolPassword(const int& numberOfLowercase, const int& numberOfUppercase , const int& numberOfSymbol);
string numberUppercaseSymbolPassword(const int& numberOfNumber , const int& numberOfUppercase , const int& numberOfSymbol);
string numberLowercaseSymbolPassword(const int& numberOfNumber, const int& numberOfLowercase, const int& numberOfSymbol) ;

//password with four different type of character
string numberLowercaseUppercaseSymbolPassword(const int& numberOfNumber,const int& numberOfLowercase, const int& numberOfUppercase , const int& numberOfSymbol );