#include <iostream>
using namespace std;

int main() {
    // ✅ Predefined array of size 5
    int arr[5] = {5, 10, 15, 20, 25};

    // 🧠 Logic can go here (no output required)

    for(int i=0;i<5;i++)
    {
        for(int j=0;j<5-i;j++)
        {
             cout<<arr[j]<<" ";
        }
        cout<<endl;
    }

    return 0;
}
