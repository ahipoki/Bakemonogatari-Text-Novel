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
  cout<<"This is a tale of a crab and Hitagi Senjougahara"<<endl;
}

void snail(){
  cout<<"This is a tale of a snail and Hachikuji Mayoi"<<endl;
}

void monkey(){
  cout<<"This is a tale of a monkey and Suruga Kanbaru"<<endl;
}

void snake(){
  cout<<"This is a tale of a snake and Nadeko Sengoku"<<endl;
}

void cat(){
  cout<<"This is a tale of a cat and Tsubasa Hanekawa"<<endl;
}
