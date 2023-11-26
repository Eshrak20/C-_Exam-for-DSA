#include <stdio.h>
#include <iostream>
#include <bits/stdc++.h>
using namespace std;

class Student
{
public:
    char name[100];
    long long int cls;
    char sec[26];
    long long int marks;
};

int main()
{
    long long int x;
    cin >> x;
    Student *n = new Student[x];

    for (long long int i = 0; i < x; i++)
    {
        cin >> n[i].name >> n[i].cls >> n[i].sec >> n[i].marks;
    }

    for (long long int i = 0; i < abs(x/2); i++)
    {
        swap(n[i].sec, n[x - 1 - i].sec);
    }
    for (long long int i = 0; i < x; i++)
    {
        cout << n[i].name << " " << n[i].cls << " " << n[i].sec << " " << n[i].marks << " " << endl;
    }

    delete[] n;
    return 0;
}
