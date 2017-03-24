/* Given a list of N integers, find its mean(as a double), maximum value, minimum value, and range. The Program will first ask for N, the number of integers in the list, which the user will input. Then the user will input N more numbers.
	Here is a sample input Sequence:
3<-- N
2
1
3
	Three numbers are give: 2,1,3. The output should be as follows:
Mean: 2
Max: 3
Min: 1
Range: 2*/

#include<iostream>
using namespace std;
int main()
{
 int N,val=0,i;
 cout<<"Enter the number of Integer in the list::";
 cin>>N;
 cin>>val;
 int minVal = val;
 int maxVal= val;

 for(i=1;i<N;++i)
  {
	int a;
 	cin>>a;
	val +=a;
	if(a>maxVal)
	maxVal = a;
 	if(a<minVal)
	minVal = a;
   }
 cout<<"Mean: "<<(double)val/N<<endl;
 cout<<"Max:"<<maxVal<<endl;
 cout<<"Min:"<<minVal<<endl;
 cout<<"Range:"<<maxVal-minVal<<endl;
 return 0;
}
	
  
