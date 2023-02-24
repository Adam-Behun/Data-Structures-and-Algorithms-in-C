#include <iostream>
using namespace std;

int main() {
  int userChannel;
  char channelType;

  cin >> userChannel;
  if ((userChannel >= 2) && (userChannel <= 499)) {
    channelType = 's';
  }
  else if ((userChannel >= 1002) && (userChannel <= 1499)) {
    channelType = 'h';
  }
  else {
    channelType = 'e';
  }
  cout << "Channel type: "<< channelType << endl;

  return 0;
}