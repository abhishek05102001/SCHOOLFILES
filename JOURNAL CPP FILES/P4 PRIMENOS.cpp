#include<iostream.h>
#include<conio.h>
void main()
{
clrscr();
		void prime();
		cout<<"\nPrime numbers between 5 and 100 are:-\n";
		prime();
}
void prime()
{
		inti,j;
		for(i=6;i<100;i++)
		{
			int f=0;
			for(j=2;j<=(i/2)+1;j++)
			{
				if(i%j==0)
				{
					f++;
				}
			}
			if(f==0)
			{
				cout<<i<<" ";
			}
		}
}
