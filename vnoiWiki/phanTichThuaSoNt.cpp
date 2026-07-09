#include<iostream>
#include<vector>

using namespace std;

const int maxn = 1000000 + 5; //10^6 + 5
int min_prime[maxn];
void sieve(int n){
    for (int i = 2; i * i <= n; ++i) {
        if (min_prime[i] == 0) { //n?u i là s? nguyên t?
            for (int j = i * i; j <= n; j += i) {
                if (min_prime[j] == 0) {// neu ch biet dc min_prime cua j thi tiep tuc
                    min_prime[j] = i;//tat ca boi cua i co thua so nt nho nhat la i
                }
            }
        }
    }
    for (int i = 2; i <= n; ++i) {
        if (min_prime[i] == 0) {//neu i la so nguyen to
            min_prime[i] = i;//thua so nguyen to nho nhat cua i la chinh no
        }
    }
}

vector<int> factorize(int n) { //ham phan tich thua so nguyen to
    vector<int> res;
    while (n != 1) {
        res.push_back(min_prime[n]);
        n /= min_prime[n];
    }
    return res;
}

long tong_uoc(int n)
{
	long tong_uoc=1;
	int temp = 0;
	while(n!=1)
	{	
		temp++;
		if(min_prime[n]!=min_prime[n/min_prime[n]])
		{
			tong_uoc*=(temp+1);
			temp=0;
		}
		n/=min_prime[n];
	}
	return tong_uoc;
}

int main()
{
	int n;
	cin >> n;
	sieve(n);
	vector<int> temp = factorize(n);
	for(int i=0;i<temp.size();i++)
	{
		cout << temp[i] <<" ";
	}
	cout << endl << tong_uoc(n);
}


