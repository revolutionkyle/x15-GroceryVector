// Authors: Kyle Hammer, Campbell Crowley, Hamad Alkaabi

#include <iostream>
#include <vector>
using namespace std;

int main() {
  char input;
  vector<string> groceries;
  int rmitem;
  string groceryadd;
  for (;;) {
    cout << "Please pick one of the following options: \nA- Add an item to "
            "your grocery list \n S-Show full list \n R-Remove an item from "
            "your list. \n Q-Remove an item from your list "
         << endl;
    cin >> input;
    if (input == 'A' || input == 'a') {
      cout << "Please add an item." << endl;
      cin >> groceryadd;
      groceries.push_back(groceryadd);

    } else if (input == 'S' || input == 's') {
      cout << "Your grocery list is: " << endl;
      for (int i = 0; i < groceries.size(); i++) {
        cout << groceries[i] << endl;
      }

    } else if (input == 'R' || input == 'r') {
      cout << "Which item would you like to remove?" << endl;
      for (int i = 0; i < groceries.size(); i++) {
        cout << i << ". " << groceries[i] << endl;
      }
      cin >> rmitem;
      groceries.erase(groceries.begin() + rmitem);

    } else if (input == 'Q' || input == 'q') {
      return 0;
    }
  }
  return 0;
}
