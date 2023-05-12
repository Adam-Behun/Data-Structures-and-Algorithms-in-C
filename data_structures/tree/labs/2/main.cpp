#include <iostream>
#include "doubletree.cpp"
using namespace std;

int main() {
  doubletree b2;
  double num;
  
  while (true) {
    cout<<"Enter a double number to insert into the tree (-998 to print, -999 to exit program): ";
    cin >> num;
    if (num == -998) {
      b2.print();
      cout << endl;
      } else if (num == -999) {
      cout<<"Delete the tree."<< endl;

      // break will push the compiler into return 0
      // that calls detrusctor
      // constructor calls the destroy function on the root Node
      break;
      } else {

        // insert the element into the tree using create method
        b2.create(num);
      }
    }
    return 0;
}