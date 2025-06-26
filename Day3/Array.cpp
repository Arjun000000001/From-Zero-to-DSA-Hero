#include <iostream>
using namespace std;

int main() {
    // Your code starts here

     int arr[5] = {2, 3, 7, 11, 4};

     int element=arr[4];
     for(int i=4;i>0;i--)
     {
        arr[i]=arr[i-1];
     }
     arr[0]=element;
     for(int i=0;i<5;i++)
     {
        cout<<arr[i]<<endl;
     }

    return 0;
}
