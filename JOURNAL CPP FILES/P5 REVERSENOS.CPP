#include<iostream.h>
#include<conio.h>
void main()
{
	clrscr();
	int x=0;
	cout<<"\n Enter a number ";
	cin>>x;
	int u=0,d;
	while (x>0)
	{
		d=x%10;
		u=u*10+d;
		x=x/10;
	}
	cout<<"\n The reverse number is "<<u;
	getch();
}