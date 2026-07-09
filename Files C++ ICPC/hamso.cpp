#include <iostream>
#include <vector>

using namespace std;

const int mod = 1e9 + 7;

// Ð?nh ngh?a ma tr?n
vector<vector<int> > A = {({3, 2, 1}), ({1, 0, 0}), ({0, 2, 0})};
vector<vector<int>> B = {{0, 2, 0}, {1, 0, 0}, {0, 0, 1}};

// Hàm tính toán ma tr?n
vector<vector<int>> multiplyMatrix(vector<vector<int>> &mat1, vector<vector<int>> &mat2) {
  int rows = mat1.size();
  int cols = mat2[0].size();
  vector<vector<int>> result(rows, vector<int>(cols));

  for (int i = 0; i < rows; ++i) {
    for (int j = 0; j < cols; ++j) {
      for (int k = 0; k < mat1[0].size(); ++k) {
        result[i][j] = (result[i][j] + mat1[i][k] * mat2[k][j]) % mod;
      }
    }
  }

  return result;
}

// Hàm tính toán d?y s?
vector<int> calculateSequence(int a, int b, int c, int d, int n) {
  // Kh?i t?o ma tr?n
  vector<vector<int>> Fn = {{a}, {b}, {c}};
  vector<vector<int>> Gn = {{d}, {c}, {b}};

  // Tính toán ma tr?n
  for (int i = 2; i < n; ++i) {
    Fn = multiplyMatrix(A, Fn) + multiplyMatrix(B, Gn);
    Gn = multiplyMatrix(A, Gn);
  }

  return Fn;
}
int main() {
  int a, b, c, d, n;

  // Nh?p d? li?u
  cin >> a >> b >> c >> d >> n;

  // Tính toán d?y s?
  vector<int> Fn = calculateSequence(a, b, c, d, n);

  // L?y k?t qu?
  cout << Fn[0] << endl;

  return 0;
}

