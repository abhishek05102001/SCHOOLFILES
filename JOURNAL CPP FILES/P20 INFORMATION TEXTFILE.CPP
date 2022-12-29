#include<fstream.h>
#include<conio.h>
#include<stdlib.h>

class student
{
	int rollno;
	char name[20];
	char branch[3];
	float marks;
	char grade;

	public:
		void getdata()
		{
			cout<<"Rollno: ";
			cin>>rollno;
			cout<<"Name: ";
			cin>>name;
			cout<<"Branch: ";
			cin>>branch;
			cout<<"Marks: ";
			cin>>marks;

			if(marks>=75)
			{
				grade = 'A';
			}
			else if(marks>=60)
			{
				grade = 'B';
			}
			else if(marks>=50)
			{
				grade = 'C';
			}
			else if(marks>=40)
			{
				grade = 'D';
			}
			else
			{
				grade = 'F';
			}
		}

		void putdata()
		{
			cout<<"Rollno: "<<rollno<<"\tName: "<<name<<"\n";
			cout<<"Marks: "<<marks<<"\tGrade: "<<grade<<"\n";
		}

		int getrno()
		{
			return rollno;
		}
}stud1;

void main()
{
	clrscr();

	fstream fio("marks.dat", ios::in | ios::out);
	char ans='y';
	while(ans=='y' || ans=='Y')
	{
		stud1.getdata();
		fio.write((char *)&stud1, sizeof(stud1));
		cout<<"Record added to the file\n";
		cout<<"\nWant to enter more ? (y/n)..";
		cin>>ans;
	}

	clrscr();
	int rno;
	long pos;
	char found='f';

	cout<<"Enter rollno of student to search for: ";
	cin>>rno;

	fio.seekg(0);
	while(!fio.eof())
	{
		pos=fio.tellg();
		fio.read((char *)&stud1, sizeof(stud1));
		if(stud1.getrno() == rno)
		{
			stud1.putdata();
			fio.seekg(pos);
			found='t';
			break;
		}
	}
	if(found=='f')
	{
		cout<<"\nRecord not found in the file..!!\n";
		cout<<"Press any key to exit...\n";
		getch();
		exit(2);
	}

fio.close();
getch();
}
