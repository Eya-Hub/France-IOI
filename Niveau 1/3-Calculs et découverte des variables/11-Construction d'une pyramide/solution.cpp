#include <iostream>
using namespace std;

int main()
{
   int nbCubes = 0 ;
   int index = 17 ;
   
   for(int i=0;i<9;i++)
   {
      nbCubes = nbCubes + (index * index * index) ;
      index = index - 2;
   } 
   
   cout<<nbCubes<<endl;
}