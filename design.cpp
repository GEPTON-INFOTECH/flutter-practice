#include <iostream>

using namespace std;

int main()
{
   int a;
   cout<<"Enter the No. of Rows"<<endl;
   cin>>a;
   for ( int i=1; i<=a; i++)
   {
       int c;
       c= a-i;
       for (int j=1; j<=c; j++)
       {
         cout<<" ";
       }
      for (int k=0; k<i; k++)
          {
              cout<<"#";
          }
        cout<<endl;
   }

}
