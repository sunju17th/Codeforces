#include<iostream>
#include<math.h>
#include<vector>

using namespace std;

long long a[100005];
vector <long long> k[100005];

int main()
{
	int n;
	cin >> n;
	for(int i=0;i<n;i++)
	{
		cin >> a[i];
	}
	
	bool kt = true , temp = false;
	
	k[1].push_back(0);
	
	for(int i=1;i+1<n;i++)
	{
		for(int j=0;j<k[i].size();j++)
		{
			if(abs(abs(a[i]-a[k[i][j]])-abs(a[i]-a[i+1]))<=1) 
			{
				k[i+1].push_back(i);
				temp = true;	
			}
		}
		
		
		if(temp == false)
		{
			kt = false;
			
			for(int j=i-1;j>0;j--)
			{
				for(int m=0;m<k[j].size();m++)
				{
					if(abs(abs(a[j]-a[k[j][m]])-abs(a[i+1]-a[j]))<=1)
					{
						kt = true;
						k[i+1].push_back(j);
					}
				}
			}
			
			/*if(kt == false) 
			{
				cout << "false";
				return 0;
			}*/
			
		}
		
	}
	

	for(int i=0;i<n;i++)
			{
				for(int j=0;j<k[i].size();j++)
				{
					cout << k[i][j] <<" ";
				}
				cout << endl;
			}	cout << "true";
	
}


