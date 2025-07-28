#include <iostream>
#include <cmath>
using namespace std;

double distance(double x1,double y1,double x2,double y2){
    double s1 = x2 - x1;
    double s2 = y2 - y1;
    double p1 = pow(s1,2);
    double p2 = pow(s2,2);
    double sq = sqrt(p1+p2);
    return sq;
}


int main()
{
    double x1,y1,x2,y2;
    cin>>x1;
    cin>>y1;
    cin>>x2;
    cin>>y2;
    double res = distance(x1,y1,x2,y2);
    cout<<res<<endl;
}