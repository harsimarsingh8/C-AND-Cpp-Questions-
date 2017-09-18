//COMPLEX FRIEND FUNCTION 



#include<iostream>
using namespace std;
class second;
class first{
	int real1;
	int img1;
	public:
		input()
		{
			
			cout<<"enter first real1:";
			cin>>real1;
			cout<<"enter first img1:";
			cin>>img1;
			
		}
	friend void sum(first,second);
	
	
};
class second {
	
	
	int real2;
	int img2;
	
	public:
		input1()
		{
			
			cout<<"enter real2:";
			cin>>real2;
			cout<<"enter img2:";
			cin>>img2;
		}
		
		friend void sum(first,second);
};
void sum(first o1,second o2)
{
	int real3;
	real3=o1.real1*o2.real2;
	int img3;
	img3=o1.img1*o2.img2;
	cout<<real3<<"*i"<<img3;
	
	
}

int main()
{
	
	
	first o1;
	second o2;
	o1.input();
	o2.input1();
	sum(o1,o2);
}
