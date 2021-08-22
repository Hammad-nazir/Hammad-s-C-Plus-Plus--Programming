#include<iostream>
#include<math.h>
using namespace std;
int fround(float x)   //converting Float to int
{
 int a;
 x=x+0.5;
 a=x;
 return(a);
}
void calculate(float table[][4],int n,char mode[][15],int size)
{
 float effort,time,staff;
 int model;
 if(size>=2&&size<=50)
  model=0;
 else if(size>50&&size<=300)
  model=1;
 else if(size>300)
  model=2;
 cout<<"Software/Project Mode is "<<mode[model]<<endl;
 effort=table[model][0]*pow(size,table[model][1]);
 time=table[model][2]*pow(effort,table[model][3]);
 staff=effort/time;
 cout<<"Effort ="<<effort<<"Person-Month"<<endl;
 cout<<"\nDevelopment Time"<<time<<"Months"<<endl;
 cout<<"\nAverage Staff Required="<<fround(staff)<<"Persons"<<endl;
}
int main()
{
 float table[3][4]={2.4,1.05,2.5,0.38,3.0,1.12,0.35,3.6,1.20,2.5,0.32};
 char mode[][15]={"Organic","Semi-detched","Embedded"};
 int size=4;
 calculate(table,3,mode,size);
 return 0;
}
