#include <iostream>
using namespace std;
int main () {
	int a,k=0;
	cin>>a;
	for ( int i=1; i<=a; i++)
	{
 
	if ( a%i==0)
	k=k+1;
	}
	cout<<k<<" ";
 
return 0;
}