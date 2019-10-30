#include <iostream>
#include <cstring>
using namespace std;

void crab();
void snail();
void monkey();
void snake();
void cat();

bool stillPlaying = true;

int main() {
  char input[80];
  while (stillPlaying==true) {
    cout<<"What arc do you want to play through?"<<endl;
    cin.getline(input, sizeof(input));
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
      cout<<"That's an invalid option"<<endl;
    }
  }
}

void crab(){
  char nextArc[80];
  cout<<"This is a tale of a crab and Hitagi Senjougahara"<<endl;
  
  //At the end
  cout<<"Do you want to continue to the next arc?"<<endl;
  cin.getline(nextArc, sizeof(nextArc));
  if (strcmp(nextArc, "Yes")==0){
    snail();
  }
  else{
    cout<<"That's an invalid option"<<endl;
  }
}

void snail(){
  char nextArc[80];
  cout<<"This is a tale of a snail and Hachikuji Mayoi"<<endl;
  
  
  //At the end
  cout<<"Do you want to continue to the next arc?"<<endl;
  cin.getline(nextArc, sizeof(nextArc));
  if (strcmp(nextArc, "Yes")==0){
    monkey();
  }
  else if (strcmp(nextArc, "No")==0){
    stillPlaying = false;
  }
  else{
    cout<<"That's an invalid option"<<endl;
  }
}

void monkey(){
  char nextArc[80];
  cout<<"This is a tale of a monkey and Suruga Kanbaru"<<endl;
  
  //At the end
  cout<<"Do you want to continue to the next arc?"<<endl;
  cin.getline(nextArc, sizeof(nextArc));
  if (strcmp(nextArc, "Yes")==0){
    snake();
  }
  else if (strcmp(nextArc, "No")==0){
    stillPlaying = false;
  }
  else{
    cout<<"That's an invalid option"<<endl;
  }
}

void snake(){
  char nextArc[80];
  cout<<"This is a tale of a snake and Nadeko Sengoku"<<endl;
  
  //At the end
  cout<<"Do you want to continue to the next arc?"<<endl;
  cin.getline(nextArc, sizeof(nextArc));
  if (strcmp(nextArc, "Yes")==0){
    cat();
  }
  else if (strcmp(nextArc, "No")==0){
    stillPlaying = false;
  }
  else{
    cout<<"That's an invalid option"<<endl;
  }
}

void cat(){
  cout<<"This is a tale of a cat and Tsubasa Hanekawa"<<endl;
  
  //At the end
  cout<<"Do you want to continue to the next arc?"<<endl;
  cin.getline(nextArc, sizeof(nextArc));
  if (strcmp(nextArc, "Yes")==0){
    
  }
  else if (strcmp(nextArc, sizeof(nextArc)){
    stillPlaying = false;
  }
  else{
    cout<<"That's an invalid option"<<endl;
  }
}
