#include <iostream>
#include <vector>
using namespace std;

/*12A
int main(){
    vector<int> test(3);

    for (int i=0; i<3; i++){
        test.at(i) = i;
    }

    int *it = &*test.begin();
    cout<<*it<<endl;

    return 0;
}
*/

/*12B */

int main(){
    vector<int> test(3);

    for (int i=0; i<3; i++){
        test.at(i) = i;
    }

    int *it = &test.at(0);
    // or &test[0]
    cout<<*it<<endl;

    return 0;
}