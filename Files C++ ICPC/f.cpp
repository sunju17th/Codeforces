#include <iostream>
#define MAX_N 100005

using namespace std;

int arr[MAX_N];
int n, k;

void solve() {
  // T?o m?t m?ng temp ð? lýu tr? tr?ng thái c?a m?ng arr sau m?i thao tác.
  int temp[MAX_N];
  int i = 0;
  int j = 0;

  // B?t ð?u th?c hi?n các thao tác.
  for (int i = 0; i < k; i++) {
    // Gi?m giá tr? c?a ph?n t? ð?u tiên ði 1.
    arr[0]--;

    // N?u giá tr? c?a ph?n t? ð?u tiên b?ng 0, th? xóa nó kh?i m?ng.
    if (arr[0] == 0) {
      for (int j = 0; j < n - 1; j++) {
        arr[j] = arr[j + 1];
      }
      n--;
    } else {
      // N?u giá tr? c?a ph?n t? ð?u tiên l?n hõn 0, th? chuy?n nó ð?n cu?i m?ng.
      temp[j++] = arr[0];

      for (int j = 0; j < n - 1; j++) {
        arr[j] = arr[j + 1];
      }
    }
  }

  // Sao chép m?ng temp vào m?ng arr.
  for (int i = 0; i < n; i++) {
    arr[i] = temp[i];
  }
}

int main() {
  cin >> n >> k;

  for (int i = 0; i < n; i++) {
    cin >> arr[i];
  }

  solve();

  for (int i = 0; i < n; i++) {
    cout << arr[i] << " ";
  }

  cout << endl;

  return 0;
}
