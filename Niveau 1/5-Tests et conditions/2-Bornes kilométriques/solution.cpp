#include <iostream>
using namespace std;
int main()
{
   int borneA; 
   int borneB;
   cin>>borneA; 
   cin>>borneB;
   int diff = borneB - borneA;
   if(diff<0)
   {
      diff= -diff;
   } 
   cout<<diff<<endl;
}