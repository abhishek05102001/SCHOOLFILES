#include<iostream.h>
#include<conio.h>
struct node
{
	int info;
	node *next;
};
node *front,*rear,*newptr,*saveptr,*ptr;
void ins_que(node*);
node *create_ptr(int);
void disp(node*);
void del_que();
int ch,n;
void main()
{
	clrscr();
	front=rear=NULL;
	do
	{
		cout<<"\nQueue Operations!!! ";
		cout<<"\n1 Insert ";
		cout<<"\n2 Delete ";
		cout<<"\n3 Display ";
		cout<<"\n4 Exit\n";
		cout<<"\n\nEnter your choice: ";
		cin>>ch;
		switch(ch)
		{
			case 1:cout<<"\nEnter information: ";
					cin>>n;
					newptr=create_ptr(n);
					 ins_que(newptr);
					break;
			case 2:del_que();
					break;
			case 3:disp(front);
					break;
			case 4:break;
		}
	}
	while(ch<=3);
}
void disp(node *np)
{
	cout<<"\nInformation of queue:\n";
	while(np!=NULL)
	{
		cout<<np->info<<'\t';
		np=np->next;
	}
	cout<<"\n\n\n";
}
node *create_ptr(int nn)
{
	ptr=new node;
	ptr->info=nn;
	ptr->next=NULL;
	return ptr;
}
void ins_que(node *np)
{
	if(front==NULL)
	{
		front=np;
		rear=np;
	}
	else
	{
		rear->next=np;
		rear=np;
	}
}
void del_que()
{
	if(front==NULL)
		cout<<"\nQueue underflow!!!";
	else
		{
			ptr=front;
			front=front->next;
			delete ptr;
		}
}

