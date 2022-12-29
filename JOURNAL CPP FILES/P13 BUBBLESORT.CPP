#include<iostream.h>
#include<conio.h>
void bubble_sort(int A[10],int N)
{
	int pass,last=N-1,temp;
	for(pass=0;pass<=N-2;pass++)
	{
		int exchs=0,i;
		for(i=0;i<=last-1;i++)
		{
			if(A[i]>A[i+1])
			{
				temp=A[i];
				A[i]=A[i+1];
				A[i+1]=temp;
				exchs=exchs+1;
			}
		}
		if(exchs==0)
			return;
		else
			last=last-1;
	}
}
void main()
{
	clrscr();
	int n,a[10],i;
	cout<<"\nEnter range ";
	cin>>n;
	cout<<"\nEnter the elements you want to sort ";
	for(i=0;i<n;i++)
		cin>>a[i];
	cout<<"\nOriginal array\n";
	for(i=0;i<n;i++)
		cout<<a[i]<<'\t';
	cout<<endl;
	bubble_sort(a,n);
	cout<<"\nArray after bubble sort\n";
	for(i=0;i<n;i++)
		cout<<a[i]<<'\t';
	cout<<endl;
	getch();
}