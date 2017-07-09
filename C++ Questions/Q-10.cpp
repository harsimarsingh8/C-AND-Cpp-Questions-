//  Question 10: 
// Alisha always gets confused with the operators used with strings.
// When she has to concatenate two strings suppose string1 and string2, she used to write string1+string2. 
// And when she has to compare whether the two strings are equal or first string is greater or smaller than string 2 again 
// she writes like string1==string2,string1>strin2 and string1<string2. Which gives the error in program as these operators 
// does not work with strings directly. So, help out her to work these operators with strings directly.


#include<iostream>
#include<string.h>
using namespace std;
class strings
{	char str[20];
	public:
	strings(){}
	strings(const char* s)
	{	
strcpy(str,s);}
	strings operator +(strings s)
	{	
strings res;
		char st[20];
		strcpy(st,str);
		strcat(st," ");
		strcat(st,s.str);
		strcpy(res.str,st);
		return res;
	}
	int operator ==(strings s)
	{	
if(!strcmp(str,s.str))
			return 1;
		return 0;
	}
	int operator >(strings s)
	{	
int r=strcmp(str,s.str);
		if(r>0) 
			return 1;
		return 0;
	}
	int operator <(strings s)
	{	
int r=strcmp(str,s.str);
		if(r<0)
			return 1;
		return 0;
	}
	void show()
	{	cout<<str<<endl;}
};
main()
{	
strings s1("hello"),s2("hello"),s3("h1");
	strings s4=s1+s3;
	cout<<"s1 and s3 after concatenation are : ";
	s4.show(); 
	if(s1==s2)
		cout<<"s1 and s2 are equal\n";
	else cout<<"s1 and s2 unequal\n";
	if(s1>s3)
		cout<<"s1 is greater than s3\n";
	else cout<<"s1 is smaller than s3\n";
	if(s2<s3)
		cout<<"s2 is smaller than s3\n";
	else cout<<"s2 is greater than s3\n";
}
