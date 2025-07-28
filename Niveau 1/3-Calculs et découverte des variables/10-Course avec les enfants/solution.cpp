#include <iostream>
#include "robot.h"
using namespace std;

int main()
{
    int index = 0;

    for (int i = 1; i <= 10; i++)
    {
        index = index + 1;

        for (int j = 1; j <= index; j++)
        {
            droite();
        }

        ramasser();

        for (int j = 1; j <= index; j++)
        {
            gauche();
        }

        deposer();
    }
}
