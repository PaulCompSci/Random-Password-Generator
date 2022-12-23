
# include <iostream> 
#include<chrono>
#include<thread>
# include "function/outputFunction.h"
# include "function/password.h"

using namespace std;



int main() 
{
    srand(time(0)) ;
    cout << allUppercasePassword (5) <<endl; 
    type_text("welcome to random password generator");
    cout <<endl; 
    int size = returnSize()  ;
    int choice = returnChoice() ;   

    
    

    return 0 ;
}