#include <iostream>
using namespace std;
 
int main()
{
    // Arithmatic
    int a = 10; int b = 25, c;
    cout<< b % a;

   // Unary 
    a = 10, b = 12, c = 15;
    int d = a++ + ++a + c-- - --b - ++a;
    // a

    // Relational
    cout<<(a == b)<<endl;
    cout<< (a < b)<<endl;
    cout<< (a > b)<<endl;

    // Logical
    cout<< (!a)<<endl;
    cout<< (a && 0)<<endl;
    cout<< (a || 0)<<endl;

    // Assignment
    cout<<a<<endl;
    a += 15; // => a = a + 15
    a /= 7; // => a = a / 7
    cout<<a<<endl;

    a = a > 10 ? 5: 15;
    cout<<a;

    return 0;
}