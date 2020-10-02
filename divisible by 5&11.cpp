#include <iostream>

using namespace std;

int main()
{
    /*int a;
    cout<<"Enter a number to see either it is divisible by 5 and 11 or not.\n";
    cin>>a;
    if (a%5)
    {
        (a%11)? cout<<"The number is neither divisible by 5 nor 11.\n" : cout<<"The Number is Only divisible by 11.\n";
    }
    else
    {
        (a%11)? cout<<"The number is only divisible by 5.\n" : cout<<"The number is divisible by both 5 nor 11.\n";
    }*/
   int a,b,c;
   cout<<"enter two number \n";
   cin>>a>>b;
   cout<<"1. for addition\n 2. for substraction\n 3 for multiolication\n 4 for division\n";
   cin>>c;
   switch(c)
   {
   case 1:
        cout<<"add is "<<a+b;
        break;
   case 2:
        cout<<"substraction is "<<a-b;
         break;
   case 3:
        cout<<"multiplaction is "<<a*b;
        break;
   case 4:
        cout<<"division is "<<a/b;
        break;
   default:
        cout<<"invalid input";
   }
}
