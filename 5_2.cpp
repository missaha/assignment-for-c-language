#include "iostream.h"
float sum(int n)
{
 float t=0.0;
 int m=0,i;
 for(i=1;i<=n;i++)
 {
	 m+=i;
 t+=(float)1/m;
 }
return t;
}
 void main()
 {
	 int n;
	 float y;
	 cout<<"Please enter an integer n:";
	 cin>>n;
	 y=sum(n);
	 cout<<"sum="<<y<<endl;
 }