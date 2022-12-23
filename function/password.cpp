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

string numberAndSymbolPassword(const int& numberOfNumber,  const int& numberOfSymbol)
{
    string password = "";

    for(int i = 0 ; i < numberOfNumber ; i++)
        password.push_back(randomNumber());
    for(int i = 0 ; i < numberOfSymbol ; i++)
        password.push_back(randomSymbol());
    
    random_shuffle(password.begin() , password.end());

    return password;
    
}

string lowercaseAndSymbolPassword(const int& numberOfLowercase , const int& numberOfSymbol) 
{
    string password = "" ;
    for(int i = 0 ; i < numberOfLowercase ; i++)
        password.push_back(randomLowercase());
    
    for(int i  = 0 ; i < numberOfSymbol  ; i++)
        password.push_back(randomSymbol()) ;

    random_shuffle(password.begin() , password.end());

    return password;

}

string uppercaseAndSymbolPassword(const int& numberOfUppercase , const int& numberOfSymbol)
{
    string password = "";
    for(int i = 0 ; i < numberOfUppercase ; i++)    
        password.push_back(randomUppercase());
    for(int i = 0 ; i < numberOfSymbol ; i++)
        password.push_back(randomSymbol()) ;
    
    random_shuffle(password.begin() , password.end());

    return password;

}

string lowercaesAndUppercasePassword (const int& numberOfLowercase , const int& numberOfUppercase) 
{
    string password = "";
    for(int i = 0 ; i < numberOfLowercase ; i++)
        password.push_back(randomLowercase());
    for(int i = 0 ; i < numberOfUppercase ; i++)
        password.push_back(randomUppercase());

    random_shuffle(password.begin() , password.end());

    return password;
}

string lowercaseUppercaseNumberPassword(const int& numberOfUppercase , const int& numberOfLowercase , const int& numberOfNumber)
{
    string password = "";

    for(int i = 0 ; i < numberOfLowercase ; i++)
        password.push_back(randomLowercase());

    for(int i = 0 ; i < numberOfUppercase ; i++)
        password.push_back(randomUppercase());

    for(int i = 0 ; i < numberOfNumber ; i++)
        password.push_back(randomNumber());

    random_shuffle(password.begin() , password.end());

    return password;


}

string lowercaseUppercaseSymbolPassword(const int& numberOfLowercase, const int& numberOfUppercase , const int& numberOfSymbol)
{
    string password = "";

    for(int i = 0 ; i < numberOfLowercase ; i++)
        password.push_back(randomLowercase());

    for(int i = 0 ; i < numberOfUppercase ; i++)
        password.push_back(randomUppercase());

    for(int i  = 0 ; i < numberOfSymbol  ; i++)
        password.push_back(randomSymbol()) ;
    
    random_shuffle(password.begin() , password.end());

    return password;

}

string numberUppercaseSymbolPassword(const int& numberOfNumber , const int& numberOfUppercase , const int& numberOfSymbol) 
{ 
    string password = "" ;
    for(int i = 0 ; i < numberOfNumber ; i++)
        password.push_back(randomNumber());
    for(int i = 0 ; i < numberOfUppercase ; i++)
        password.push_back(randomUppercase());

    for(int i  = 0 ; i < numberOfSymbol  ; i++)
        password.push_back(randomSymbol()) ;

    random_shuffle(password.begin() , password.end());

    return password;

    
}

string numberLowercaseSymbolPassword(const int& numberOfNumber, const int& numberOfLowercase, const int& numberOfSymbol) 
{
    string password = "";

    for(int i = 0 ; i < numberOfNumber ; i++)
        password.push_back(randomNumber());
    for(int i = 0 ; i < numberOfLowercase ; i++)
        password.push_back(randomLowercase());
    for(int i = 0 ; i < numberOfSymbol ; i++)
        password.push_back(randomSymbol());

    random_shuffle(password.begin() , password.end());

    return password;
}

string numberLowercaseUppercaseSymbolPassword(const int& numberOfNumber,const int& numberOfLowercase, const int& numberOfUppercase , const int& numberOfSymbol )
{ 
    string password = "" ;

    for(int i = 0 ; i < numberOfNumber ; i++)
        password.push_back(randomNumber());
    for(int i = 0 ; i < numberOfLowercase ; i++)
        password.push_back(randomLowercase());
    for(int i = 0 ; i < numberOfSymbol ; i++)
        password.push_back(randomSymbol());

    for(int i = 0 ; i < numberOfUppercase ; i++)
        password.push_back(randomUppercase());

     random_shuffle(password.begin() , password.end());

    return password;

}