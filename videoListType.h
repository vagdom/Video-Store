#include <iostream>
#include <string>

#include "linkedListType.h"
#include "videoType.h"

using namespace std;

class videoListType: public linkedListType<videoType>
{
public:
  //Function to search the list to see whether a
  //particular title, specified by parameter title,
  //is in the store.
  //Postcondition: Returns true if the title is found;
  //               otherwise, returns false
  bool videoSearch(string vTitle);
  
  //Function to return true if at least one copy of a 
  //particular video is in the store.
  bool isVideoAvailable(string vTitle);
  
  //Function to check out a video, that is, rent a video.
  //Postcondition: copiesInStock is decremented by one.
  void videoCheckOut(string vTitle);
  
  //Function to check in a video returned by a customer.
  //Postcondition: copiesInStock is incremented by one.
  void videoCheckIn(string vTitle);
  
  //Function to determine whether a particular video is in
  //the store.
  //Postcondition: Returns true if the video is the 
  //               same as vTitle; otherwise, returns false.
  bool videoCheckTitle(string vTitle);
  
  //Function to update the number of copies of a video
  //by adding the value of the parameter num. The
  //parameter vTitle specifies the name of the video for
  //which the number of copies is to be updated.
  //Postcondition: copiesInStock = copiesInStock + num.
  void videoUpdateInStock(string vTitle, int num);
  
  //Function to reset the number of copies of a video.
  //The parameter vTitle specifies the name of the video
  //for which the number of copies is to be reset; the
  //parameter num specifies the number of copies.
  //Postcondition: copiesInStock = num
  void setcopiesInStock(string vTitle, int num)
  
  //Function to print the titles of all movies in the store.
  void videoPrintTitle();
  
private:
  //Function to search the video list for a particular
  //video, specified by the parameter vTitle.
  //Postcondition: If the video is found, the parameter
  //               found is set to true; otherwise,
  //               it is set to false. The parameter current
  //               points to the node containing the video.
  void searchVideoList(string vtitle, bool& found, nodeType<videoType>* &current); 
};
