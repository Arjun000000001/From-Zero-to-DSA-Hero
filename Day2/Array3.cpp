#include <iostream>
#include<limits.h>
using namespace std;

int main() {
    // Declare and initialize an array of size 10
    int arr[10] = {10, 20, 30, 40, 50, 60, 70, 80, 90, 100};

    for(int i=0;i<10;i++)
    {
        if(arr[i]&1)
        cout<<arr[i]<<endl;
    }

    return 0;
}


// in the negative case we get -1 as remainder