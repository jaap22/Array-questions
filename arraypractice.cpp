#include<iostream>
using namespace std;
main()
{
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
    {
    	cin>>a[i];
	}
	int current=0;
for(int i=0;i<n;i++)
{
	current=0;
	for(int j=i;j<n-1;j++)
	{
		current+=a[j];
		cout<<current<<endl;
	}
}

}
