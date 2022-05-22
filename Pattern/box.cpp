#include<iostream>
using namespace std;

int main()
{
    int row, column;
    cout<<"No Of Rows: ";
    cin>>row;
    cout<<"No Of Rows: ";
    cin>>column;
    for(int i = 0; i < row; i++)
    {
       for(int j = 0; j < column; j++)
        {
            if(j == 0 || j == column-1 || i==0 || i==row-1 )
            {
                cout<<"#";
            }
            else
            {
                cout<<" ";
            }
        }
        cout<<"\n";       
    }


    return 0;
}