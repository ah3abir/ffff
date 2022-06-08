//#include<iostream>
#include <bits/stdc++.h>
using namespace std;
int add( int a , int b)
{
    int c = a+b;
    return c;
}
void ppdt(int a)
{
    int c = a+a+a;
    cout<<c<<endl;
}
int main()
{
    int x,y;
    x=2;
    y=40;
    cout<<add(2,3)<<endl;
    cout<<add(x,y)<<endl;
    ppdt(y);
}
