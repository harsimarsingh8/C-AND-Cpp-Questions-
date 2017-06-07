//Question 16: 
// WAP to find first 100 prime numbers (using square root method). Note: Compare it with other methods and its effectiveness over other method.

#include<stdio.h>
#include<math.h>
int n,num,t,div,count;
int prime(int n);
int main()
{
printf("How many prime number you want to print: ");
 scanf("%d", &n);
 printf("\n%d\t",2);
prime(n);
}
int prime(int n)
{
 count=1;
 num=3;
 while(count<n)
 {
  t=sqrt(num);
  div=2;
  while(div<=t)
  {
    if(num%div==0)
       break;
    div++;
  }
  if(div>t)
  {
     printf("%d\t",num);
     count++;
  }
  num=num+2;
 }
 return num;
}    

