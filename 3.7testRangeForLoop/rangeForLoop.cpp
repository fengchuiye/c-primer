#include<stdio.h>
#include<iostream>
#include<string>
//#include<typeinfo.h>

using namespace std;

int main()
{
    string str="abcdeffsh";
    cout << str << endl;
//    for(auto &ch : str)
    for(char &ch : str)
        ch='X';

    cout << str << endl;

    string s;
    cout << s[0] << endl;

    const string s2 = "Keep out!";

    for(auto &c : s2)
        cout << c << endl;

    return 0;
}
