# include <iostream>
# include <ctime>
using  namespace std;



char randomSymbol1()
{
    // ascii code : 33 -> 47
    srand(time(0));
    return rand()% 15 + 33;
}

char randomSymbol2()
{
    //ascii code : 58 -> 64
    srand(time(0));
    return rand()% 7+ 58 ;
}

char randomSymbol3() 
{
    //ascii code : 91->96
    srand(time(0));
    return rand() % 6 + 91;
}

char randomSymbol4() 
{
    //ascii code : 123 -> 126
    srand(time(0));
    return rand()% 4 + 123; 
}

char randomSymbol()
{
   srand(time(0)) ;
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