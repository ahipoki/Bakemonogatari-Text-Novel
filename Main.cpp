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
  cout<<"Hitagi Senjougahara occupies the position of \"the girl who's "<<endl;
  cout<<"always ill\" in our class."<<endl;
  cin.ignore();
  cout<<"She's not expected to participate in P.E., of course, and is "<<endl;
  cout<<"even allowed to suffer morning and school-wide assemblies "<<endl;
  cout<<"in the shade, alone, as a precaution "<<endl;cout<<"against anemia or something."<<endl;
  cin.ignore();
  cout<<"Though we've been in the same class my first, my second, and "<<endl;
  cout<<"this, my third and final year of high school, I've never once "<<endl;
  cout<<"seen her engaged in any sort of vigorous activity."<<endl;
  cin.ignore();
  cout<<"She's a regular at the nurse's room, and she arrives late, "<<endl;
  cout<<"leaves early, or simply doesn't show up to school because she "<<endl;
  cout<<"has to visit her primary care hospital, time and again."<<endl;
  cin.ignore();
  cout<<"To the point where it's rumored in jest that she lives there."<<endl;
  cin.ignore();
  
  //At the end
  cout<<"Do you want to continue to the next arc?"<<endl;
  cin.getline(nextArc, sizeof(nextArc));
  if (strcmp(nextArc, "Yes")==0){
    snail();
  }
  else if (strcmp(nextArc, "No")==0){
    stillPlaying = false;
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
  char nextArc[80];
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
