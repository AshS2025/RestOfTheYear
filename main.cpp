#include <iostream>
#include "Parent.h"
#include "videoGame.h"
#include <cstring>
#include <vector>

using namespace std;

int main (){

  vector<Parent*> media;
  
  int year;
  cin >> year;
  cin.ignore(10,'\n');
  int rating;
  cin >> rating;
  cin.ignore(10, '\n');
  char* publisher;
  cin.getline(publisher, 100);
  char* title;
  cin.getline(title, 100);
  videoGame* vg = new videoGame (title, year, rating, publisher);

  media.push_back(vg);
  
  cout << vg->getTitle() << endl;
  cout << vg->getYear() << endl;
  cout << vg->getRating() << endl;
  cout << vg->getPublisher() << endl;
}

void searchMedia (vector<Parent*>&media){
  cout << "do you want to search by title or year? (type t or y)" << endl;
  char input;
  cin >> input;
  if (input == 'y'){
    int findId;
    cout << "type the id of the student you want to find" << endl;
    cin >> findId;
    for (vector<Parent*> :: iterator it = media.begin(); it != media.end(); it++){
      if ((*it)->getYear() == findId){
	//call parent print stuff function?
	it->printStuff();
      }
    }
  }
  if (input == 't'){
    char input[100];
    cout << "type the title of the media you want to find" << endl;
    cin >> input;
    for (vector<Parent*> :: iterator it = media.begin(); it != media.end(); it++) {
      if (strcmp(input, ((*it)->getTitle())) == 0){
	it->printStuff();
      }
    }
  }

}
    

  void deleteMedia (vector<Parent*>&media){
    cout << "do you want to delete by title or year? (type t or y)" << endl;
    char input;
    cin >> input;
    if (input == 'y'){
      int findId;
      cout << "type the year of the media you want to delete" << endl;
      cin >> findId;
      for (vector<Parent*> :: iterator it = media.begin(); it != media.end(); it++){
	if ((*it)->year == findId){
	  //delete stuff
	}
  }
