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
  
