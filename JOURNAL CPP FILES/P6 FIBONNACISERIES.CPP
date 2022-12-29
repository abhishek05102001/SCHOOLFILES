#include<iostream.h>
#include<conio.h>
void main()
{
	int n;
	clrscr();
	cout<<"\n Enter a number : ";
	cin>>n;
	int x=1,y=1,s=0;
	cout<<x<<"\t"<<y<<"\t";
	for(int i=3;i<=n;i++)
	{
		s=x+y;
		cout<<s<<"\t";
		y=x;
		x=s;
	}
	getch();
}
