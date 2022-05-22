#include<iostream>
#include<cstring>
using namespace std;

void upward_pyramid(int n)
{
    for (int i = 0; i<n; i++)
    {
       for(int j = 0; j<=i; j++)
       {
         cout<<'#';
       }
        cout<<endl;      
    }
   
}

void downward_pyramid(int n)
{
    for (int i = n; i>=1; i--)
    {
        for(int j = 1; j<=i; j++)
        {
            cout<<'#';
        }
        cout<<endl;                 
    }      
   
}   
int main()
{
   
int n; 
string dir;
cout<<"Size of Pyramid: ";
cin>>n;
upward_pyramid(n);
downward_pyramid(n); 

return 0;

}