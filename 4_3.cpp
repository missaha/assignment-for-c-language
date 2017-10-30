#include"iostream.h"
void main()
{
int num,count=0;
cout<<"Please enter a positive integer ";
do
{
cin>>"%">>num;
if(num<=0)
 cout<<"Input error, please reenter:"<<endl;
}while(num <=0);
while(num != 1)
{
if(num%2==0)
num=num/2;
else
num=num*3+1;
count++;
}
cout<<"Number of steps is "<<count<<endl;
}
