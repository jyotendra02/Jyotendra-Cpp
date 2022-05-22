#include<iostream>
using namespace std;
int main()
{
    int r , c;
    cout<<"No of Rows: ";
    cin>>r;
    cout<<"No of Columns: ";
    cin>>c;
    for (int i = 0; i<c ; i++)
    {
        for (int j = 0; j<r ; j++)
        {
            cout<<'#';
        }
        cout<<"\n";
        
    }
    return 0;
}