/* #include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,i,count=0;
	cin>>n;
	cout<<"factors of "<< n<<" are : "; 
	for(i=1;i<=n;i++)
	{
		if(n%i==0)
		{
			count++;
			cout<<" "<< i<< " " ;
		}
	}
		if(count==2)
		{
			cout<<endl<<n<<" is prime number"<<endl;
		}
		else
		{
			cout<<endl<<n<<" is not prime number"<<endl;
		}
		cout<<"factor count = "<<count<<endl;

		return 0;
}*/


/*  #include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,i,count=0;
	cin>>n;
	cout<<"factors of "<< n<<" are : "; 
	for(i=2;i<=(n/2)+1;i++)
	{
		if(n%i==0)
		{
			count++;
			cout<<" "<< i<< " " ;
		
		}
	}
		if(count==1)
		{
			cout<<endl<<n<<" is prime number"<<endl;
		}
		else
		{
 		  cout<<endl<<n<<" is not prime number"<<endl;
		}
		cout<<"factor count = "<<count<<endl;

		return 0;
}*/

 #include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,i,count=0;
	cin>>n;
	cout<<"factors of "<< n<<" are : "; 
	for(i=2;i<=sqrt(n)+1;i++)
	{
		if(n%i==0)
		{
			count++;
			cout<<" "<< i<< " " ;
		}
	}
		if(count==1)
		{
			cout<<endl<<n<<" is prime number"<<endl;
		}
		else
		{
			cout<<endl<<n<<" is not prime number"<<endl;
		}
		cout<<"factor count = "<<count<<endl;

		return 0;
	}
