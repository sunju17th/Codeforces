#include<iostream>
#include<string>

using namespace std;

string n;
 
string strplus(string a, int n)
{
	int     du  = 0;
    int     mid = 0;
    string  res = "";
    
    for (int i = a.length()-1; i >= 0; --i)
    {
    	if(i==n) mid = ((int) a[i] - 48) + du + 1;
		else  mid = ((int) a[i] - 48) + du;
        du  = mid / 10;
        res = (char) (mid % 10 + 48) + res;
    }
    if (du > 0) res = "1" + res;
       return res;
} 



string result(string a)
{
	if(((int) a[a.length()-1] - 48)==9) a=strplus(a,a.length()-1);
	if(a.length()==1)
	{
		a=strplus(a,0);
		return a;
	}
	
	
	int n;
	if(a.length()%2==0) n=a.length()/2-1;
	else n=a.length()/2;
	for(int i=a.length()-1;i>n;i--)
	{
		if(((int) a[i] - 48) > ((int) a[a.length()-1-i] - 48))
		{
			a=strplus(a,i-1);
			a[i]=a[a.length()-1-i];
			i++;
		}
		else
		{
			a[i]=a[a.length()-1-i];
		}
	}
	return a;
}

int main()
{
	cin >> n;
	n=result(n);
	cout << n;
}


