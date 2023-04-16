#include <string>
#include <iostream>
using namespace std;


int main() {
    string s1 = "Hello";
    cout<<s1<<endl;
    cout<<s1[2]<<endl;
    
    string s2 = "How are you";
    string s = s1 + " " + s2;
    cout<< s1 << endl << s << endl;
    
    cout<< s.length()<<endl;
    cout<< s.size()<<endl;
    
    s[7] = 'a';
    cout << s<<endl;

    string s3 = "How are you \"Naman\"";
    cout<<s3<<endl;

    cout<< "Hi \n what the hell";
    cout<< "Hi \t what the hell";

    return 0;
}