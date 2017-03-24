//Write a program to rad a number N from the user and then find the first N primes.Also Calculate the sum of first N Primes.
#include<iostream>
using namespace std;
int main()
{ 
 int N,i=2,j=2,count=0,sum=0;
 cout<<"How many primes do you wants::";
 cin>>N;
 while(count!=N)
 { 
   for(i=2;i<=j/2;i++)
    {
      if(j%i==0)
	break;
    }
 if(i>(j/2))
  {
    cout<<j<<" ";
    count+=1;
    sum+=j;
  }
  j++;
 }
cout<<"Sum="<<sum;
}

	 
