#include<iostream>
#include <climits>
using namespace std;


int main()
{   int arr[5]={2,3,1,0,8};
    int ans=INT_MIN;
    for(int i=0;i<5;i++)
    {
        if(arr[i]>ans)
        {
            ans=arr[i];
        }
    }

    cout<<"max element in a given array is:"<<ans;

}