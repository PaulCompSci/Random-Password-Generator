
# include <iostream>

using namespace std;


char randomLowercase ()
{
    //ascii code : 97 -> 122 
    return rand()% 26 + 97;
}


char randomNumber() 
{
    //ascii code :  48 -> 57   
    return rand() %  10+ 48;
}

char randomSymbol1()
{
    // ascii code : 33 -> 47
    return rand()% 15 + 33;
}

char randomSymbol2()
{
    //ascii code : 58 -> 64
    return rand()% 7+ 58 ;
}

char randomSymbol3() 
{
    //ascii code : 91->96
    return rand() % 6 + 91;
}

char randomSymbol4() 
{
    //ascii code : 123 -> 126
    return rand()% 4 + 123; 
}

char randomSymbol()
{
   int choice = rand() % 4+ 1 ;
   if (choice == 1) 
    return randomSymbol1() ;
   else if (choice ==2 ) 
    return randomSymbol2() ;
   else if (choice == 3 ) 
    return randomSymbol3() ;
   else 
    return randomSymbol4() ; 
    
}


char randomUppercase() 
{
    // ascii code : 65 -> 90 
    return rand()% 26 + 65 ;
}