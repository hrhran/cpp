#include <iostream>
using namespace std;

bool isPalindrome(int x) {
  int digit, rev = 0, original = x;
  while (x > 0) {
    digit = x % 10;
    rev = rev * 10 + digit;
    x /= 10;
  }
  cout << rev << original;
  return rev == original;
}

int main() {
  int n;
  cin >> n;
  if (isPalindrome(n)) {
    cout << "Palindrome" << endl;
  } else {
    cout << "Not a Palindrome" << endl;
  }
  return 0;
}
