// find a number of element in array
#include<iostream>
using namespace std;
int arr[5]={4,6,1,7,8};

int main()
{
   int num=sizeof(arr)/sizeof(arr[0]);
   cout<<"number of element present in array:"<<num;
   return 0;
}