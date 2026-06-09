//  Datatype tells that which type of the data is going to store in the memory 
#include <iostream>
using namespace std;
int main()
{
    int a = 2;   // 4 bytes
    char b = 'A';  // 1 byte
    float s = 2.53; // 4 bytes
    double j = 3.53575; // 8 bytes
    bool f = false;  // 1 bytes 
    cout << "a = " << a <<"     Size of int "<< sizeof(a);
    cout << "\n b= " << b <<"   Size of  char "<< sizeof(b);
    cout << "\n s= " << s <<"   Size of  float "<< sizeof(s);
    cout << "\n j= " << j <<"   Size of  double "<< sizeof(j);
    cout << "\n b= " << b <<"   Size of  bool "<< sizeof(f);
    return 0;
}