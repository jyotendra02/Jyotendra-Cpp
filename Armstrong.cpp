#include<iostream>
#include<math.h>
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
    int sum= 0;
    int number=n;  
    while(n>0)
    {     
        int digit= n%10;
        sum+= digit*digit*digit;
        n=n/10;
    }
    
 
    if(sum == number)
    {
        cout<<number<<" Is An Armstrong Number";
    }
    else
    cout<<number<<" Is Not An Armstrong Number";
    return 0;
}