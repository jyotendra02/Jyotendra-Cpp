#include<iostream>
using namespace std;
int main()
{
    int A,B,C ;
    cout<<"Input Side 1: ";
    cin>>A;
    cout<<"Input Side 2: ";
    cin>>B;
    cout<<"Input Side 3: ";
    cin>>C;

    if ( A == B || B == C)
    {
        cout<<"Triangle is Isosceles.";
    }
    else if ( A == B & B == C & A == C) // 
    {
        cout<<"Triangle is Equillateral.";
    }
    else  
    {
        cout<<"Triangle is Scalen.";
    }
    return 0;
}