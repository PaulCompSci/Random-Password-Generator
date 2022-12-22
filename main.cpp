
# include <iostream> 
# include "function/password.h"


using namespace std;

int main() 

{
    srand(time(0)) ; 
    // for(int i = 4 ; i <= 128 ; i++)
    // {
    //     cout << allNumberPassword(i) <<endl;
    // }

    // for(int i = 4 ; i <= 128 ; i++)
    // {
    //     cout << allLowercasePassword(i) <<endl;
    // }


    // for(int i = 4 ; i <= 128 ; i++)
    //     cout << allSymbolPassword(i) <<endl; 
        
    // for (int i = 4; i <= 128 ; i++)
    //     cout << allUppercasePassword(i) <<endl; 

    
    // for(int i = 4 ; i <= 128 ; i++)
    //     cout << numberAndLowercasePassword(i/2, i- i /2 )<<endl;

    // for(int i = 4  ; i <= 128 ; i++)
    //     cout << numberAndUppercasePassword(i/2 , i - i/2) <<endl; 

    // for(int i = 4  ; i <= 128 ; i++)
    //     cout << numberAndSymbolPassword(i/2 , i - i/2) <<endl; 
    

    // for(int i = 4 ; i <= 128  ; i++)
    //     cout << lowercaseAndSymbolPassword(i/2 , i - i /2 ) << endl; 
    
    // for(int i = 4 ; i <= 128  ; i++)
    //     cout << uppercaseAndSymbolPassword(i/2 , i - i /2 ) << endl; 

    // for(int i = 4 ; i <= 128 ; i++)
    //     cout << lowercaesAndUppercasePassword(i/2 , i - i/2 ) <<endl; 

cout << numberUppercaseSymbolPassword(12,23,45) <<endl;
    return 0 ;
}