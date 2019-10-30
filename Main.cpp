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
    cout<<"What arc do you want to play through?"<<endl;
    cin>>input;
    if (strcmp(input, "Hitagi Crab")==0){
      crab();
    }
    else if (strcmp(input, "Mayoi Snail")==0){
      snail();
    }
    else if (strcmp(input, "Suruga Devil")==0){
      monkey();
    }
    else if (strcmp(input, "Nadeko Snake")==0){
      snake();
    }
    else if (strcmp(input, "Tsubasa Cat")==0){
      cat();
    }
    else{
      cout << "That's an invalid option"<<endl;
    }
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
  char next[80];
  cout<<"This is a tale of a crab and Hitagi Senjougahara"<<endl;
  
  //At the end
  cout<<"Do you want to continue to the next arc?"<<endl;
  cin>>next;
  if (strcmp(next, "Yes")==0){
    snail();
  }
}

void snail(){
  cout<<"This is a tale of a snail and Hachikuji Mayoi"<<endl;
  
  
  //At the end
  cout<<"Do you want to continue to the next arc?"<<endl;
  cin>>next;
  if (strcmp(next, "Yes")==0){
    monkey();
  }
}

void monkey(){
  cout<<"This is a tale of a monkey and Suruga Kanbaru"<<endl;
  
  //At the end
  cout<<"Do you want to continue to the next arc?"<<endl;
  cin>>next;
  if (strcmp(next, "Yes")==0){
    snake();
  }
}

void snake(){
  cout<<"This is a tale of a snake and Nadeko Sengoku"<<endl;
  
  //At the end
  cout<<"Do you want to continue to the next arc?"<<endl;
  cin>>next;
  if (strcmp(next, "Yes")==0){
    cat();
  }
}

void cat(){
  cout<<"This is a tale of a cat and Tsubasa Hanekawa"<<endl;
}
