#include<iostream>            
using namespace std;

bool prime(int n)
{
    for(int i=2;i<n;i++)
    {
        if(n%i == 0)
        {
            return false;
        }       
    }
    return true;
}

void print_prime(int n1, int n2)
{
    for(int i = n1;i<n2;i++)
    {
        if(prime(i))
        {
            cout<<i<<endl;
        }
      
    }
}

int main()
{
    int m,n;
    cout<<"Give N1: ";
    cin>>m;
    cout<<"Give N2: ";
    cin>>n;
    print_prime(m,n);
    
    return 0;
}