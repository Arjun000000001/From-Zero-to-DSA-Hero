#include<iostream>
using namespace std;




int findfactorial(int num)
{
     int start=1;
     for(int i=1;i<=num;i++)
     {
        start=start*i;
     }
     return start;
}


int main()
{
    int value=5;
    int ans=findfactorial(value);
    cout<<ans;
}