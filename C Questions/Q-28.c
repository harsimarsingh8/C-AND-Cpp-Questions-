	/*			//bubble sort//
#include<iostream>
using namespace std;
int main()
{
int ar[6],n,abc=0;
cout<<"Enter the elements::";
for(n=0;n<6;n++)
{
cin>>ar[n];
}
int c;
for(c=0;c<(n-1);c++)
{
int d;
for(d=0;d<n-c-1;d++)
{
if(ar[d]>ar[d+1])
	{
	abc++;
int x=0;
	x=ar[d];
 	ar[d]=ar[d+1];
	ar[d+1]=x;
	}
}
}
cout<<"\nsorted\n";
int k=0;
	for(;k<6;k++)
	{
	cout<<ar[k];
	}
	abc=abc-6;
	cout<<endl<<abc<<endl;
}
*/


#include<iostream>
using namespace std;
int main()
{
    int ar[6],pos;
    for(int i=0;i<6;i++)
    {
        cin>>ar[i];
    }
    int min=ar[0];
    int j;
    for(j=0;j<6;j++)
    {
        if(min>ar[j])
        {
            min=ar[j];
            pos=j;
        }
    }
    cout<<"no of anticlock rotations="<<6-pos<<endl;
}


