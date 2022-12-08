#include  <iostream>
#include  <cmath>

using namespace std;

void goldbach(int n);
bool primeChecker(int n);

int main () {
  goldbach(20);
}

void goldbach(int n) {
  for (int i = 2; i < sqrt(n) + 1; i++) {
    if (primeChecker(i) && primeChecker(n - 1)) {
      cout << i << " " << n - 1 << endl;
    }
  }
}

bool primeChecker(int n) {
  if (n == 1) {
    return false;
  }
  if (n == 2) {
    return true;
  }
  for (int i = 2; i < sqrt(n) + 1; i++) {
    if (n % i == 0) {
      return false;
    }
  }
  return true;
}