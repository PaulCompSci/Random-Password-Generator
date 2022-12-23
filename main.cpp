
# include <iostream> 
#include<chrono>
#include<thread>
# include "function/outputFunction.h"
# include "function/password.h"

using namespace std;



int main() 
{
    for(int i =  4 ; i<= 128 ; i++)
    {
        for(int j = 1 ; j<= 4 ; j++)
        {
            cout << returnSameTypePassword(j , i) <<endl;
        }
     cout <<endl <<endl; 
    
    }
    

    return 0 ;
}