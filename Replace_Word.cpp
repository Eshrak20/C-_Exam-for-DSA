#include <stdio.h>
#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int x;
    cin >> x;

    for (int i = 0; i < x; i++)
    {
        string s;
        string replace;

        cin >> s;
        cin >> replace;
        int count = 0;

        while (s.find(replace) != -1)
        {
            s.replace(s.find(replace), replace.length(), "#");
            count++;
        }

        cout << s << endl;
    }

    return 0;
}