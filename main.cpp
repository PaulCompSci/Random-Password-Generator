# include "randomSymbolGenerator.h"
# include "randomNumberGenerator.h"
# include "randomUppercaseGenerator.h" 
using namespace std;

int main()
{
    srand(time(0)) ;
    for(int i = 0 ; i < 100  ; i++) 
    {

    cout << randomSymbol() <<endl; 
    cout << randomNumber() <<endl;
    cout << randomUppercase() <<endl; 
    cout <<"==========================" <<endl; 
    }
    
    return 0 ; 
}