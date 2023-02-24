#include <iostream>
#include <string>
using namespace std;

int main() {
  int age;
  string movie;
  string name;

  cout<<"Your age: "<<endl;
  cin>>age;
  cin.ignore();
  
  cout<<"Your favourite movie: "<<endl;
  getline(cin, movie);
  
  cout<<"Your name: "<<endl;
  getline(cin, name);

  cout<<"Your name is: "<<name<<". Age is: "<<age<<". Favourite Movie is: "<<movie<<endl;

  return 0;
  
}