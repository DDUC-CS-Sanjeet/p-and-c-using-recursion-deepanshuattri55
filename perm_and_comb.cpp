#include<iostream>
using namespace std;

int permutation(int n, int r)
{
	 if(r==0)
  {
     return 1;
  }
  else
  {
  	return (n)*permutation(n-1,r-1);
  }
  
  return 0;
}

int combination(int n, int r)
{
	 
  if(r==0)
  {
     return 1;
  }
  else
  {
  	return (n)*combination(n-1,r-1)/r;
  }
  
  return 0;
}

int main()
{
		int x=1;
	float per,com,n,r;
	cout<<"enter the number you want to do"<<endl;
	cin>>n>>r;
	try
	{
		if (r==0)
		{
			per=1;
			com=1;
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
			per=permutation(n,r);
			com=combination(n,r);
			
		}
		cout<<"\n permutation is:: "<<per;
		cout<<"\n combination is:: "<<com;
	}
	catch(int a)
	{
		cout<<"\n do not expected";
	}
  return 0;
}
