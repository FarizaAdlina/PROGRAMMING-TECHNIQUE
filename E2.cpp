#include <iostream>
using namespace std;

int main() {
    int A=4, B=3, C=2, D=1, F=0;
    int a, b, c, d, f;
    double GPA;
    string grade;

    cout << "Enter number A: " ;
    cin >> a;
    cout << "Enter number B: " ;
    cin >> b;
    cout << "Enter number C: ";
    cin >> c;
    cout << "Enter number D: ";
    cin >> d;
    cout << "Enter number F: ";
    cin >> f;

    GPA=((A*a)+(B*b)+(C*c)+(D*d)+(F*f))/(a+b+c+d+f);
    cout << "Your grade is: " << GPA <<endl;

    if (GPA > 3.50)
    {
        grade="High Honours";
    } else if (GPA>=3.0 && GPA<=3.50) {
        grade="Honours";
    } else if (GPA>2.0 && GPA<=2.99) {
        grade="Satisfactory";
    } else {
        grade="Probation";
    }

    cout << "Your academic standing is " << grade ;

    return 0;


}