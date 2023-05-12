#include <iostream>
#include <queue>
using namespace std;

class Solution {
public:

    // in this program gets passed the l vector of elements
    void sortNumbers(vector<int>& nums) {

        // initialize a priority_queue
        // storing ints in a vector container using greater as ordering
        priority_queue<int, vector<int>, greater<int>> p;

        // iterate through the container
        for (int i = 0; i < nums.size(); i++) {
            p.push(nums[i]);  // push elements of nums into the priority_queue
        }

        // combination of top = (access the smallest ele) and pop = (remove the smallest ele)           
        int i = 0;
        while (!p.empty()) {
            nums[i] = p.top(); // Phase 2: Extract elements from queue in non-decreasing order
            p.pop();
            i++;
        }
    }
};

int main(){
  vector<int> l = {5, 3, 2, 6, 8, 9, 0, 1};

  // create instance of the Solution class as it contains the function
  // we want to call (sortNumbers)
  Solution s;

  // print the unsorted vector
  cout<<"Unsorted vector: "<<endl;
  int i=0;
  while (i < l.size()){
    cout<<l[i]<<" ";
    i++;
  }
  cout<<endl;
  
  // call sortNumbers function on the the vector l
  s.sortNumbers(l);

  // print the sorted vector
  cout<<"Sorted vector: "<<endl;
  i=0;
  while (i < l.size()){
    cout<<l[i]<<" ";
    i++;
  }
  cout<<endl;
  
  return 0;
}