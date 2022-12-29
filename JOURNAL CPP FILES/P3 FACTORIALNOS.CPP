#include<iostream.h>
#include<conio.h>
void main()
{
	clrscr();
	long i,n,FACT=1;
	cout<<"ENTER THE NUMBER:"<<"\t";
	cin>>n;
	for(i=1;i<=n;i++)
	{
		FACT*=i;

	}
	cout<<"THE FACTORIAL OF NUMBER IS:"<<"\t"<<FACT;
	getch();
}