
# include <iostream> 
# include "function/password.h"


using namespace std;

int main() 
{ 
    for(int i = 4 ; i <= 128 ; i++)
    {
        cout << allNumberPassword(i) <<endl;
    }




    return 0 ;
}