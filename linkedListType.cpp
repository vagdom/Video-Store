//Definition of the node

template<class Type>
struct nodeType
{
  Type info;
  nodeType<Type> *link;
};

template<class Type>
