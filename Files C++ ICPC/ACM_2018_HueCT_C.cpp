#include <bits/stdc++.h>
using namespace std;


int cmp(const string &a, const string &b) {
    if (a.size() != b.size()) return (a.size() < b.size() ? -1 : 1);
    if (a == b) return 0;
    return (a < b ? -1 : 1);
}

string add(const string &a, const string &b) {
    string A = a, B = b;
    reverse(A.begin(), A.end());
    reverse(B.begin(), B.end());
    string res;
    int carry = 0;
    for (int i = 0; i < (int)max(A.size(), B.size()) || carry; i++) {
        int sum = carry;
        if (i < (int)A.size()) sum += A[i] - '0';
        if (i < (int)B.size()) sum += B[i] - '0';
        res.push_back(char(sum % 10 + '0'));
        carry = sum / 10;
    }
    while (res.size() > 1 && res.back() == '0') res.pop_back();
    reverse(res.begin(), res.end());
    return res;
}

string sub(const string &a, const string &b) {
    string A = a, B = b;
    reverse(A.begin(), A.end());
    reverse(B.begin(), B.end());
    string res;
    int carry = 0;
    for (int i = 0; i < (int)A.size(); i++) {
        int x = A[i] - '0' - carry;
        if (i < (int)B.size()) x -= B[i] - '0';
        if (x < 0) { x += 10; carry = 1; }
        else carry = 0;
        res.push_back(x + '0');
    }
    while (res.size() > 1 && res.back() == '0') res.pop_back();
    reverse(res.begin(), res.end());
    return res;
}

string bigMod2(const string &a, const string &b) {
    vector<string> kb(11);
    kb[0] = "0";
    for (int i = 1; i <= 10; i++) kb[i] = add(kb[i-1], b);

    string hold = "";
    for (char ch : a) {
        // append 1 ch? s?
        if (hold == "0") hold = string(1, ch);
        else hold.push_back(ch);

        int k = 1;
        while (cmp(hold, kb[k]) >= 0 && k <= 10) k++;
        hold = sub(hold, kb[k-1]);

        if (hold == "") hold = "0";
    }
    return hold;
}

string bigGCD(string a, string b) {
    while (!(b == "0")) {
        string r = bigMod2(a, b);
        a = b;
        b = r;
    }
    return a;
}

int main() {
    string a, b;
    cin >> a >> b;
    cout << bigGCD(a, b) << "\n";
}

