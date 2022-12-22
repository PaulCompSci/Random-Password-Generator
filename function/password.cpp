# include "random_char.h"
# include <algorithm>
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

   
    string password = "";
    while (allCharactersSame(password))
    {
        password.clear() ;
        for(int i = 0 ; i < size ; i++)
            password.push_back(randomNumber()) ;
    }
    return password;

}

string allLowercasePassword(const int& size) 
{ 
    string password = "";
    while (allCharactersSame(password))
    {
        password.clear() ;
        for(int i = 0 ; i < size ; i++)
            password.push_back(randomLowercase()) ;
    }
    return password;
}

string allSymbolPassword(const int& size) 
{ 
    string password = "";
    while (allCharactersSame(password))
    {
        password.clear() ;
        for(int i = 0 ; i < size ; i++)
            password.push_back(randomSymbol()) ;
    }
    return password;
}

string allUppercasePassword(const int& size) 
{
    string password = "" ;
    while (allCharactersSame(password))
    {
        password.clear() ;
        for(int i = 0 ; i < size ; i++) 
        {
             password.push_back(randomUppercase()) ;
        }
    }

    return password;
}

string numberAndLowercasePassword(const int& numberOfNumber , const int& numberOfLowercase) 
{
    string password = "";

    for(int i = 0 ; i < numberOfNumber ; i++)
        password.push_back(randomNumber());
    for(int i = 0 ; i < numberOfLowercase ; i++)
        password.push_back(randomLowercase());
    
    random_shuffle(password.begin() , password.end());

    return password;

}

string numberAndUppercasePassword(const int& numberOfNumber , const int& numberOfUppercase) 
{
    string password = "";

    for(int i = 0 ; i < numberOfNumber ; i++)
        password.push_back(randomNumber());
    for(int i = 0 ; i < numberOfUppercase ; i++)
        password.push_back(randomUppercase());
    
    random_shuffle(password.begin() , password.end());

    return password;
}