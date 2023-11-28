#include <iostream>

using namespace std;

void rotateArray(int arr[], int n, int k) {
  k %= n;

  for (int i = 0; i < k; i++) {
    int temp = arr[0];
    for (int j = 0; j < n - 1; j++) {
      arr[j] = arr[j + 1];
    }

    arr[n - 1] = temp;
  }
}

int main() {
  int n;
  cin >> n;

  int arr[n];
  for (int i = 0; i < n; i++) {
    cin >> arr[i];
  }

  int k;
  cin >> k;

  rotateArray(arr, n, k);

  for (int i = 0; i < n; i++) {
    cout << arr[i] << " ";
  }

  cout << endl;

  return 0;
}