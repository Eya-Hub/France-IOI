#include <iostream>
using namespace std;

double convertirGramme(double val){
    return val * 0.002205;

}

double convertirMetre(double val){
    return val / 0.3048;
}

double convertirCelsius(double val){
    return val * 1.8 + 32;
}

int main()
{
    int nb;
    double value;
    char unite;
    cin>>nb;
    for(int i=0;i<nb;i++){
        cin>>value;
        cin>>unite;

        switch (unite){
        case 'm' : {
            double res_p = convertirMetre(value);
            cout<<res_p<<' p'<<endl;
            break;
        }
        case 'g' : {
            double res_l = convertirGramme(value);
            cout<<res_l<<' l'<<endl;
            break;
        }
        case 'c' : {
            double res_f = convertirCelsius(value);
            cout<<res_f<<' f'<<endl;
            break;
        }
        }
    }
}