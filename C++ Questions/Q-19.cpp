#include<iostream>
using namespace std;
class counter
{
    int count;
public:
    void initial();
    void increment();
    void decrement();
};
void counter::initial()
{
    cout<<"Default value is 0"<<endl;
    count=0;
}
void counter::increment()
{
    count++;
    cout<<"Value is "<<count<<endl;
}
void counter::decrement()
{
    count--;
    cout<<"Value is "<<count<<endl;
}
int main()
{
    counter obj;
    int val=1;
    obj.initial();
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
         }
         else if(val==2)
         {
             obj.decrement();
         }
    }
}