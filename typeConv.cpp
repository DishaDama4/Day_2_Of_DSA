// Type Casting :- 
//              i.Implicit - Converting small size datatype into large size datatype  i.e. char into int 
//              ii.Explicit - Converting large size datatype into small size dataatype  i.e. float into int 
#include<iostream>
using namespace std;
int main()
{
    // Implicit conversion 
    char a = 'A';
    int x = a;
    cout<< " Value of a is "<<x;

    // Explicit conversion 
    float pi=3.14;
    int PI=(int)pi;
    cout<< " \n Value of PI is "<<PI;
    return 0;
}