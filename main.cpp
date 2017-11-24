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
       cout << "Enter the title: ";
       getline(cin, title);
       cout << endl;
       if(videoList.videoSearch(title))
         cout << "Title found" << endl;
       else
         cout << "The store does not carry this title." << endl;
       break;
     case 2:
       cout << "Enter the title: ";
       getline(cin, title);
       cout << endl;
       if(videoList.videoSearch(title))
       {
         if(videoList.isVideoAvailable(title))
         {
           videoList.videoCheckOut.(title);
           cout << "Enjoy your movie: " << title << endl;
         }
         else
           cout << "The video is currently out of stock." << endl;
       }
       else
         cout << "The video is not in the store." << endl;
       break;         
     case 3:
       cout << "Enter the title: ";
       getline(cin, title);
       cout << endl;
       if(videoList.videoSearch(title))
       {
         videoList.videoCheckIn(title);
         cout << "Thanks for returning " << title << endl;
       }
       else
         cout << "This video is not from our store." << endl;
       break;
     case 4:
       cout << "Enter the title: ";
       getline(cin, title);
       cout << endl;
       if(videoList.videoSearch(title))
       {
         if(videoList.isAvailable(title))
           cout << "The video is currently in stock." << endl;
         else
           cout << "The video is out of stock." << endl;
       }
       else
         cout << "The video is not in the store." << endl;
       break;
     case 5:
       videoList.videoPrintTitle();
       break;
     case 6:
       cout << videoList << endl;
       break;
     default:
       cout << "Bad Selection" << endl;       
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
