#include <stdio.h>
#include <conio.h>

template <class P> void swap(P *,P *); //* - указатель, место P можно писать int, char ...
int main()
{

string c1="stroka1",c2="stroka2";
// int i1=10,i2=20;
// float f1=1.3,f2=2.5;
 puts("before swap()");
 printf("c1=%c  c2=%c\n",c1,c2);
// printf("i1=%d  i2=%d\n",i1,i2);
// printf("f1=%f  f2 = %f\n",f1,f2);
 swap(&c1,&c2); //swap(&i1,&i2); swap(&f1,&f2);
 puts("after swap()");
 printf("c1=%c  c2=%c\n",c1,c2);
// printf("i1=%d  i2=%d\n",i1,i2);
// printf("f1=%f  f2=%f\n",f1,f2);
 puts("Press any key...");
 getch();
 return 0;
}

template <class T>
void swap(T *arg1,T *arg2)
{
 T tmp=*arg1;
 *arg1=*arg2;
 *arg2=tmp;
}
