# include <ctime> 
# include "randomSymbolGenerator.h"
# include "randomNumberGenerator.h"
# include "randomUppercaseGenerator.h" 
# include "randomLowercaseGenerator.h"
using namespace std;

int main()
{
    srand(time(0)) ;
    for(int i = 0 ; i < 100  ; i++) 
    {
    cout << randomLowercase()<<endl;
    cout <<"==========================" <<endl; 
    }
    
    return 0 ; 
}