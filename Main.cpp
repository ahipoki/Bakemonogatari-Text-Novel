#include <iostream>
#include <cstring>
using namespace std;

void crab();
void snail();
void monkey();
void snake();
void cat();

int main() {
  char input[80];
  while (true) {
    cout<<"This is the Senjougahara arc of Bakemonogatari"<<endl;
    cout<<"Are you ready?"<<endl;
    cin>>input;
    if (stcmp(input, "Yes") ==0){
      crab();
    }
    else if (strcmp(input, "No") ==0){
      return false;
    }
    else{
      cout<<"That's an invalid answer"<<endl;
    }
  }
}

void crab(){
  cout<<"This is a tale of a crab"<<endl;
}

void snail(){
  cout<<"This is a tale of a snail"<<endl;
}

void monkey(){
  cout<<"This is a tale of a monkey"<<endl;
}

void snake(){
  cout<<"This is a tale of a snake"<<endl;
}

void cat(){
  cout<<"This is a tale of a cat"<<endl;
}
