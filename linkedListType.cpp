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
  
