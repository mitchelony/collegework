#include <cmath>
#include <iostream>
using namespace std;

int main() {
    int *q = new int;
    *q = 100;  
    cout << *q << endl;
    
    *q = sqrt(4 * *q + *q * *q);
    cout << *q << endl;
    delete q;
    q = nullptr;
    return 0;
}
