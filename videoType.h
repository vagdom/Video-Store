#ifndef H_videoType
#define H_videoType

using namespace std;

class videoType
{
  friend ostream& operator << (ostream&, const videoType&);
  
public:
  void setVideoInfo(string title, string star1,
                    string star2, string producer,
                    string director, string productionCo,
                    int setInStock);
  //Function to set the details of a vide.
  //Private data members are set according to the parameters.
  //Postcondition: videoTitle = title
  //               movieStar1 = star1
  //               movieStar2 = star2
  //               movieProducer = producer
  //               movieDirector =  director
  //               movieProductionCo = productionCo
  //               copiesInStock = setInStock
  
  int getNoOfCopiesInStock() const;
  //Function to check the number of copies in stock.
  //Postcondition: The value of the data member copiesInStock
  //               is returned.
  
  void checkOut();
  //Function to rent a video.
  //Postcondition: The number of copies in stock is decremented
  //               by one.
  
  void checkIn();
  //Function to check in a video.
  //Postcondition: The number of copies in stock is incremented
  //               by one.
  
  void printTitle() const;
  //Function to print the title of a movie.
  
  void printInfo() const;
  //Function to print the details of a movie.
  //Postcondition: The title of the movie, stars, director, and
  //               so on are displayed on the screen.

};
#endif
