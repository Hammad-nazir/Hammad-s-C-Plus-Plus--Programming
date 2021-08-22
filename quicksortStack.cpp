#include<iostream>  //Quick Sort Without Recursive.
#include<stack>
#include<vector>
#include<algorithm>
void swap(int* a, int* b)
{
    int t = *a;
    *a = *b;
    *b = t;
}
int partition(int a[],int start,int End)
{
 int pivot=a[End];
 int pIndex=start;
 for (int i = start; i < End; i++)
	{
		if (a[i] <= pivot)
		{
			swap(&a[i], &a[pIndex]);
			pIndex++;
		}
	}
}
void iterativeQuickSort(int arr[],int n)
{
 stack< pair <int,int> >stk;
 int start=0;
 int end=n-1;
 stk.push(make_pair(start,end);  //array copy into stack.
 while(!stk.empty())
 {
  start=stk.top().first,end=stk.top().second;
  stk.pop();
  int pivot=partition(a,start,end);
  	if (pivot - 1 > start)
    {
			stk.push(make_pair(start, pivot - 1));
		  }
   if (pivot + 1 < end) {
			stk.push(make_pair(pivot + 1, end));
		}
 }

}
int main()
{
 int a[]={5,12,9,13,6,4,7,1};
 int n=sizeof(a);
 iterativeQuickSort(a,n);
 cout<<"Sorted Array"<<endl;
 for(int i=0;i<n;i++)
  cout<<a[i]<<"    "
  return 0;
}
