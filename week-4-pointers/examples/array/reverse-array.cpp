#include <iostream>
using namespace std;

int main(){
    int a[10], *p = NULL, *q = NULL, temp;

    // sets p equal to a[0], iterates to the end of the array of fixed size
    cout<<"Input some numbers: "<<endl;
    for (p = a; p < a + 10; p++){

        // sets the value of what p points to
        cin>>*p;
    }

    // p at a[0], q at a[9], p<q, p increments, q decrements
    for (p = a, q = a + 9; p < q; p++, q--){

        // temp assigned with a[0]
        temp = *p;

        // a[0] assigned with a[9]
        *p = *q;

        // a[9] assigned with temp
        *q = temp;
    }

    for (p = a; p < a + 10; p++){
        cout<<*p<<" ";
    }

    return 0;
}