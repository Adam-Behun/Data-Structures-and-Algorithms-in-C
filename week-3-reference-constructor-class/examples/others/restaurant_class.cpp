#include <iostream>
#include <string>
using namespace std;


class Restaurant {
public:
    void SetName(string restaurantName);
    void SetRating(int userRating);
    void Print();
  
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

void Restaurant::Print() {
  cout << name << " -- " << rating << endl;
}

int main() {
  Restaurant favLunchPlace;
  Restaurant favDinnerPlace;

  favLunchPlace.SetName("Central Deli");
  favLunchPlace.SetRating(4);

  favDinnerPlace.SetName("Friends Cafe");
  favDinnerPlace.SetRating(5);

  cout << "My favorite restaurants: " << endl;
  favLunchPlace.Print();
  favDinnerPlace.Print();

  return 0;
}