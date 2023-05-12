#include <iostream>
using namespace std;

int main() {
  int yourFriends;
  int totalFriends;

  cout << "Enter the number of people you know: ";
  cin >> yourFriends;
  totalFriends = yourFriends;
  cout << "You know " << totalFriends << " people. \n";
  totalFriends = yourFriends * totalFriends;
  cout << "Those people know " << yourFriends << " people.\n";
  totalFriends = totalFriends * yourFriends;
  cout << "And they know " << totalFriends << " people.\n";

  return 0;
}