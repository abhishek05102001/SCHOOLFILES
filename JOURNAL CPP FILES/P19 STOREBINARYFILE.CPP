#include<iostream.h>
#include<fstream.h>
#include<conio.h>
#include<stdio.h>
class stud
{
	int rno;
   char nm[20];
   char addr[30];
   public:
   void enter()
   {
   	cout<<"\n Enter rollno [0 to exit]:  ";
      cin>>rno;
      cout<<"\n ENter name :  ";
      cin>>nm;
      cout<<"\n Enter address :  ";
      cin>>addr;
   }
   void disp()
   {
   	cout<<rno<<'\t'<<nm<<'\t'<<addr<<'\t';
      }
   void read_det()
   {
   	cout<<"\n Enter address :  ";
      cin>>addr;
   }
   int getrno()
   {
   	return rno;
   }
};
	fstream file;
   void search(int rn)
   {
   	stud sr;
      int flag=0;
      file.seekg(0);
      while(file.read((char *)&sr,sizeof(stud)))
      {
      	if(rn==sr.getrno())
         {
         	cout<<"\n Student details are as follows :  "<<endl;
            sr.disp();
            cout<<"\n \n\n Press any key to continue....";
            flag=1;
            getch();
            break;
         }
      }
      if(flag==0)
      	cout<<"\n\n Rollno does not exist. ";
      getch();
   }
   void insert(stud sr)
   {
   	file.write((char *)&sr,sizeof(stud));
   }
   void del(int r)
   {
   	int fl=0;
      char conf='n';
      fstream ftmp("temp.dat",ios::in|ios::out|ios::binary);
      file.seekg(0);
      stud st;
      while(file.read((char *)&st,sizeof(stud)))
      {
      	if(st.getrno()==r)
         {
         	st.disp();
            fl=1;
            cout<<"\n Are you sure?[Y/N] :  ";
            cin>>conf;
            if(conf=='n')
            	ftmp.write((char *)&st,sizeof(stud));
         }
         else
         	ftmp.write((char *)&st,sizeof(stud));
      }
      if(fl==0)
      	cout<<"\n Record does not exist. \n";
      file.close();
      ftmp.close();
      remove("student.dat");
      rename("temp.dat","student.dat");
   }
   void modify(int rn)
   {
   	stud sr;
      int ptr=0,ptr1=0;
      int flag=0,obj=0;
      file.seekg(0);
      while(file.read((char *)&sr,sizeof(stud)))
      {
      	if(rn==sr.getrno())
         {
         	cout<<"\n Student details are as follows: "<<endl;
            ptr=file.tellg();
            sr.disp();
            cout<<"\n\n Press any key to continue....";
            flag=1;
            sr.read_det();
            file.seekp(ptr-sizeof(stud));
            file.write((char *)&sr,sizeof(stud));
            getch();
            break;
         }
      }
         if(flag==0)
         {
         	cout<<"\n \n Roll no does not exist.";
            getch();
         }
    }
    void disp()
    {
    	stud st;
      file.seekg(0);
      while(file.read((char *)&st,sizeof(stud)))
      {
      	st.disp();
      }
    }
    stud strec;
    int choice,rn;
    void main()
    {
    	file.open("student.dat",ios::ate|ios::in|ios::out|ios::binary);
      do
      {
	clrscr();
	 file.clear();
	 cout<<"\n\n\n Main menu :"<<endl;
	 cout<<"\n1.Add Record"<<"\n";
	 cout<<"\n2.Search"<<endl;
	 cout<<"\n3.Delete"<<endl;
	 cout<<"\n4.Modify"<<endl;
	 cout<<"\n5.Display"<<endl;
	 cout<<"\n6.Exit."<<endl;
         cout<<"\n Enter choice(1-5): ";
         cin>>choice;
         switch(choice)
         {
         	case 1:
            cout<<"\n Enter student's Details."<<endl;
            file.clear();
            strec.enter();
            insert(strec);
            break;
            case 2:
            cout<<"\n Enter the rollno to be searched :  ";
            cin>>rn;
            file.clear();
            search(rn);
            break;
            case 3:
            cout<<"\n Enter the roll no to be deleted :  ";
            cin>>rn;
            del(rn);
            file.open("student.dat",ios::ate|ios::in|ios::out|ios::binary);
            break;
            case 4:
            cout<<"\n Enter rollno to be modified :  ";
            cin>>rn;
            file.clear();
            modify(rn);
            break;
            case 5:
            disp();
            getch();
         }
      }
      while(choice>=1&&choice<=5);
    }
