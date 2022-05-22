#include<iostream>

using namespace std;

int main()
{
    int number;
    int sum = 0;
    cout<<"Input a number: ";
    cin>>number;
    while(number >= 0)
    {
        sum += number;
        cout<<"Input a number: ";
        cin>>number;
    }

    cout<<"Sum Is : "<<sum;

    return 0;
}