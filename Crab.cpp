#include <iostream>
#include <cstring>
using namespace std;

void crab();

int main() {
  char input[80];
  while (true) {
    cout << "This is the Senjougahara arc of Bakemonogatari" << endl;
    cout << "Are you ready?" << endl;
    cin >> input;
    if (stcmp(input, "Yes") == 0) {
      crab();
    }
    else if (strcmp(input, "No") == 0) {
      return false;
    }
    else {
      cout << "That's an invalid answer" << endl;
    }
  }
}

void crab() {

}
