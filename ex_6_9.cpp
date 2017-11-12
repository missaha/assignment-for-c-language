#include<iostream.h>
int fun(int m)
{
int n=0;
int i;
for(i=1;i<=m;i++)
{
if(i%7==0||i%11==0)
n=n+1;
}
return(n);
}
void main()
{
int m;
int n;
int fun(int m);
cin>>m;
n=fun(m);
cout<<n<<endl;
}
