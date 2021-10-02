#include <iostream>
using namespace std;

inline int sum(int a, int b)
{
	int sum= a+b;
	return sum;
}

int main()
{
	int A,B;
	cout<<"Enter the value of the two numbers : "<<endl;
	cin>>A>>B;	
	
	cout<<"The sum is = "<<sum(A,B)<<endl;
	return 0;
	
}