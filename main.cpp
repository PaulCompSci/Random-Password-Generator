
# include <iostream> 
#include<chrono>
#include<thread>
# include "function/outputFunction.h"
# include "function/password.h"

using namespace std;




int main() 
{
    srand(time(0)) ; 
    // srand(time(0)) ;
    // type_text("welcome to random password generator");
    // cout <<endl; 
    // int size = returnSize()  ;
    // int choice = returnChoice() ; 
    for(int i = 0 ; i <10 ; i++ )
    {
        cout << returnFourTypePassword(20,20,20,20) << endl;  
        cout <<endl;    
    }
        


    

    

    return 0 ;
}