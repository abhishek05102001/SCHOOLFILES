#include<iostream.h>
#include<conio.h>
#include<stdio.h>
int charsearch(char[],char);
void main()
{
	int O;
	clrscr();
	char str[100],ch;
	cout<<"ENTER THE STRING:";
	gets(str);
	cout<<"ENTER ELEMENT TO BE SEARCHED:";
	cin>>ch;
	O=charsearch(str,ch);
	cout<<"NUMBER OF OCCURENCES:"<<O;
	getch();
}
	int charsearch(char str1[100],char ch1)
	{
		int i,c=0;
		for(i=0;str1[i]!='\0';i++)
		{
			if(str1[i]==ch1)
			c++;
		}
		return c;
	}


