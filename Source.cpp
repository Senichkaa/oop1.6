//Source.cpp
#include <iostream>
#include "Triangle.h"

using namespace std;

int main()
{
    Triangle t;
    t.Init(3, 4, 5);
    t.Read();
    t.Display();
    cout << "Total area: " << t.GetArea() << endl;
    cout << "Angle alpha:" << t.GetAlpha() << endl;
    cout << "Angle beta:" << t.GetBeta() << endl;
    cout << "Angle gamma:" << t.GetGamma() << endl;
    return 0;
}