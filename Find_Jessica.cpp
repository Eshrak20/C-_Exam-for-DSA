#include <stdio.h>
#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    getline(cin, s);
    stringstream ss;
    ss << s;
    string checker;
    int match = 0;
    for (; ss >> checker;)
    {
        if (checker == "Jessica")
        {
            match++;
        }
    }
    if (match > 0)
    {
        cout << "YES" << endl;
    }else{
        cout << "NO" << endl;
    }

    return 0;
}