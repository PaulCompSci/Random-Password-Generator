# include <ctime> 
# include "passwordGenerator.h"
using namespace std;

int main()
{
    srand(time(0)) ;
    cout << allNumberPassword(4) <<endl; 
    return 0 ; 
}