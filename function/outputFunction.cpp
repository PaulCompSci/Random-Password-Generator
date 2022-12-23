# include <iostream>
# include "password.h"
# include <string> 
#include<chrono>
#include<thread>

using namespace std;

// function to output as if it was being typed
void type_text(const std::string& text)
{
    // loop through each character in the text
    for (std::size_t i = 0; i < text.size(); ++i)
    {
        // output one character
        // flush to make sure the output is not delayed
        std::cout << text[i] << std::flush;

        // sleep 60 milliseconds
        std::this_thread::sleep_for(std::chrono::milliseconds(60));
    }

    
}





int returnChoice ()
{
    int  choice  = 0 ;
    cout <<endl; 

    while ( choice <= 0 || choice > 15 )
    {
        type_text("below is a list of password combination available ") ;
        cout <<endl;
        cout << "1. all number"<<endl; 
        this_thread::sleep_for(chrono::milliseconds(150));
        cout << "2. all Symbol " <<endl;
        this_thread::sleep_for(chrono::milliseconds(150));
        cout << "3. all uppercase letter"<<endl;
        this_thread::sleep_for(chrono::milliseconds(150));
        cout << "4. all lowercase letter"<<endl;
        this_thread::sleep_for(chrono::milliseconds(150));

        cout << "5. number and lowercase letter"<<endl;
        this_thread::sleep_for(chrono::milliseconds(150));
        cout << "6. number and symbol " <<endl; 
        this_thread::sleep_for(chrono::milliseconds(150));
        cout << "7. number and uppercase letter"<<endl;
        this_thread::sleep_for(chrono::milliseconds(150));
        cout << "8. lowercase letter and symbol"<<endl;
        this_thread::sleep_for(chrono::milliseconds(150));
        cout << "9. uppercase letter and symbol"<<endl;
        this_thread::sleep_for(chrono::milliseconds(150));
        cout << "10. lowercase letter and uppercase letter"<<endl;
        this_thread::sleep_for(chrono::milliseconds(150));

        cout << "11. number , lowercase letter and uppercase letter "<<endl;
        this_thread::sleep_for(chrono::milliseconds(150));
        cout <<"12. lowercase letter , uppercase letter and symbol" <<endl;
        this_thread::sleep_for(chrono::milliseconds(150));
        cout << "13. number , lowercase letter , symbol"<<endl;
        this_thread::sleep_for(chrono::milliseconds(150));
        cout <<"14. number, uppercase letter , symbol" <<endl;
        this_thread::sleep_for(chrono::milliseconds(150));
        
        cout << "15. number , lowercase letter , uppercase letter , symbol"<<endl;
        this_thread::sleep_for(chrono::milliseconds(150)); 

        cout <<"Please enter the number of the password combination that you want : ";
        cin >> choice ;

        if ( choice <= 0 || choice >15 )   
        {    
            cout << "you entered a invalid number, please enter a number between 1 to 15"<<endl; 
            this_thread::sleep_for(chrono::milliseconds(0));
            cout <<endl <<endl; 
        }
    }
 

    //TODO  add switch statement that print out the user choice 
    return choice ;

}

int returnSize() 
{
    //determine the length of the password 
    int size = 0 ;
    while(size < 4  || size >128)
    {
        cout << "please enter the desire length of password (minimum : 4, maximum : 128) :  " ;
        cin >> size ;
        if(size < 4 || size > 128 ) 
            cout <<"please enter a valid length of password."<<endl;
        
    }

    //TODO  add print statement that print out the size that the user input

    return size ; 
}

string returnSameTypePassword ( const int& choice , const int& size) 
{           
    if (choice  == 1) 
        return allNumberPassword(size);
    
    else if (choice == 2) 
        return allSymbolPassword(size) ;

    else if (choice == 3) 
        return allUppercasePassword(size) ;
    
    else if (choice == 4) 
        return allLowercasePassword(size) ;


    return  "N/A";

}



