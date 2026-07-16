
#include<bits/stdc++.h>

using namespace std;

const long N = 6000006; // 3*10^6
bool prime[N] = {0};

void sang(int n)
{
    for(long i=2;i<=n;i++) prime[i] = true;
    for(long i=2;i*i<=n;i++){
        if(prime[i]) {
            for(long j = i*i;j<=n;j+=i){
                prime[j] = false;
            }
        }
    }
}

int a[] = {3, 5, 7, 11, 13, 17, 19, 23, 29, 31};

int main()
{
   long long n;
   cin >> n;
   long long ans = 0;

   sang(n);

   for(long i=3;i*i<=n;i++)
   {
        if(prime[i] == true){
            for(int j=0;j<=9;j++)
            {
                if(pow(i, a[j]-1) <= n) ans++;
            }
        }
   }

    cout << ans;
    
}