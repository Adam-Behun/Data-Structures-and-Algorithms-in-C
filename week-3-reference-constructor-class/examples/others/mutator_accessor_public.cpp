#include <iostream>
#include <string>
using namespace std;

class Restaurant {
public:
void SetName(string restaurantName);
void SetRating(int userRating);
string GetName() const;
int GetRating() const;
void Print() const;

private:
string name;
int rating;

};

void Restaurant::SetName(string restaurantName) {
  name = restaurantName;
}

void Restaurant::SetRating(int userRating) {
  rating = userRating;
}

string Restaurant::GetName() const {
  return name;  
}

int Restaurant::GetRating() const {
  return rating;
}

void Restaurant::Print() const {
  cout << name << "--" << rating << endl; 
}

int main(){
  Restaurant myPlace;

  myPlace.SetName("Maria's Diner");
  myPlace.SetRating(5);

  cout<<myPlace.GetName()<<" is rated ";
  cout<<myPlace.GetRating()<<endl;

  return 0;
}