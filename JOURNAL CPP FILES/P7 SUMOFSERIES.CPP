#include<iostream.h>
#include<conio.h>
double fact(int n)
{
	int f=1;
	for(int i=1;i<=n;i++)
		f*=i;
	return f;
}
void main()
{
	clrscr();
	int n,i,s=0,f;
	cout<<"\n Enter a number : ";
	cin>>n;
	for(i=1;i<=n;i++)
	{
		f=fact(i);
		s=s+f;
	}
	cout<<"\n The sum of the series ";
	for(i=1;i<=n;i++)
	{
		if(i<n)
			cout<<i<<"! + ";
		else
			cout<<i<<"!";
	}
	cout<<"\n is : "<<s;
	getche();
}