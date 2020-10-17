#include<iostream>

using namespace std;

void long_mult_by2(int a[], int &n)
{

	int b[302];
	fill(b,b+302,0);

	for(int i=301;i>=302-n;i--)
	{
		
		b[i] += a[i]*2;
		if(b[i]>9)
		{
			b[i]=b[i]%10;
			b[i-1]=1;
			
		}
		
	}
	
	if(a[302-n]*2 > 9)
	n++;
	
	for(int i=301;i>=302-n;i--)
	{
		a[i] = b[i];
	}

}

void display_long(int a[],int n)
{   
	cout<<" the answer is: ";

	for(int i=302-n;i<=301;i++)
	{
		cout<<a[i];
	}

}

int main()
{
	int a[302];
	int N,q;
	cout<<" enter the power of 2: ";
	cin>>N;
	
	if(N==0)
	cout<<1;
	
	else {
	q=1;
	a[301]=2;
	for(int i=0;i<N-1;i++)
	{
		long_mult_by2(a,q);
		
	}
	
	display_long(a,q);
	}
	return 0;
}
