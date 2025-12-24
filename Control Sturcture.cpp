#include <iostream>
using namespace std;

int main () {
    bool b = false; // b initially is false
    cout << boolalpha;
    cout << b << endl;
    int number = 0;
    b = -10;        // Now, b is true
    cout << b << endl;
    b = number;     // Here, b is false again
    cout << b << endl;

    cout << "----------" << endl;

    // bool b
    int p;
    int q = 5;

    b = q;
    p = b;
    cout << "The value of p is " << p << endl;

    cout << "----------" << endl;

    int a = 10;

    cout << a << endl;

    cout << (a==1) << endl;

    cout << (a>1) << endl;

    cout << (a=5) << endl;

    a = (a != 5);
    cout << a << endl;

    cout << "----------" << endl;

    int x = 0;

    if ((0<x) && (x<10)) //syntax error
        cout << x << endl;

    cout << "----------" << endl;
    
    x = 1;
    if (2 < x < 9)
        cout << "First" << x << endl;

    if ((2 < x) && (x < 9))
        cout << "Second" << x << endl;

    cout << "----------" << endl;

    int n = -5;

    if (n)
         cout << "Yes" << endl;
    else
         cout << "No" << endl;

    cout << "----------" << endl;

    int z = 0;
    
    if (z=1)
        cout << "Yes" << endl;
    else
        cout << "No" << endl;

    cout << "----------" << endl;

    x = 1;
    if (x<3)
        cout <<"Yes" << endl;
    else
        cout <<"No" << endl;

    (x<3) ? cout << "Yes" << endl : cout << "No" << endl;

    cout << (x<3 ? "Yes" : "No") << endl;

    //If x=1 output Yes, if x=2 output No, else output other

    switch (x)
    {
        case 1 :
        cout << "Yes" << endl;
        break;

        case 2:
        cout << "No" << endl;
        break;

        default :
        cout << "Other" << endl;
        break;

    }

    cout << "----------" << endl;

    
#define DEFINE 1
const int const2=2;
int var3 = 3;
int value;

switch (value)
{   case 0 : 
    cout << "Four";
    break;

    case DEFINE : 
    cout << "One";
    break;

    case const2 : 
    cout << "Two";
    break;

    // case var3: 
    //cout << "Three";
    //break;

}

    cout << "------------" << endl;

    for (n = 10; n > 0; n = n - 1)
    {
    cout << n << " " << endl;
    }

    cout << "------------" << endl;

    for (int i = 10; i > 0; i = i - 1)
    {
        if (i < 8) 
            break;
        cout << i << " " << endl;
    }

    cout << "------------" << endl;
    \
    for (n = 10; n > 0; n = n - 1)
    {
    if (n%2==1) continue;
        cout << n << " " << endl;
    }

return 0;
}