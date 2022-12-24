
# include <iostream> 
#include<chrono>
#include<thread>
# include "function/outputFunction.h"
# include "function/password.h"

using namespace std;




int main() 
{
    srand(time(0)) ; 

    type_text("welcome to random password generator");
    cout <<endl; 
    cout <<endl; 

    int size = returnSize()  ;
    int choice = returnChoice() ;

    cout <<endl ;

    //password consist of one type 
    if ( choice  >= 1 && choice <= 4) 
    {
        cout <<endl;  
        cout <<"password generated : " << returnSameTypePassword(choice ,size)  << endl; 
    }

    //password consist of two type 
    else if ( choice >= 5 && choice <= 10) 
    {
        int numberOfFirstType = 0 ; 
        int numberOfSecondType = 0 ;
        int total = 0 ; 

        if (choice  == 5) 
        {
            while ( total < 4 || total > 128)
            {
                type_text("please enter the number of digit that you prefer in your password : ") ;
                cin>> numberOfFirstType;

                type_text("please enter the number of lowercase letter that you prefer in your password : ") ;
                cin >> numberOfSecondType ; 

                total = numberOfFirstType + numberOfSecondType ; 
                if (total != size)
                {
                    cout <<"total amount that you enter does not match with the length of the password ,  please reenter..." <<endl;
                    total = 0 ; 
                    cout <<endl; 
                }
            }
               
        }
        else if  (choice == 6) 
        {
            while (total < 4 || total > 128) 
            {
               type_text("please enter the number of digit that you prefer in your password: " ) ;
                cin >> numberOfFirstType ; 

                type_text("please enter the number of Symbol that you prefer in your password:  ") ;
                cin >> numberOfSecondType ; 

                total = numberOfFirstType + numberOfSecondType ; 
                if (total != size)
                {
                    cout <<"total amount that you enter does not match with the length of the password ,  please reenter..." <<endl;
                    total = 0 ;
                    cout <<endl;  
                }
            }
        }

        else if (choice == 7) 
        {    
            while(total < 4  || total > 128)
            {
                type_text("please enter the number of digit that you prefer in your password: ") ;
                cin >> numberOfFirstType ;
                type_text("please enter the number of Uppercase letter that you prefer in your password: ") ; 
                cin>> numberOfSecondType ;
                total = numberOfFirstType + numberOfSecondType ; 
                if (total != size)
                {
                    cout <<"the total amount that you enter does not match with the length of the password ,  please reenter..." <<endl;
                    total  = 0 ; 
                    cout <<endl; 
                }
                        
            }
        }

        else if (choice == 8) 
        {    while(total < 4  || total > 128)
            {
                type_text("please enter the number of lowercase letter  that you prefer in your password: ") ;
                cin >> numberOfFirstType ;
                type_text("please enter the number of symbol that you prefer in your password: ");
                cin>> numberOfSecondType ;
                total = numberOfFirstType + numberOfSecondType ; 
                if (total != size)
                {
                    cout <<"total amount that you enter does not match with the length of the password ,  please reenter..." <<endl;
                    total = 0 ; 
                    cout <<endl; 
                }
            }
        }

        else if (choice == 9) 
        {    while(total < 4  || total > 128)
            {
                type_text("please enter the number of Uppercase letter  that you prefer in your password: ") ;
                cin >> numberOfFirstType ;
                type_text("please enter the number of symbol that you prefer in your password: ") ; 
                cin>> numberOfSecondType ;
                total = numberOfFirstType + numberOfSecondType ; 
                if (total != size)
                {
                    cout <<"total amount that you enter does not match with the length of the password ,  please reenter..." <<endl;
                    total = 0 ; 
                    cout <<endl; 
                }
            }
        }

        else if (choice == 10) 
        {    while(total < 4  || total > 128)
            {
                type_text("please enter the number of lowercase letter  that you prefer in your password: " ); 
                cin >> numberOfFirstType ;
                type_text("please enter the number of uppercase letter  that you prefer in your password: ") ; 
                cin>> numberOfSecondType ;
                total = numberOfFirstType + numberOfSecondType ; 
                if (total != size)
                {
                    cout <<"total amount that you enter does not match with the length of the password ,  please reenter..." <<endl;
                    total = 0 ; 
                    cout <<endl; 
                }
            }
        }

        cout <<endl; 
        cout << "password generated :  " << returnTwoTypePassword(choice, numberOfFirstType , numberOfSecondType)  <<endl; 
        
    }

    //password consist of three type 
    else if (choice >=  11 && choice <= 14) 
    {
        int numberOfType1 = 0 ;
        int numberOfType2 = 0 ;
        int numberOfType3 = 0 ; 
        int total = 0 ;
        if (choice == 11) 
        {
            while (total < 4 || total > 128)
            {
                type_text("Please enter the number of digit that you prefer in your password: " ) ;
                cin >> numberOfType1; 
                type_text("Please enter the number of Lowercase letter that you prefer in your password: ");
                cin >> numberOfType2;
                type_text("Please enter the number of Uppercase letter that you prefer in your password : ") ;
                cin >> numberOfType3;  
                total = numberOfType1 + numberOfType2  + numberOfType3;
                if (total != size) 
                {
                    cout <<"total amount that you enter does not match with the length of the password ,  please reenter..." <<endl;
                    total = 0 ;   
                    cout <<endl; 
                }
            }

        }

        else if (choice == 12) 
        { 
             while (total < 4 || total > 128)
            {
                type_text("Please enter the number of Lowercase letter that you prefer in your password: ") ; 
                cin >> numberOfType1;
                type_text("Please enter the number of Uppercase letter that you prefer in your password : ") ;
                cin >> numberOfType2;  
                type_text("Please enter the number of Symbol that you prefer in your password : ") ;
                cin >> numberOfType3;
                total = numberOfType1 + numberOfType2 + numberOfType3;
                if (total != size) 
                {
                    cout <<"total amount that you enter does not match with the length of the password ,  please reenter..." <<endl;
                    total = 0 ;
                    cout <<endl;      
                }
            }
        }

        else if (choice == 13) 
        {  
            while (total < 4 || total > 128)
            {
                type_text("Please enter the number of digit that you prefer in your password: ");
                cin >> numberOfType1; 
                type_text("Please enter the number of Lowercase letter that you prefer in your password : ") ;
                cin >> numberOfType2;  
                type_text("Please enter the number of Symbol that you prefer in your password : ") ; 
                cin >> numberOfType3;
                total = numberOfType1 + numberOfType2 + numberOfType3;
                if (total != size) 
                {
                    cout <<"total amount that you enter does not match with the length of the password ,  please reenter..." <<endl;
                    total = 0 ;  
                    cout <<endl;     
                }
            }
        }
        else 
        {  
            while (total < 4 || total > 128)
            {
                type_text("Please enter the number of digit that you prefer in your password: " ) ; 
                cin >> numberOfType1; 
                type_text("Please enter the number of Uppercase letter that you prefer in your password : ")  ;
                cin >> numberOfType2;  
                type_text("Please enter the number of Symbol that you prefer in your password : ");
                cin >> numberOfType3;
                total = numberOfType1 + numberOfType2 + numberOfType3;
                if (total != size) 
                {
                    cout <<"total amount that you enter does not match with the length of the password ,  please reenter..." <<endl;
                    total = 0 ; 
                    cout <<endl;      
                }
            }
        }

        cout <<endl; 
        cout << "password generated : " << returnThreeTypePassword(choice, numberOfType1, numberOfType2 , numberOfType3)  <<endl; 

    }

    //password consist of four type 
    else
    {
        int numberOfType1 = 0 ;
        int numberOfType2 = 0 ;
        int numberOfType3 = 0 ; 
        int numberOfType4 = 0 ; 
        int total = 0 ; 
        while ( total < 4 || total > 128)
        {
            type_text("Please enter the number of digit that you prefer in your password : " ) ; 
            cin >> numberOfType1 ;
            type_text("Please enter the number of Lowercase letter that you prefer in your password : ") ;
            cin >> numberOfType2 ;
            type_text("Please enter the number of Uppercase letter that you prefer in your password : ") ; 
            cin >> numberOfType3 ; 
            type_text("Please enter the number of Symbol that you prefer in your password : ")  ; 
            cin >> numberOfType4 ;
            total  = numberOfType1 + numberOfType2 + numberOfType3 + numberOfType4 ; 
            if (total != size) 
            {
                cout <<"total amount that you enter does not match with the length of the password ,  please reenter..." <<endl;
                total = 0 ;
                cout <<endl;               
            } 
        }
        cout <<endl; 
        cout << "password generated  : " << returnFourTypePassword(numberOfType1 , numberOfType2 , numberOfType3 , numberOfType4)  <<endl; 
    }
    cout <<endl; 
    cout <<"thank you for using this program" <<endl;   
    cout << "exiting program.... " <<endl; 
    type_text(".........................................................................................................................................................................") ;
    cout <<endl;
    cout << "done! , see you next time"<<endl; 


        return 0 ;
}