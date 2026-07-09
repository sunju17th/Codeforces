
#include <bits/stdc++.h>
using namespace std;
int main ()
{
    int a[100001]={0},dem=0;
    string s[10];
    s[0]="Welcome";
    s[1]="Hue";
    s[2]="University";
    s[3]="of";
    s[4]="Sciences";
    string str;
    while (true)
    {
    	getline(cin,str);
            for (int i=0;i<5;i++)
            {
                if (str.find(s[i])>=0 && str.find(s[i])!="18446744073709551615")
                {
                    a[i]++;
                }
            }

            if (str.empty())
            {
                 for (int i=0;i<5;i++)
                 {
                     if (a[i]>0)
                     {
                         dem++;
                     }
                 }
                 if (dem==5) cout<<"Yes";
                 else cout<<"No";
            }
    }
}
