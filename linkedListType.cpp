template<class Type>
bool linkedListType<Type>::isEmptyList()
{
  return (first == NULL);
}

template<class Type>
linkedListType<Type>::linkedListType()
{
  first = NULL;
  last = NULL;
  count = 0;
}

template<class Type>
void linkedListType<Type>::destroyList()
{
  nodeType<Type> *temp;                   //pointer to deallocate
                                          //the memory occupied
                                          //by the nodde
                                          
 while(first != NULL)                     //while there are nodes in 
                                          //the list
 {
    temp = first;                         //set temp to the current
                                          //node
                                          
    first = first->link;                  //advance first to the
                                          //next node
                                          
    delete temp;                          //deallocate the memory
                                          //occupied by temp
 }    
 
 last = NULL;                             //initialize last to NULL; 
 
 count = 0;
}
  
template<class Type>
void linkedListType<Type>::initializeList()
{
  destroyList();                          //if the list has any nodes,
                                          //delete them
}

template<class Type>
ostream& operator << (ostream& osObject, const linkedListType<Type>& list)
{
  nodeType<Type> * current;               //pointer to traverse the list
  
  current = list.first;                   //set current so that it points
                                          //to the first node
  
  while( != NULL)                         //while more data to output
  {
      osObject << current->info << " ";
    current = current->link;
  }
  
  return osObject;
  
}

template<class Type>
int linkedListType<Type>::length()
{
  return count;
}
