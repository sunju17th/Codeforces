#include<iostream>
#include<string>
using namespace std;

int main()
{
	int t;
	cin >> t;
	
	while(t--)
	{
		string name;
		cin >> name;
		int l=0, r=name.size()-1;
		bool kt=true;

		while(l<r)
		{
			if(name[l] != name[r])
			{
				kt = false;
				break;
			}
			l++;r--;
		}
		
		if(kt == true) cout << "Congratulations to the BKDN team for reaching the ICPC World Finals!" <<endl;
		else cout << "!snalF dlroW CPCI eht gnihcaer rof maet NDKB eht ot snoitalutargnoC" <<endl;
	}
}


