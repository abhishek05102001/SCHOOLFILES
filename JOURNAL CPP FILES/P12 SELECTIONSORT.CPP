#include<iostream.h>
#include<conio.h>
struct student
{
	int rno;
	char name[10];
};
void main()
{
	clrscr();
	void select_sort(student stu[20],int m);
	int i,n;
	student stud[20];
	cout<<"enter number of students: "<<endl;
	cin>>n;
	for(i=0;i<n;i++)
	{
		cout<<"\nEnter Roll number of student "<<i+1<<": ";
		cin>>stud[i].rno;
		cout<<"\nEnter name of the student "<<i+1<<": ";
		cin>>stud[i].name;
	}
	cout<<"\nOrignal list of details of students entered: "<<endl;
	cout<<"\nRollno. \t Name. \n";
	for(i=0;i<n;i++)
	{
		cout<<stud[i].rno<<'\t'<<'\t'<<stud[i].name<<endl;
	}
	cout<<endl;
	select_sort(stud,n);
	cout<<"Sorted list of details of students: "<<endl;
	cout<<"\nRollno. \t Name. \n";
	for(i=0;i<n;i++)
	{
		cout<<stud[i].rno<<'\t'<<'\t'<<stud[i].name<<endl;
	}
	cout<<endl;
	getch();
}
void select_sort(student stu[20],int m)
{
	student temp;
	int pass,mid_ind,i;
	for(pass=0;pass<=m-2;pass++)
	{
		mid_ind=pass;
		for(i=pass+1;i<=m-1;i++)
		{
			if(stu[mid_ind].rno>stu[i].rno)
			mid_ind=i;
		}
		if(mid_ind!=pass)
		{
			temp=stu[pass];
			stu[pass]=stu[mid_ind];
			stu[mid_ind]=temp;
		}
	}
}