#include <iostream>
using namespace std;
int main()
{
    int nbTemp, tempMax, tempMin;
    cin>>nbTemp; 
    cin>>tempMin;
    cin>>tempMax;
    
    int temp;
    cin>>temp;
    
    if(nbTemp>0){
        if(temp<tempMin || temp>tempMax) {
            cout<<"Alerte !!"<<endl;
        }
        else{
            cout<<"Rien à signaler"<<endl;
        }
    }
    
    int count = 0;
    while(temp >= tempMin && temp<=tempMax && count<nbTemp-1) {
        cin>>temp;
        count++;
        if(temp >= tempMin && temp<=tempMax) {
            cout<<"Rien à signaler"<<endl;
        }
        else{
            cout<<"Alerte !!"<<endl;
        }
    }
}