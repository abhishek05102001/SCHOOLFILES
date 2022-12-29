#include<iostream.h>
#include<fstream.h>
#include<conio.h>
#include<stdio.h>
void main()
{
	clrscr();
	char ch;
	char line[80];
	ofstream fout("m1.txt");    
	fout.open("m1.txt");        
	cout<<"\nEnter Character:\n";
	do
	{
		ch=getchar();            
		if(ch!='#')
			fout.put(ch);
	}
	while(ch!='#');
	fout.close();

	ifstream fin;
	fin.open("m1.txt");         
	cout<<"\n\nOutput from file. ";
	int cnt=0;
	while(fin.eof()==0)         
	{                           		ch=fin.get();            
		fin.getline(line,35);    
		cout.put(ch);
		cnt++;
	}
	cout<<"\nLines: "<<cnt;
	fin.close();                
	getch();
}
