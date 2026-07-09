#include <bits/stdc++.h>
using namespace std;

string NhanChuoi(const string &a, int b) {
    int carry = 0;
    string res;
    for (int i = a.size() - 1; i >= 0; i--) {
        int p = (a[i] - '0') * b + carry;
        res.push_back(p % 10 + '0');
        carry = p / 10;
    }
    while (carry) {
        res.push_back(carry % 10 + '0');
        carry /= 10;
    }
    reverse(res.begin(), res.end());
    return res;
}

int SoSanh(const string &a, const string &b) 
{
    if(a.size() < b.size()) 
        return -1;
    else if(a.size() > b.size()) 
        return 1;
    else
	{
        for(int i = 0; i < (int)a.size(); i++) 
		{
            if(a[i] < b[i]) return -1;
            if(a[i] > b[i]) return 1;
        }
        return 0;
    }
}

string TruChuoi(string a, const string &b) {
    int n = a.size(), m = b.size(), carry = 0;
    for (int i = 0; i < m; i++) {
        int ai = a[n - 1 - i] - '0';
        int bi = b[m - 1 - i] - '0' + carry;
        if (ai < bi) {
            ai += 10;
            carry = 1;
        } else carry = 0;
        a[n - 1 - i] = ai - bi + '0';
    }
    for (int i = m; i < n && carry; i++) {
        int ai = a[n - 1 - i] - '0';
        if (ai == 0) {
            a[n - 1 - i] = '9';
            carry = 1;
        } else {
            a[n - 1 - i] = ai - 1 + '0';
            carry = 0;
        }
    }
    int pos = 0;
    while (pos + 1 < a.size() && a[pos] == '0') pos++;
    return a.substr(pos);
}

string ChiaDu(string a, const string &b) {
    string cur = "0";
    for (char c : a) {
        if (cur == "0") cur = string(1, c);
        else cur.push_back(c);
        while (SoSanh(cur, b) >= 0)
            cur = TruChuoi(cur, b);
    }

    int pos = 0;
    while (pos + 1 < cur.size() && cur[pos] == '0') pos++;
    return cur.substr(pos);
}


string gcdStr(string a, string b) 
{
    while (b != "0") {
        string r = ChiaDu(a, b);
        a = b;
        b = r;
    }
    return a;
}

string LuyThua(int base, int exp) 
{
    string res = "1";
    for (int i = 0; i < exp; i++)
        res = NhanChuoi(res, base);
    return res;
}

string ChiaChuoi(string a, const string &b) {
    if (SoSanh(a, b) < 0) return "0";
    string res = "", cur = "0";
    for (char c : a) {
        if (cur == "0") cur = string(1, c);
        else cur.push_back(c);
        int cnt = 0;
        while (SoSanh(cur, b) >= 0) {
            cur = TruChuoi(cur, b);
            cnt++;
        }
        res.push_back(cnt + '0');
    }
    int pos = 0;
    while (pos + 1 < res.size() && res[pos] == '0') pos++;
    return res.substr(pos);
}


int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int t; cin >> t;
    while (t--) 
	{
        int n, k;
        cin >> n >> k;
		if(n > k) 
		{
		    cout << "0 1" << endl;
		    continue;
		}

        string A = LuyThua(k + 1, n - 1);
        A = NhanChuoi(A, k - n + 1);
        string B = LuyThua(k, n);
        string g = gcdStr(A, B);

        A = ChiaChuoi(A, g);
        B = ChiaChuoi(B, g);
cout << A << " " << B << endl;
    }
}
