#include<iostream.h>
#include<conio.h>
void insert_cq(int Q[10], int N, int X, int &FRONT, int &REAR)
{
	if((FRONT==0&&REAR==N-1)||FRONT==REAR+1)
		cout<<"\nQueue Overflow!!!";
	else
	{
		if(FRONT==-1)
		{
			FRONT=0; REAR=0;
		}
		else
			if(REAR==N-1)
				REAR=0;
			else
				REAR++;
	}
	Q[REAR]=X;
}
void del_cq(int Q[10], int N, int &FRONT, int &REAR)
{
	int X;
	if(FRONT==-1)
		cout<<"\nQueue Underflow!!!";
	else
	{
		X=Q[FRONT];
		if(FRONT==REAR)
		{
			FRONT=-1; REAR=-1;
		}
		else
			if(FRONT==N-1)
				FRONT=0;
			else
				FRONT++;
	}
}
void disp(int Q[10], int N, int FRONT, int REAR)
{
	if(FRONT==-1)
		cout<<"\nQueue contains no information!!!";
	else
		if(FRONT<REAR)
		{
			cout<<"\nInformation of the circular queue is: ";
			for(int i=FRONT;i<=REAR;i++)
			{
				cout<<Q[i]<<'\t';
			}
		}
		else
			if(FRONT>REAR)
			{
				cout<<"\nThe information of the circular queue is: ";
				for(int i=FRONT;i<N-1;i++)
					cout<<Q[i]<<'\t';
				for(int j=0;j<=REAR;j++)
					cout<<Q[i]<<'\t';
			}
			else
			{
				cout<<"\nInformation of the circular queue is: ";
				cout<<Q[FRONT];
			}
}
void main()
{
	clrscr();
	int A[10];
	int size=10;
	int elem;
	int FRONT_A=-1;
	int REAR_A=-1;
	int ch;
	do
	{
		cout<<"\n 1. Insert. ";
		cout<<"\n 2. Delete. ";
		cout<<"\n 3. Display. ";
		cout<<"\n 4. Exit. ";
		cout<<"\n Enter choice: ";
		cin>>ch;
		switch(ch)
		{
			case 1: cout<<"\nEnter information: ";
					cin>>elem;
					  insert_cq(A, size, elem, FRONT_A, REAR_A);
					break;
			case 2: del_cq(A, size, FRONT_A, REAR_A);
					break;
			case 3: disp(A, size, FRONT_A, REAR_A);
					break;
			case 4: break;
		}
	}while(ch<=3);
}
