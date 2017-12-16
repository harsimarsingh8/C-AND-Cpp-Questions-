#include<iostream>
using namespace std;
class counter
{
    static int count;                                                  
public:
    void increment();
    void decrement();
    static void print();                                               
};
int counter::count;                                                    
void counter::increment()
{
    count++;
}
void counter::decrement()
{
    count--;
}
 void counter::print()                                              
{
    cout<<"Value is "<<count<<endl;
}
int main()
{
    counter obj;
    int val=1;
    while(val!=0)
    {
        cout<<"Enter 1 to  increment 2 to decrement or 0 to exit"<<endl;
        cin>>val;
         if(val==0)
         {
             break;
         }
         else if(val==1)
         {
             obj.increment();
             counter::print();
         }
         else if(val==2)
         {
             obj.decrement();
             counter::print();
         }
    }
}