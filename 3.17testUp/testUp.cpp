#include<stdio.h>
#include<iostream>
#include<string>
#include<vector>
using std::vector;
using namespace std;

int main()
{
    vector<string> vstr;
    string str;
    while(cin >> str)
        vstr.push_back(str);
    for(auto &s : vstr)
        for(auto &c : s)
            c=toupper(c);

   for(auto a : vstr)
      cout << a << endl; 
}
