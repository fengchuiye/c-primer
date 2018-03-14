#include<stdio.h>
#include<iostream>
#include<vector>
using namespace std;
using std::vector;


int main()
{
    vector<int> v1;
    int a1;
    while(cin >> a1)
        v1.push_back(a1);

    for(auto i : v1)
        cout << i << endl;
    return 0;
}
