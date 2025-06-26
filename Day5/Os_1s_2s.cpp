#include <iostream>
using namespace std;

int main() {
    // ✅ Predefined array with 0s, 1s, and 2s
    int arr[] = {0, 1, 2, 0, 1, 2, 1, 0, 2};
    

    // 🧠 Logic goes here (sort, count, etc.)


    int Zero_Count=0;
    int One_Count=0;
    int Two_Count=0;
    for(int i=0;i<9;i++)
    {
        if(arr[i]==0)Zero_Count++;
        if(arr[i]==1)One_Count++;
        if(arr[i]==2)Two_Count++;
    }
    for(int i=0;i<Zero_Count;i++)
    {
        arr[i]=0;
    }
     for(int i=Zero_Count;i<Zero_Count+One_Count;i++)
    {
        arr[i]=1;
    }
     for(int i=Zero_Count+One_Count;i<9;i++)
     {
        arr[i]=2;
     }
     for(int i=0;i<9;i++)
     {
        cout<<arr[i];
     }


    return 0;
}
