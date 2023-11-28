#include <iostream>

using namespace std;

void rotateArrayLeft(int arr[], int n) {
  int temp = arr[0];
  for (int i = 0; i < n - 1; i++) {
    arr[i] = arr[i + 1];
  }

  arr[n - 1] = temp;
}

int main() {
  int n;
  cin >> n;

  int arr[n];
  for (int i = 0; i < n; i++) {
    cin >> arr[i];
  }

  rotateArrayLeft(arr, n);

  for (int i = 0; i < n; i++) {
    cout << arr[i] << " ";
  }

  cout << endl;

  return 0;
}