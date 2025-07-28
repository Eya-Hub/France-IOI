#include <iostream>
using namespace std;
int main()
{
    int nbJetons;
    cin>>nbJetons;
    int x,y;
    while(nbJetons--) {
        cin>>x;
        cin>>y;
        
        if(x>=0 && x<=90 && y>=0 && y<=70){
            if(((x>=15 && x<=45)||(x>=60 && x<=85)) && y>=60 && y<=70){
                cout<<"Dans une zone rouge"<<endl;
            }
            else if(x>=10 && x<=85 && y>=10 && y<=55) {
                if(!(x>=25 && x<=50 && y>=20 && y<=45)) {
                    cout<<"Dans une zone bleue"<<endl;
                }
                else{
                  cout<<"Dans une zone jaune"<<endl;  
                }
            }
            else{
                cout<<"Dans une zone jaune"<<endl;
            }
        }
        else{
            cout<<"En dehors de la feuille"<<endl;
        }
    }
}