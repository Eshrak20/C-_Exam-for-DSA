#include <stdio.h>
#include <iostream>
#include <bits/stdc++.h>
using namespace std;
class Student
{
public:
    string name;
    int cls;
    char sec[26];
    int id;
    int marks;
    int marks2;
};
bool compare(Student a, Student b)
{
    if ((a.marks + a.marks2) == (b.marks + b.marks2))
    {
        return (a.id) < (b.id);
    }
    else
    {
        return (a.marks + a.marks2) > (b.marks + b.marks2);
    }
};
int main()
{
    int x;
    cin >> x;
    Student *n = new Student[x];

    for (int i = 0; i < x; i++)
    {
        cin >> n[i].name >> n[i].cls >> n[i].sec >> n[i].id >> n[i].marks >> n[i].marks2;
    }
    sort(n, n + x, compare);
    for (int i = 0; i < x; i++)
    {
        cout << n[i].name << " " << n[i].cls << " " << n[i].sec << " " << n[i].id << " " << n[i].marks << " " << n[i].marks2 << endl;
    }

    return 0;
}