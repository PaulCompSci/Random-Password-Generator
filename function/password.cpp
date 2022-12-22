# include "random_char.h"
# include <string> 
# include <iostream> 

using namespace std;

bool allCharactersSame(string s)
{
    int n = s.length();
    for (int i = 1; i < n; i++)
        if (s[i] != s[0])
            return false;
 
    return true;
}

string allNumberPassword(const int& size )
{

   
    return password; string password = "";
    while (allCharactersSame(password))
    {
        password.clear() ;
        for(int i = 0 ; i < size ; i++)
            password.push_back(randomNumber()) ;
    }

}


