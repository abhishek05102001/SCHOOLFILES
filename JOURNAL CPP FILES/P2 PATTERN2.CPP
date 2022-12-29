#include<iostream.h>
#include<conio.h>
void main()
{
	clrscr();
	int i,j;
	for(i=65;i<=70;i++)
	{
		for(j=65;j<=i;j++)
		{
			cout<<(char)j<<" ";
		}
		cout<<endl;
	}
	getch();
}
