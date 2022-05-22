#include <iostream>

using namespace std;

int main()
{
    float principle,rate,time;
    cout<<"Principle:";
    cin>>principle;
    cout<<"Rate:";
    cin>>rate;
    cout<<"Time:";
    cin>>time;


    float si = (principle*rate*time)/100;
    cout<<"Simple Interest On Your Principle Amount Is: "<<si;
    return 0;
}
