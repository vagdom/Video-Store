#ifndef H_LINKEDLISTTYPE
#define H_LINKEDLISTTYPE

//Definition of the node

template<class Type>
struct nodeType
{
  Type info;
  nodeType<Type> *link;
};

template<class Type>
class linkedListType
{
  //Overload the stream insertion operator
  friend ostream& operator << (ostream&, const linkedListType<Type>&);
public:
  //Overload the assign operator
  const linkedListType<Type>& operator = (const linkedListType<Type>&);
  
  //Function to initialize the list to an empty state.
  //Postcondition: first = NULL; last = NULL;
  //               count = 0
  void initializeList();
  
  //Function to determine whether the list is empty.
  //Postcondition: Returns true if the list is empty;
  //               otherwise, returns false.
  bool isEmptyList();
  
  //Function to return the number of nodes in the
  //list.
  //Postcondition: The value of count is returned.
  int length();
    
  //Function to return the first element of the list.
  //Precondition: The list must exist and must not be empty.
  //Postcondition: If the list is empty, then the
  //               program terminates; otherwise, the first
  //               element of the list is returned.
  Type front();
  
  //Function to delete all nodes from the list.
  //Postcondition: first = NULL; last = NULL;  
  //               count = 0
  void destroyList();
  
  //Function to return the last element of the
  //list.
  //Precondition: The list must exist and must not be empty.
  //Postcondition: If the list is empty, then the program
  //               terminates; otherwise, the last element
  //               of the list is returned.
  Type back();
  
  //Function to determine whether serachItem is in the list.
  //Postcondition: Returns true if searchItem is found in
  //               the list; otherwise, returns false.
  bool search(const Type& searchItem);
  
  //Function to insert newItem in the list.
  //Postcondition: first points to the new list,
  //               newItem is inserted at the beginning
  //               of the list, last points to the last
  //               node, and count is incremented by 1.
  void insertFirst(const Type& newItem);
  
  //Function to insert newItem at the end of the list.
  //Postcondition: first points to the new list,
  //               newItem is inserted at the end of the list,
  //               last points to the last node in the list,
  //               and count is incremented by 1.
  void insertlast(const Type& newItem);
  
  //Function to delete deleteItem from the list.
  //Postcondition: If found, the node containing
  //               deleteItem is deleted from the list, first points
  //               to the first node, last points to the last
  //               node of the updated list, and count is decremented
  //               by 1.
  void deleteNode(const Type& deleteItem);
  
  //Default constructor
  //Initializes the list to an empty state.
  //Postcondition: first = NULL; last = NULL;
  //               count = 0
  linkedListType();
  
  //Copy constructor.
  linkedListType(const linkedListType<Type>& otherList);
  
  //Destructor
  //Deletes all the nodes from the list.
  //Postcondition: The list object is destroyed.
  ~LinkedListType();
  
protected:
  in count;                                 //variable to store the number of
                                            //elements in the list
  nodeType<Type> *first;                    //pointer to the first node of
                                            //the list
  nodeType<Type> *last;                     //pointer to the last node of
                                            //the list
  
private:
  //Function to make a copy of otherList.
  //Postcondition: A copy of otherList is created
  //               and assigned to the list.
  void copyList(const linkedListType<Type>& otherList);
  
};  

#endif
