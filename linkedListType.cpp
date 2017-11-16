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
  
