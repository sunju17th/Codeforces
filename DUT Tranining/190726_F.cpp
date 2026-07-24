// 2024-2025 ICPC Latin American Regional Programming Contest - Problem F

#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n, m;
    cin >> m >> n;
    if(n == 1 && m == 1)
    {
        cout << "X";
        return 0;
    }

    if(n == m)
    {
        cout << "*";
        return 0;
    }


    if(m > n || n > 3*m)
    {
        cout << "*";
        return 0;
    }

    if(n > m && n < 2*m - 1) 
    {
        cout << "*";
        return 0;
    }

    if(n == 2*m-1)
    {
        for(int i=0;i<n;i++)
        {
            if(i%2) cout << "-";
            else cout << "X";
        }
        return 0;
    }

    if(n == 2*m) 
    {
        for(int i=0;i<m;i++)
            cout << "X-";

        return 0;
    }

    if(n == 3*m) 
    {
        for(int i=0;i<m;i++)
            cout << "-X-";
        return 0;
    }

    if(n > 2*m && n < 3*m)
    {
        int tempMinus = n - m;
        int tempX = m;
        while(tempMinus != tempX)
        {
            cout << "-X-";
            tempMinus-=2;
            tempX--;
        }

        while(tempX!=0)
        {
            cout << "X-";
            tempX--;
        }
        return 0;
    }
}