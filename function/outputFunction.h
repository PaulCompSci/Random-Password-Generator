# pragma once
# include <string> 
using namespace std;

void type_text(const std::string& text);


int returnChoice ();//with printing statement 
int returnSize() ; // with printing statement

string returnSameTypePassword ( const int& choice , const int& size) ;
string returnTwoTypePassword ( const int& choice , const int& numberOfType1 , const int& numberOfType2) ;


string returnThreeTypePassword(const int& choice , const int& numberOfType1 , const int& numberOfType2 , const int&  numberOfType3) ;

string returnFourTypePassword(const int& numberOfType1 , const int& numberOfType2 , const int&  numberOfType3 , const int& numberOfType4) ;