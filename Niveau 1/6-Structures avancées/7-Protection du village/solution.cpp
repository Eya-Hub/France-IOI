#include <iostream>
using namespace std;

int main()
{
    int nbMaisons;
    cin>>nbMaisons;
    
    int maxX;
    int minX;
    int maxY;
    int minY;
            
    for(int i=0;i<nbMaisons;i++) {
        int x;
        int y;
        cin>>x;
        cin>>y;

        if(i == 0){
            maxX = x;
            minX = x;
            maxY = y;
            minY = y;
        }
        
        if(x > maxX) {
            maxX = x;
        }
        
        if(x < minX) {
            minX = x;
        }
        
        if(y > maxY) {
            maxY = y;
        }
        
        if(y < minY) {
            minY = y;
        }
    }
    
    int largeur = maxX - minX;
    int longueur = maxY - minY;
    
    int perimetre =  (largeur + longueur) * 2;
    
    cout<<perimetre;
    
}