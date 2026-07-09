#include <bits/stdc++.h>

using namespace std;

int gcd(int a, int b)
{
	if(b==0) return a;
	else return gcd(b,a%b);
 } 


int main() {
	int t;
	cin >> t;
	while(t--)
	{
		int n;
	    cin >> n;
	    vector<int> exp;
	    vector<int> a(n);
	    
	    for(int i=0;i<n;i++)
	    {
	    	int x;
	    	cin >> x;
	    	exp.push_back(x);
		}
		
	    for (int i = 0; i < n; i++) a[i] = i + 1;
		
		
	    do {
	    	bool kt = true;
	    	
	        for (int i=0;i<n-1;i++) 
			{
	        	if(gcd(exp[i]+a[i], exp[i+1]+a[i+1]) < 3 )
	        	{
	        		kt = false;
	        		break;
				}
			}
			
			
	        if(kt==true) 
			{
				for (int i=0;i<n;i++) 
				{
					cout << a[i] << " ";
				}
				cout << endl;
	        	break;	
			}
	    } while (next_permutation(a.begin(), a.end()));
	}
	
    return 0;
}

