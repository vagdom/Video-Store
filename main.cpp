#include <iostream>
#include <fstream>
#include <string>

#include "videoType.h"
#include "videoLinkedListType.h"

using namespace std;

void createVideoList(ifstream& infile, videoListType& videoList);
void displayMenu();

int main()
{
  videoListType videoList;
  int choice;
  char ch;
  string title;
  
  ifstream infile;
  
  //open the input file
  infile.open("videoDat.txt");
  if(!infile)
  {
    cout << "Input file does not exist" << endl;
    return 1;
  }
  
  //Create the video list
  createVideoList(infile, videoList);
  infile.close();
  
  displayMenu();
  cout << "Enter your choice: ";
  cin >> choice;
  cin.get(ch);
  cout << endl;
}
