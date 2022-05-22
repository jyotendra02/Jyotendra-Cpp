#include <iostream>

using namespace std;

int main()
{
    float a;
    float b;
    cout<<"a: ";
    cin>>a;
    cout<< "b: ";
    cin>>b;
    char operation;
    cout<<"Operation:";
    cin>> operation;

    if(operation == '+')
    {
        cout<<"Sum is "<<a+b;
    }
    else if(operation == '-')
    {
        cout<<"Subtraction is "<<a-b;
    }
    else if(operation == '/' )
    {
        cout<<"Division is "<<a/b;
    }
    else if(operation == '*' )
    {
        cout<<"Multiplication is "<<a*b;
    }

    else
    {
        cout<<"Invalid Operator";
    }
    return 0;
}
