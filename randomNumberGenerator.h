# include <iostream> 
# include <ctime> 

using namespace std;

char randomNumber() 
{
    //ascii code :  48 -> 57   
    return rand() %  10+ 48;
}