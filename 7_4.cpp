#include<iostream.h>
#include<iomanip.h>
#include<string.h>
void main()
{
int a[10];
int i;
cout<<"������10��������"<<endl;
for(i=0;i<10;i++)
{
	gets(a[10]);
	cin>>a[10];
}

	int *p,*q,t;
	p=0;
	q=10;
	*p=&a[0];
	*q=&a[10];
	while(p<q)
	{
		for(p=0;p<5;p++;q--)
		{
			t=*p;
			*p=*q;
			*q=t;
cout<<"�����������Ϊ:"<<endl;
cout<<a[i];
		}
	}
}

