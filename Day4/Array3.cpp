#include <iostream>
using namespace std;

int main() {
    // ✅ Predefined array of size 5
    int arr[5] = {2, 4, 6, 8, 10};

    // 🧠 You can add logic here without printing anything


    for(int i=0;i<5;i++)
    {
        for(int j=i;j<5;j++)
          cout<<arr[j]<<" ";
          

          cout<<endl;


    }
    return 0;
}
