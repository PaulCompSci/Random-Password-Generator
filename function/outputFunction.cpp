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
        std::this_thread::sleep_for(std::chrono::milliseconds(40));
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
        cout << "ID combination " <<endl;
        cout << "== ==============="<<endl;
        cout << "1. all digit"<<endl; 
        this_thread::sleep_for(chrono::milliseconds(150));
        cout << "2. all Symbol " <<endl;
        this_thread::sleep_for(chrono::milliseconds(150));
        cout << "3. all uppercase letter"<<endl;
        this_thread::sleep_for(chrono::milliseconds(150));
        cout << "4. all lowercase letter"<<endl;
        this_thread::sleep_for(chrono::milliseconds(150));

        cout << "5. digit and lowercase letter"<<endl;
        this_thread::sleep_for(chrono::milliseconds(150));
        cout << "6. digit and symbol " <<endl; 
        this_thread::sleep_for(chrono::milliseconds(150));
        cout << "7. digit and uppercase letter"<<endl;
        this_thread::sleep_for(chrono::milliseconds(150));
        cout << "8. lowercase letter and symbol"<<endl;
        this_thread::sleep_for(chrono::milliseconds(150));
        cout << "9. uppercase letter and symbol"<<endl;
        this_thread::sleep_for(chrono::milliseconds(150));
        cout << "10. lowercase letter and uppercase letter"<<endl;
        this_thread::sleep_for(chrono::milliseconds(150));

        cout << "11. lowercase letter , uppercase letter and digit "<<endl;
        this_thread::sleep_for(chrono::milliseconds(150));
        cout <<"12. lowercase letter , uppercase letter and symbol" <<endl;
        this_thread::sleep_for(chrono::milliseconds(150));
        cout << "13. digit , lowercase letter , symbol"<<endl;
        this_thread::sleep_for(chrono::milliseconds(150));
        cout <<"14. digit, uppercase letter , symbol" <<endl;
        this_thread::sleep_for(chrono::milliseconds(150));
        
        cout << "15. digit , lowercase letter , uppercase letter , symbol"<<endl;
        this_thread::sleep_for(chrono::milliseconds(150)); 

        cout <<endl; 
        cout <<"Enter the ID of the password combination : ";
        cin >> choice ;

        if ( choice <= 0 || choice >15 )   
        {    
            cout << "you entered a invalid number, please enter a integer value between 1 to 15"<<endl; 
            this_thread::sleep_for(chrono::milliseconds(0));
            cout <<endl <<endl; 
        }
    }
    cout <<endl; 
    cout << "combination of password you chosen : " << choice << endl; 
    return choice ;

}

int returnSize() 
{
    //determine the length of the password 
    int size = 0 ;


    while(size < 4  || size >128)
    {
        type_text("Enter the desire length of password (minimum : 4, maximum : 128)");
        cout <<endl; 
        type_text("weak password length  : 4 to 7 ") ;
        cout <<endl;

        type_text("strong password length : 8 to 128") ;
        cout <<endl; 
        cout << "> " ;
        cin >> size ;


        if(size < 4 || size > 128 ) 
            cout <<"please enter a valid length of password."<<endl;    
    }
    cout <<endl; 
    cout <<"length of Password you choosen : " << size <<endl; 

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
    
    else  
        return allLowercasePassword(size) ;



}

string returnTwoTypePassword ( const int& choice , const int& numberOfType1 , const int& numberOfType2) 
{           
    if (choice == 5) 
        return numberAndLowercasePassword(numberOfType1 , numberOfType2);
    else if ( choice == 6) 
        return numberAndSymbolPassword(numberOfType1 , numberOfType2);
    else if (choice == 7) 
        return numberAndUppercasePassword(numberOfType1 , numberOfType2);
    else if (choice == 8 ) 
        return lowercaseAndSymbolPassword(numberOfType1 , numberOfType2);
    else if ( choice == 9 ) 
        return uppercaseAndSymbolPassword(numberOfType1 , numberOfType2);
    else    
        return lowercaseAndUppercasePassword(numberOfType1 , numberOfType2);
}


string returnThreeTypePassword(const int& choice , const int& numberOfType1 , const int& numberOfType2 , const int&  numberOfType3) 
{ 
    if (choice == 11) 
        return lowercaseUppercaseNumberPassword (numberOfType1 , numberOfType2 , numberOfType3);
    else if ( choice == 12)
        return lowercaseUppercaseSymbolPassword (numberOfType1 , numberOfType2 , numberOfType3);

    else if (choice == 13) 
        return numberLowercaseSymbolPassword(numberOfType1 , numberOfType2 , numberOfType3);
    else   
        return numberUppercaseSymbolPassword(numberOfType1 , numberOfType2 , numberOfType3);

}

string returnFourTypePassword(const int& numberOfType1 , const int& numberOfType2 , const int&  numberOfType3 , const int& numberOfType4) 
{
    return numberLowercaseUppercaseSymbolPassword(numberOfType1, numberOfType2, numberOfType3, numberOfType4);
}

