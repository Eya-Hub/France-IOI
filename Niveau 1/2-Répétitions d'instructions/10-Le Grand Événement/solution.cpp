#include <iostream>
#include "robot.h"
using namespace std;

int main()
{
   for(int i=0;i<9;i++)
   {
      haut();
   }
   
   for(int i=0;i<4;i++)
   {
      droite();
      
      for(int j=0;j<8;j++)
      {
         bas();
      }
      
      droite();
      
      for(int j=0;j<8;j++)
      {
         haut();
      }
   }
   
   droite();
   
   for(int i=0;i<9;i++)
   {
      bas();
   }
   
   for(int i=0;i<9;i++)
   {
      gauche();
   }
   
}