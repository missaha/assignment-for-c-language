#include<iostream.h>
void main()
{
int year,n=0,leap;
for(year=20000;year<=3000;year++)
{
while(n%10==0)
{
cout<<"all years uncout in one line"<<endl;
}
if(year%400==0)
{ leap=1,	n++;
else
if(year%4==0&&year%100!=0)
leap=1,n++;
else
leap=0,n=n;
}
}
cout<<year<<n<<endl;
}