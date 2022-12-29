#include<iostream.h>
#include<conio.h>
//Function declaration and definition
int bin_srch(int A[10],int N,int S_E)
{
	int low=0,high=N-1,mid;
	while(low<=high)
	{
		mid=(high+low)/2;
		if(S_E<A[mid])
			high=mid-1;
		else if(S_E>A[mid])
			low=mid+1;
		else return (mid);
	}
	return(-1);
}
void main()
{
	clrscr();
	int i,n,a[10],s_e,c;
	cout<<"\nEnter range ";
	cin>>n;
	cout<<"\nEnter the array elemets in ascending order\n";
	for(i=0;i<n;i++)
		cin>>a[i];
	cout<<"\n Enter element to be searched ";
	cin>>s_e;
	c=bin_srch(a,n,s_e);
	if(c==-1)
		cout<<"\nElement not found!";
	else
		cout<<"\nElement found at position "<<c;
	getch();
}
