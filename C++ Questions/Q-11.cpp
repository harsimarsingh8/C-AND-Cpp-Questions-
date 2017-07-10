//  Question 11: 
//  Write a c++ program to create a super class named as figure. Derive two classes from super class named as rectangle and triangle. 
//  Create a member function of same name in all the three classes which will calculate area of shapes by making member function of super class as virtual.



# include<iostream>
using namespace std;
class figure
 {
  	 public:
    	 virtual void area(){};
   };
class rectangle:public figure
  {
      	 float l,b;
   	 public:
      	 virtual void area()
         {
            	cout<<"enter length & breadth of rectangle : ";
            	cin>>l>>b;
           		 cout<<"area of rectangle is "<<l*b<<endl;
           }
     };
class triangle:public figure
  {
       	float base,height;
     	public:
       	 virtual void area()
          {
            	 cout<<"enter base & height of triangle : ";
             	cin>>base>>height;
           	 cout<<"area of triangle is "<<0.5*base*height<<endl;
             }
      };
int main()
 {
  	 int choice;
  	 rectangle r;
  	 triangle t;
  	 cout<<"enter 1 to calculate area of rectangle , 2 for triangle ";
 	  cin>>choice;
 	  switch(choice)
      {
        case 1:
          	 r.area();
          	 break;
        case 2:
          	 t.area();
            break;
        default:
          	 cout<<"wrong choice";
        }
  }

