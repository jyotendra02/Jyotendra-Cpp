#include<iostream>
using namespace std;
int reverse(int number)
{
    int reversed=0;
    while(number>0)
    {
        int lastdigit = number%10;
        reversed = reversed*10 + lastdigit;
        number = number/10;
    }
    return reversed;
}

int main()
{
    int n;
    cout<<"Giver An Integer: ";
    cin>>n;
    cout<<reverse(n);
    return 0;
}