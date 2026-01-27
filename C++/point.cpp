#include <iostream>
#include <cmath>
#include <string>
using namespace std;

struct point{
    int x;
    int y;
    string color;
};

int main()
{
    float d;
    point p1, p2;
    p1.x = 2;
    p1.y = 3;
    p1.color = "red";

    cout << "Enter Information For Second Point" << endl;
    cin >> p2.x;
    cin >> p2.y;
    cin >> p2.color;
    d = sqrt((p2.x-p1.x)*(p2.x-p1.x)+(p2.y-p1.y)*(p2.y-p1.y));
    cout << "The Distance Between The Two Points Is: " << d <<endl;
    return 0;
}