#include <iostream>

using namespace std;

int main()
{
    int size;

   //Prompt For User To Input Size Of Pyramid
   cout<<"Size of Pyramid: ";
   cin>>size;
   int r = size;
   for (int i = 0; i<size; i++)
   {
       for(int j = 0; j<r; j++)
       {
           cout<<'#';
       }

       cout<<"\n";
       r--;

   }
    return 0;
}

