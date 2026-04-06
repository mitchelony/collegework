#include <iostream>
#include <list>
using namespace std;

int main()
{
    list<int> L;
    L.push_back(2);
    L.push_front(1);
    L.insert(++L.begin(), 0);
    L.push_back(3);
    L.push_back(0);

    list<int>::iterator i;

    for (i = L.begin(); i != L.end(); ++ i)
    {
        cout << *i << " ";
    }
    cout << endl;

    L.sort();
    for (i = L.begin(); i != L.end(); ++ i)
    {
        cout << *i << " ";
    }
    cout << endl;

    return 0;
};
