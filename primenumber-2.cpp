// WAP  to read a number and check it is prime number or not.
//method 2: by using break keyword
#include<iostream>
using namespace std;
int main()
{
	int n,i;
	cout<<"\nEnter the number:";
	cin>>n;
	for(i=2;i<=n;i++)
	{
		if(n%i==0)
		   break;
	}
	if(i==n)
	  cout<<"\n"<<n<<" is prime number";
    else
      cout<<"\n"<<n<<" is not prime number";
	return 0;
}
