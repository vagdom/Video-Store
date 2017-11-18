#include <iostream>
#include <string>

using namespace std;

void videoListType::searchVideoList(string vTitle, bool& found, nodeType<videoType>* &current)
{
  found = false;                                //set found to false
  
  if(first == NULL)                             //list is empty
  { 
    current = first;                            //set current point to first
                                                //node in the list
    found = false;                              //set found to false
    
    while(!found && current != NULL)            //search the list
      if(current->info.checkTitle(vTitle)       //the item is found
        found = true;
      else
        current = current->link;                //make current point
  }                                             //to the next node 
}  

bool videoListType::isVideoAvailable(string vTitle)
{
  bool found;
  nodeType<videoType> *location;
  
  searchVideoList(vTitle, found, location);
  
  if(found)
    found = (location->info.getNoOfCopiesInStock() > 0);
  else
    found = false;
  
  return found;
}
           
void videoListType::videoCheckIn(string vTitle)
{
  bool found = false;
  nodeType<videoType> *location;
  
  searchVideoList(vTitle, found, location);       //search the list
  
  if(found)
    location->info.checkIn();
  else
    cout << "The store does not carry this video." << endl; 
           
}  
