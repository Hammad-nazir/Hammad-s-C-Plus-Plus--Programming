#include<iostream>
using namespace std;
int main()
{
 int A[10],B[10],C[10];
 int r1,c1,r2,c2,i,j,k;
 cout<<"Enter Rows And Columns for First Matrix"<<endl;
 cin>>r1>>c1;
 cout<<"Enter Rows And Columns for Second Matrix"<<endl;
 cin>>r2>>c2;

 while(c1!=r2)
 {
  cout<<"Error!Coulmn of First matrix not equal to row of second"<<endl;
  cout<<"Enter Rows And Columns for First Matrix"<<endl;
 cin>>r1>>c1;
 cout<<"Enter Rows And Columns for Second Matrix"<<endl;
 cin>>r2>>c2;
 }
 cout<<endl<<"Enter the elements of matrix 1:"<<endl;
 for(i=0;i<r2;++i)
   for(j=0;j<c2;++j)
 {
  cout<<"Enter Element a" <<i+1<<j+1<<":";
  cin>>A[i][j];
 }
 cout<<endl<<"Enter the elements of matrix 2:"<<endl;
 for(i=0;i<r2;++i)
   for(j=0;j<c2;++j)
 {
  cout<<"Enter Element b"<<i+1<<j+1<<":";
  cin>>B[i][j];
 }
 for(i=0;i<r1;++i)
   for(j=0;j<c2;++j)
 {
  C[i][j]=0;
 }
 for(i=0;i<r2;++i)
   for(j=0;j<c2;++j)
    for(k=0;k<c1;++k)
 {
 C[i][j]=C[i][j]+A[i][k]*B[k][j];
 }
 cout<<"Output Matrix "<<endl;
 for(i=0;i<r1;++i)
   for(j=0;j<c2;++j)
 {
  cout<<"  "<<C[i][j];
  if(j==c2-1)
   cout<<endl;
 }
 return 0;
}
