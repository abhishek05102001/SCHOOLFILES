#include<iostream.h>
#include<conio.h>
#include<string.h>
class clothing
{
	char code[50];
	char type[50];
	int size;
	char material[50];
	float price;
	void calcprice()
	{
		if(strcmpi(material,"COTTON")==0)
		{
			if(strcmpi(type,"TROUSER")==0)
				price=1500;
			else if(strcmpi(type,"SHIRT")==0)
				price=1200;
			else
				cout<<"\n INVALID TYPE: ";
		}
		else
		{
			if(strcmpi(type,"TROUSE")==0)
				price=1125;
			else if(strcmpi(type,"SHIRT")==0)
				price=900;
			else
				cout<<"\n INVALID TYPE";
		}
	 }
		public:
		clothing()
		{
			strcpy(code,"NOT ASSIGNED");
			strcpy(material,"NOT ASSIGNED");
			strcpy(type,"NOT ASSIGNED");
			size=0;
			price=0;
		}
		void Enter()
		{
			cout<<"\n ENTER CODE :";
			cin>>code;
			cout<<"\n ENTER TYPE :";
			cin>>type;
			cout<<"\n ENTER SIZE :";
			cin>>size;
			cout<<"\n ENTER MATERIAL :";
			cin>>material;
			calcprice();
		}
	  void Show()
	  {
			cout<<"\n CODE : "<<code;
			cout<<"\n TYPE : "<<type;
			cout<<"\n SIZE :"<<size;
			cout<<"\n MATERIAL : "<<material;
			cout<<"\n PRICE : "<<price;
	  }
};
void main()
{
	clrscr();
	clothing C1;
	C1.Enter();
	C1.Show();
	getch();
}