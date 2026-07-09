#include <iostream>
#include<string.h>
#include<math.h>

using namespace std;

bool is_prime(int n) {
  if (n <= 1) {
    return false;
  }

  for (int i = 2; i <= sqrt(n); i++) {
    if (n % i == 0) {
      return false;
    }
  }

  return true;
}

bool is_palindrome(int n) {
  string s = to_string(n);
  return s == string(s.rbegin(), s.rend());
}

int main() {
  int T;
  cin >> T;

  for (int i = 0; i < T; i++) {
    int A, B;
    cin >> A >> B;

    int count = 0;
    for (int j = A; j <= B; j++) {
      if (is_prime(j) && is_palindrome(j)) {
        count++;
      }
    }

    cout << count << endl;
  }

  return 0;
}
