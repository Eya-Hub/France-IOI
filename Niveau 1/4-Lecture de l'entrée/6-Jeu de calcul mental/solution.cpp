#include <iostream>
using namespace std;
int main()
{
   int nbNombres;
   cin >> nbNombres;
   int count = 0;
   int res = 66;
   
   for(int i=0;i<nbNombres;i++)
   {
      count++;
      res *= count;
      cout << res <<endl;
   }
}