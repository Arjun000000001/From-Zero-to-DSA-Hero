#include <iostream>
#include<limits.h>
using namespace std;

int main() {
    // Declare and initialize an array of size 10
    int arr[10] = {10, 20, 30, 40, 50, 60, 70, 80, 90, 100};

    // Print all elements
    int max=INT_MIN;
    cout << "Array elements are:" << endl;
    for(int i = 0; i < 10; i++) {
        if(arr[i]>max)
        {
            max=arr[i];
        }
    }
    cout<<max;

    return 0;
}
