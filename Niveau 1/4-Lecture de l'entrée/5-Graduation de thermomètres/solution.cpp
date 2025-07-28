#include <iostream>
using namespace std;
int main()
{
   int tempMin;
   int tempMax;
   cin>>tempMin;
   cin>>tempMax;
   int  nb = tempMax - tempMin ;
   for(int i=0;i<nb+1;i++)
   {
      cout<<tempMin<<endl;
      tempMin++;
   }
}