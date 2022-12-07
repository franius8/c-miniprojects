#include  <iostream>
#include  <cmath>

using namespace std;

void uniquePrimeDivisors(int n);
void primeDivisors (int n);
bool primeChecker(int n);

int main () {
  int number;
  cout << "Enter a number: " << endl;
  cin >> number;
  cout << "The number is " << number << endl;
  if (primeChecker(number)) {
    cout << "The number is prime." << endl;
  } else {
    cout << "The number is not prime." << endl;
    cout << "Prime Divisors: " << endl;
  primeDivisors(number);
  cout << "Unique Prime Divisors: " << endl;
  uniquePrimeDivisors(number);
  }
  return 0;
}

void uniquePrimeDivisors(int n) {
  for (int i = 1; i < sqrt(n); i++) {
    if (n % i == 0 && primeChecker(i)) {
      cout << i << endl;
    }
  }
}

void primeDivisors (int n) {
  int temp = n;
  for (int i = 1; i < sqrt(n) + 1; i++) {
    while (temp % i == 0 && primeChecker(i)) {
      cout << i << endl;
      temp = temp / i;
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