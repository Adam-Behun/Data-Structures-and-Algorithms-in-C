#include <iostream>
using namespace std;

int main() {
  int fileCount;

  cin >> fileCount;

  if (fileCount >= 97) {
    cout << "Too many files" << endl;
  }
  else if (fileCount >= 29 && fileCount < 97) {
    cout << "Full-sized file cabinet" << endl;
  }
  else if (fileCount > 0 && fileCount <= 28) {
    cout << "Medium file cabinet" << endl;
  }
  else {
    cout << "Invalid number" << endl;
  }
  return 0;
}