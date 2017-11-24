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
  
  //Process the request
  while(choice != 9)
  {
   switch(choice)
   {
     case 1:
     case 2:
     case 3:
     case 4:
     case 5:
     case 6:
     default: 
       
   }
    
  }
  
  return 0;
}

void createVideoList(ifstream& infile, videoListType& videoList)
{
  string Title;
  string Star1;
  string Star2;
  string Producer;
  string Director;
  string ProductionCo;
  char ch;
  int InStock;
  
  videoType newVideo;
  
  getline(infile, Title);
  while(infile)
  {
    getline(infile, Star1);
    getline(infile, Star2);
    getline(infile, Producer);
    getline(infile, Director);
    getline(infile, ProductionCo);
    infile >> InStock;
    infile.get(ch);
    
    newVideo.setVideoInfo(Title, Start1, Star2, Producer,
                          Director, ProductionCo, InStock);
    videoList.insertFirst(newVideo);
    
    getline(infile, Title);
  }
}

void displayMenu()
{
  cout << "Select one of the following " << endl;
  cout << "1: To check whether a particular video is in the store " << endl;
  cout << "2: To check out a video " << endl;
  cout << "3: To check in a video  " << endl;
  cout << "4: To check whether a particular title is in stock " << endl;
  cout << "5: To print the titles of all the videos " << endl;
  cout << "6: To print a list of all the videos " << endl;
  cout << "9: To exit" << endl;
}
