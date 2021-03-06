#include<bits/stdc++.h>
using namespace std;

int main()
{
	int test;
	cin>>test;


	while(test--)
	{
		string s;
		cin>>s;

		int suvo_count=0;
		int suvojit_count=0;

		auto itr=0;
		auto itr1=0;

		while (itr<s.length())
		{
		itr = s.find("SUVO", itr );
		if(itr<s.length())
		{
          suvo_count++;
          itr+= 4;
		}
   		}


		while (itr1<s.length())
		{
		itr1 = s.find("SUVOJIT", itr1 );
		if(itr1<s.length())
		{
          suvojit_count++;
          itr1+= 7;
		}
   		}
cout<<"SUVO = "<<suvo_count-suvojit_count<<", "<<"SUVOJIT = "<<suvojit_count<<endl;
	}
}