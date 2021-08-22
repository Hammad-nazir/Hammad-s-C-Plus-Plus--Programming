#include<iostream>
using namespace std;
int binary(int array[],int x,int low,int high)
{
  while(low<=high)
  {
   int mid=low+(high-low)/2;
   if(array[mid]==x)
    return mid;
   if(array[mid]<x)
    low=mid+1;
   else
    high=mid-1;
  }
  return -1;
}
int main()
{
 int array[]={3,4,6,7,1,8};
 int x=4;
 int n=sizeof(array)/sizeof(array[0]);
 int result=binary(array,x,0,n-1);
 if(result==-1)
 {
  cout<<"Not Found Which You Want To Search"<<endl;
 }
 else
 {
  cout<<"Your Data Founf At,"<<result<<endl;
 }
 return 0;
}
