#include <iostream>
#include <vector>

using namespace std;

// Hàm t?m d?y con tãng dài nh?t
vector<int> longestIncreasingSubsequence(const vector<int>& arr) {
    int n = arr.size();
    vector<int> lis(n, 1); // M?ng lýu chi?u dài c?a d?y con tãng dài nh?t t?i m?i v? trí

    // Xây d?ng m?ng lis
    for (int i = 1; i < n; i++) {
        for (int j = 0; j < i; j++) {
            if (arr[i] > arr[j] && lis[i] < lis[j] + 1) {
                lis[i] = lis[j] + 1;
            }
        }
    }

    // T?m chi?u dài l?n nh?t trong lis
    int maxLength = 0;
    for (int i = 0; i < n; i++) {
        maxLength = max(maxLength, lis[i]);
    }

    // Xây d?ng d?y con tãng dài nh?t
    vector<int> result;
    for (int i = n - 1; i >= 0; i--) {
        if (lis[i] == maxLength) {
            result.push_back(arr[i]);
            maxLength--;
        }
    }

    reverse(result.begin(), result.end());

    return result;
}

int main() {
    // Nh?p d?y s?
    cout << "Nhap so phan tu cua day: ";
    int n;
    cin >> n;

    cout << "Nhap day so: ";
    vector<int> arr(n);
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    // T?m d?y con tãng dài nh?t
    vector<int> result = longestIncreasingSubsequence(arr);

    // In k?t qu?
    cout << "Day con tang dai nhat: ";
    for (int num : result) {
        cout << num << " ";
    }
    cout << endl;

    return 0;
} 
