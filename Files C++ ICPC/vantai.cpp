#include<iostream>
#include<vector>

using namespace std;

int n, a[15];
long long S, curMoneySum;
vector <int> curMoneySet;

void printMoneySet()
{
    for (auto i : curMoneySet) cout << a[i] << " ";
    cout << "\n";
}

//Hàm d? quy
void genMoneySet(int pos)
{
    int lastIndex = (curMoneySet.empty() ? 1 : curMoneySet.back());
    for (int i = lastIndex; i <= n; i ++)
    {
        //L?y thêm 1 t? ti?n m?i vào t?p h?p
        curMoneySet.push_back(i);
        curMoneySum += a[i];

        //G?i d? quy
        if (curMoneySum >= S)
        {
            if (curMoneySum == S) printMoneySet();
        }
        else genMoneySet(pos + 1);

        //B? t? ti?n này ra kh?i t?p h?p
        curMoneySet.pop_back();
        curMoneySum -= a[i];
    }
}

int main()
{
    cin >> n >> S;
    for (int i = 1; i <= n; i ++) cin >> a[i];
    curMoneySet.clear();
    curMoneySum = 0;
    genMoneySet(1);

    return 0;
}

