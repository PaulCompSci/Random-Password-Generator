//# include "includes/random_char.h"
# include "random_char_generator/random_char.h"
# include <iostream>


using namespace std;

int main() 
{ 
    int num = 5 ;   
    cout <<"please enter a number : " <<endl;
    cin >> num ;
    cout << "the number is  : " << num <<endl; 
    for(int i = 0 ; i < 100 ; i++)
    {
        cout << randomSymbol()<<endl;    
        cout<< randomNumber()<<endl;
        cout << randomUppercase()<<endl;
      
        cout << "==========================" <<endl; 

    }



    return 0 ;
}