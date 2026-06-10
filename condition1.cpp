#include<iostream>
using namespace std;
int main()
{
    int marks;
    cout<<"Enter marks to see your grades : ";
    cin>>marks;
    if(marks>=90)
    {
        cout<<"A grade";
    }
    else if(marks>80 && marks<90)
    {
        cout<<"B grade";
    }
    else  
    {
        cout<<"C grade";
    } 
return 0;
}