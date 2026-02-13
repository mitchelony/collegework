# include <iostream> //Import I/O Package
using namespace std; //

int arr[5]; //create array with len=5

int main() { //init main function
	arr[0] = 2; //assign index 0 = 2
    arr[1] = 3; //assign index 1 = 3
    arr[2] = 0; //assign index 2 = 0
    arr[3] = -1; //assign index 3 = -1
    arr[4] = 5; //assign index 4 = 5

        for (int i = 0; i < 5; i++) //init for loop to run 5 times
    {
        cout << arr[i] << " ";
    }

    int x = 10;
    int arr[6];
    arr[0] = 2;
    arr[1] = 3;
    arr[2] = 0;
    arr[3] = x;
    arr[4] = -1;
    arr[5] = 5;

            for (int i = 0; i < 6; i++)
    {
        cout << arr[i] << " ";
    }
}
