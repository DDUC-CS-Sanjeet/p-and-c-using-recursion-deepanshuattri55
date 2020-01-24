#include<iostream>
using namespace std;

int permutation(int n, int r)
{
	 if(r==0||n==0)
  {
     return 1;
  }
   else if(r==1)
  {
  	 return n;
  }	
  else
  {
  	return (n)*permutation(n-1,r-1);
  }
  
  return 0;
}

int combination(int n, int r)
{
	 
  if(r==0||n==0)
  {
     return 1;
  }
     else if(r==1)
  {
  	 return n;
  }	
  else
  {
  	return 1.0*combination(n-1,r-1)/r*n;
  }
  
  return 0;
}

int main()
{
		int x=1;
	int n,r;
	double result;
	double result1;
	cout<<"enter the number you want to do"<<endl;
	cin>>n>>r;
	try
	{
		if (r==0)
		{
			result=1;
			result1=1;
		}
		else if (n<0||r<0)
		{
			throw x;
		}
		else if(n<r)
		{
			throw x;
		}
		else
		{
			result=permutation(n,r);
			result1=combination(n,r);
			
		}
		cout<<"\n permutation is:: "<<result;
		cout<<"\n combination is:: "<<result1;
	}
	catch(int a)
	{
		cout<<"\n do not expected";
	}
  return 0;
}
