#include <iostream>
using namespace std;

int main() {
    // ✅ Predefined array of size 5
    int arr[5] = {10, 20, 30, 40, 50};

    // 🔁 Print all elements
    for(int i=0;i<5;i++)
    {
        for(int j=0;j<5;j++)
        {
            cout<<arr[j];
            
        }
        cout<<endl;
    }

    cout << endl;
    return 0;
}
