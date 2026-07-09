#include<iostream>
#include<string>

using namespace std;

int main()
{
	int t;
	cin >> t;
	for(int q=0;q<t;q++)
	{
		bool pm=false;
		string time;
		cin >> time;int h1;
		int h = (time[0]-'0')*10+(time[1]-'0');
		int m = (time[3]-'0')*10+(time[4]-'0');
		if(h>=12)
		{
			h1=h-12;
			if(h==12) h1=12;
			
			pm=true;
		}
		else
		{

			h1=h;
			if(h==0) h1=12;
		}
		
		if(h1<10) cout << "0" <<h1;
		else cout <<h1;
		cout <<":";
		if(m<10) cout <<"0"<<m;
		else cout<<m;
		
		if(pm==true) cout <<" PM";
		else cout <<" AM";
		cout <<endl;
	}
}


