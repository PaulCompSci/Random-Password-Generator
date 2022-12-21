# include <iostream>
# include <string> 
# include "randomCharacterGenerator.h"
using namespace std;



string allNumberPassword(const int& size )
{

    string password = "";
    for(int i = 0 ; i < size ; i++)
        password.push_back(randomNumber()) ;

    return password;

}

