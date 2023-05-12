#include <iostream>
#include <string>
using namespace std;

class Restaurant {
public:
  Restaurant(); // Default constructor
  void SetName(string restaurantName);
  void SetRating(int userRating);
  void Print();

private:
  string name;
  int rating;
};

Restaurant::Restaurant() { // Default constructor gets called anytime we declare an object of that class
  name = "NoName";
  rating = -1;
}

void Restaurant::SetName(string restaurantName) {
  name = restaurantName;
}

void Restaurant::SetRating(int userRating) {
  rating = userRating;
}

void Restaurant::Print() {
  cout<<name<<" -- "<<rating<<endl;
}

int main(){
  Restaurant favLunchPlace;

  favLunchPlace.Print();

  favLunchPlace.SetName("Central Deli");
  favLunchPlace.SetRating(4);

  favLunchPlace.Print();

  return 0;
}