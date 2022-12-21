# include <iostream>
# include <ctime>
using  namespace std;



char randomSymbol()
{
    // ascii code : 33 -> 47
    srand(time(0));
    return rand()% 15 + 33;
}

