#include<iostream.h>
#include<limits.h>
#include<conio.h>
void main()
{
	clrscr();
	int a[9]={12,36,48,24,108,96,84,0};
	int i, k, temp, ptr, N=8;
	a[0]=INT_MIN;
	cout<<"\nOriginal array:\n";
	for(i=1;i<=N;++i)
		cout<<a[i]<<'\t';
	cout<<endl;
	
	cout<<"\nArray after each pass: ";
	for(k=1;k<=N;++k)
	{
		temp=a[k];
		ptr=k-1;
		while(temp<a[ptr])
		{
			a[ptr+1]=a[ptr];
			ptr--;
		}
		a[ptr+1]=temp;
		cout<<"\nPass - "<<k;
		for(i=1;i<=N;++i)
			cout<<'\t'<<a[i];
	}
    getch();
}
