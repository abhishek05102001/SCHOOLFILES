#include<iostream.h>
#include<conio.h>
void main()
{
	clrscr();
	int i,j,k;
	for(i=1;i<=5;i++)
	{
		k=i;
		for(j=1;j<=i;j++)
		{
			cout<<k++<<" ";
		}
			cout<<endl;

	}
	getch();
}
