#include <stdio.h>
#include <iostream>
#include <conio.h>
#define N 5

using namespace std;

char reloadfunc(int n,char arr[])
{
 float sum=0;
 for(int i=0;i<n;i++)
   sum+=arr[i];
 return sum;
}

void show(char a)
{
     cout<<a<<"\n";
}

void showMasiv(int *r){
  for(int i=0; i<N; i++)
 cout<<r[i]<<"\n";
}
void showMasiv(char *r){
  for(int i=0; i<N; i++)
 cout<<r[i]<<"\n";
}

void showMasiv(float *r){
  for(int i=0; i<N; i++)
 cout<<r[i]<<"\n";
}

int reloadfunc(int n,int arr[])
{
 int sum=0;
 for(int i=0;i<n;i++)
   sum+=arr[i];
  return sum;
}

void show(int a)
{
     cout<<a<<"\n";
}

float reloadfunc(int n,float arr[])
{
 float sum=0.0;
 for(int i=0;i<n;i++)
   sum+=arr[i];
 return sum;
}

void show(float a)
{
     cout<<a<<"\n";
}

int main()
{ 
char resch,ch[N]={'!','#','s','g','f'};
 int resint,set[N]={2,3,5,7,9};
 float resfl,mass[]={2.1,3.1,4.1,5.1,6.1};
 
 resch=reloadfunc(N,ch);
 resint=reloadfunc(N,set);
 resfl=reloadfunc(N,mass);
 
// show(resch);
// show(resint);
// show(resfl);
showMasiv(ch);
showMasiv(set);
showMasiv(mass);
// printf("%c  %d  %f\n",resch,resint,resfl);
 puts("Press any key...");
 getch();
return 0;
}
