#include <iostream>
using namespace std;

int main()
{
    int largeurSol;
    int largeurSurface;
    cin >> largeurSol;
    cin >> largeurSurface;

    int total = 0;

    for (int i=1, max=(largeurSol - largeurSurface)+1; i <= max; i++)
    {
        total += (largeurSurface * largeurSurface);
        largeurSurface++;
    }

    cout << total << endl;
}
