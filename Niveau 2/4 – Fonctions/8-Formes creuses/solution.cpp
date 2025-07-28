#include <iostream>
using namespace std;
void dessinerLigne(int x){
    for(int i=0;i<x;i++){
        cout<<'X';
    }
    cout<<endl;
}

void dessinerRectangle(int nbL,int nbC){
    if(nbL>1 && nbC >1){
        for(int i=0;i<nbL;i++){
        if(i==0){
            for(int j=0;j<nbC;j++){
                cout<<'#';
            }
        }
        else if(i==nbL-1){
            for(int j=0;j<nbC;j++){
                cout<<'#';
            }
        }
        else{
            cout<<'#';
            for(int q=1;q<nbC-1;q++){
                cout<<' ';
            }
            cout<<'#';
        }
        cout<<endl;
        }
    }
    else if (nbC == 1 && nbL > 1){
        for(int i=0;i<nbL;i++){
            cout<<'#'<<endl;
        }
    }
    else if (nbL == 1 && nbC > 1){
        for(int i=0;i<nbC;i++){
            cout<<'#';
        }
    }
}

void dessinerTriangle(int t){
    for(int i=0;i<t;i++){
        if(i==0){
            cout<<'@';
        }
        else if(i==1){
            cout<<'@';
            cout<<'@';
        }
        else if(i==t-1){
            for(int j=0;j<t;j++){
                cout<<'@';
            }
        }
        else{
            cout<<'@';
            for(int j=1;j<i;j++){
                cout<<' ';
            }
            cout<<'@';
        }
       cout<<endl;
    }
}

int main()
{
    int nbLX,nbLR,nbCR,nbLT;
    cin>>nbLX;
    cin>>nbLR;
    cin>>nbCR;
    cin>>nbLT;
    dessinerLigne(nbLX);
    dessinerRectangle(nbLR,nbCR);
    dessinerTriangle(nbLT);
}