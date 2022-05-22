#include<iostream>

using namespace std;
int main()
{
    int a,b,c;

    a = 2;
    b = 3;
    c = 5;
    
    cout<<"Input a:"<<endl;

    cin>>a;

    cout<<"Input b:"<<endl;

    cin>>b;

    cout<<"Input c:"<<endl;

    cin>>c;


    if (a>b)
    {
        if(a>c)
        {
            cout<<"a is greatest";
        }

        else
        {
            cout<<"c is greatest";
        }
    }

    else if (b>a)
    {
        if (b>c)
        {
            cout<<"b is greatest";
        }
        else 
        {
            cout<<"c is greatest";
        }
    }
   
    return 0;
}