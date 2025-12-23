#include <iostream>
using namespace std;


// (a)
int sum(int m, int n)
{   
    int total=0;
    for (int i=m; i<=n; i++){
        total += i;
}
    return total;
}

// (b)
void swap(int& x, int& y)
{
    int temp=x;
    x=y;
    y=temp;
}

int main()
{
    int a, b,c ;
    
    // (c)
    cout << "Enter two numbers=> ";
    cin >> a >> b;

    // (d)
    if (a>b)
    swap(a,b);

    // (e)
    c = sum(a,b);
    
    // (f)
    cout << "The sum is " << c << endl;

    
    system("pause");
    return 0;
}