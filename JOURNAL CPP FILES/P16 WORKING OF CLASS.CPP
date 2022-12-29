#include<iostream.h>
#include<conio.h>
class TESTMATCH
{
	int TestCode;
	char Description[50];
	int NoOfCandidates;
	int CenterReqd;
	int CALCULATECNTR()
	{
		int x=0;
		x=NoOfCandidates/100+1;
		return x;
	}
	public:
	void GETDATA()
	{
		cout<<"\nEnter Test Code: "; cin>>TestCode;
		cout<<"\nEnter Description: "; cin>>Description;
		cout<<"\nEnter No. of Candidates: "; cin>>NoOfCandidates;
		CenterReqd=CALCULATECNTR();
	}
	void PUTDATA()
	{	cout<<"\nTEST MATCH INFORMATION...";
		cout<<"\nTest Match Code: "<<TestCode;
		cout<<"\nDescription: "<<Description;
		cout<<"\nTotal Candidates: "<<NoOfCandidates;
		cout<<"\nCenters Required: "<<CenterReqd;
	}
};
void main()
{	clrscr();
	TESTMATCH T1, T2[5];
	cout<<"\nTEST MATCH 1 ";
	T1.GETDATA();
	T1.PUTDATA();
              getch();
}

