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

template<class Type>
Type linkedListType<Type>::front()
{
  assert(last != NULL);
  return first->info;                      //return the info of the
                                           //first node
}

template<class Type>
Type linkedListType<Type>::back()
{
  assert(last != NULL);
  return last->info;                       //return the info of the
                                           //last node
}

template<class Type>
bool linkedListType<Type>::search(const Type& searchItem)
{
  nodeType<Type> *current;                 //pointer to traverse the list
  bool found =  false;
  current = first;                         //set current to point to the
                                           //first node in the list
  
  while(current != NULL && !found)         //search the list
    if(current->info == searchItem)        //the item is found
      found = true;
    else
      current = current->link;             //make current point 
                                           //to the next node
  
  return found;
  
}
  
template<class Type>
void linkedListType<Type>::insertFirst(const Type& newItem)
{
  nodeType<Type> *newNode;                 //pointer to create the new
                                           //node
  
  newNode = new nodeType<Type>;            //create the new node
  
  assert(newNode != NULL);                 //if unable to allocate
                                           //memory, terminate
                                           //the program
  
  newNode->info = newItem;                 //store newItem in 
                                           //the node
  
  newNode->link = first;                   //insert newNode before
                                           //first
  
  first = newNode;                         //make first point to the
                                           //actual first node
  
  count++;                                 //increment count
  
  if(last == NULL)                         //if the list was empty, newNode is
     last = newNode;                       //also the last node in the list
  
}

template<class Type>
void linkedListType<Type>::insertlast(const Type& newItem)
{
  nodeType<Type> *newNode;                 //pointer to create the new node
  
  newNode = new NodeType<Type>;            //create the new node
  
  assert(newNode != NULL);                 //if unable to allocate memory,
                                           //terminate the program
  
  newNode->info = newItem;                 //store the new item 
