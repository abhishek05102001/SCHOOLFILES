#include<iostream.h>
#include<string.h>
void main()
{
	char str1[80], str2[80], *str3;
   int i, l=0,c;
   cout<<"\nENter string -1 : "; cin>>str1;
	cout<<"\n original String-1 : "<<str1;
	strrev(str1);
   cout<<"\n After strrev() \n String-1 : "<<str1;
}