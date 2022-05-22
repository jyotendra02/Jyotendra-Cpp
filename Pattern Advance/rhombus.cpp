#include<iostream>
using namespace std;
int main()
{
    int n;
    
    cout<<"Size of Rhombus: ";
    cin>>n;
    for(int i = 1; i<=5;i++)
    {
        for(int j = 1 ; j <= (2*n)-i;j++)
        {
            if(j > n-i)
            {
                cout<<'#';
            }
            else
            {cout<<" ";}
        }cout<<endl;
    } 
    return 0;
}