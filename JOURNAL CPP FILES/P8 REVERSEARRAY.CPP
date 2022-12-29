#include<iostream.h>
#include<conio.h>
void main()
{

	clrscr();
	int A[100],n,i;
	cout<<"ENTER NO";
	cin>>n;
	cout<<"ENTER ARRAY ELEMENTS";
	for(i=0;i<n;i++)
	{
		cout<<"\n ENTER THE ELEMENTS OF ARRAY"<<i+1<<":";
		cin>>A[i];
	}
	cout<<"ORIGINAL ARRAY IS: \n";
	for(i=0;i<n;i++)
	{

		cout<<A[i]<<endl;
	}
	for(i=0;i<n/2;i++)
	{
		int temp=A[i];
		A[i]=A[n-i-1];
		A[n-i-1]=temp;
	}
	cout<<"REVERSE ARRAY IS: \n";
	for(i=0;i<n;i++)
	{
		cout<<A[i]<<endl;
	}

	getch();
}

