#include <iostream>
#include <list>
using namespace std;

int main()
{
    list<float> L;
    L.push_back(2.2);
    L.push_front(1.1);
    L.insert(++L.begin(), 0);
    L.push_back(3.2);
    L.push_back(0);

    list<float>::iterator i;

    for (i = L.begin(); i != L.end(); ++ i)
    {
        cout << *i << " ";
    }
    cout << endl;
    return 0;
};