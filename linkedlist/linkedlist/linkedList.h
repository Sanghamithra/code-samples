/*
 * Header File #1 for CMPE 180-26 Fall 2012 Programming Exam #1.
 */

#ifndef H_LinkedListType
#define H_LinkedListType
 
#include <iostream>
#include <cassert>

using namespace std;

//Definition of the node

template <class Type>
struct nodeType
{
	Type info;
	nodeType<Type> *link;
};

//***********************************************************
// Author: D.S. Malik
//
// This class specifies the members to implement an iterator
// to a linked list.
//***********************************************************

template <class Type>
class linkedListIterator
{
public:
   linkedListIterator();
     //Default constructor
     //Postcondition: current = NULL;

   linkedListIterator(nodeType<Type> *ptr);
     //Constructor with a parameter.
     //Postcondition: current = ptr;

   Type operator*();
     //Function to overload the dereferencing operator *.
     //Postcondition: Returns the info contained in the node.

   linkedListIterator<Type> operator++();    
     //Overload the preincrement operator.
     //Postcondition: The iterator is advanced to the next 
     //               node.

   bool operator==(const linkedListIterator<Type>& right) const; 
     //Overload the equality operator.
     //Postcondition: Returns true if this iterator is equal to 
     //               the iterator specified by right, 
     //               otherwise it returns the value false.

   bool operator!=(const linkedListIterator<Type>& right) const; 
     //Overload the not equal to operator.
     //Postcondition: Returns true if this iterator is not  
     //               equal to the iterator specified by  
     //               right; otherwise it returns the value 
     //               false.

private:
   nodeType<Type> *current; //pointer to point to the current 
                            //node in the linked list
};

template <class Type>
linkedListIterator<Type>::linkedListIterator()
{
    current = NULL;
}

template <class Type>
linkedListIterator<Type>::
                  linkedListIterator(nodeType<Type> *ptr)
{
    current = ptr;
}

template <class Type>
Type linkedListIterator<Type>::operator*()
{
    return current->info;
}

template <class Type>
linkedListIterator<Type> linkedListIterator<Type>::operator++()   
{
    current = current->link;

    return *this;
}

template <class Type>
bool linkedListIterator<Type>::operator==
               (const linkedListIterator<Type>& right) const
{
    return (current == right.current);
}

template <class Type>
bool linkedListIterator<Type>::operator!=
                 (const linkedListIterator<Type>& right) const
{    return (current != right.current);
}

//***********************************************************
// Author: D.S. Malik
//
// This class specifies the members to implement the basic
// properties of a linked list. This is an abstract class.
// We cannot instantiate an object of this class.
//***********************************************************

template <class Type>
class linkedListType
{
public:
    const linkedListType<Type>& operator=
                         (const linkedListType<Type>&);
      //Overload the assignment operator.

    void initializeList(); 
      //Initialize the list to an empty state.
      //Postcondition: first = NULL, last = NULL, count = 0;

    bool isEmptyList() const;
      //Function to determine whether the list is empty. 
      //Postcondition: Returns true if the list is empty, otherwise
      //    it returns false.

    void print() const;
      //Function to output the data contained in each node.
      //Postcondition: none

    int length() const;
      //Function to return the number of nodes in the list.
      //Postcondition: The value of count is returned.

    void destroyList();
      //Function to delete all the nodes from the list.
      //Postcondition: first = NULL, last = NULL, count = 0;

    Type front() const; 
      //Function to return the first element of the list.
      //Precondition: The list must exist and must not be empty.
      //Postcondition: If the list is empty, the program terminates;
      //    otherwise, the first element of the list is returned.

    Type back() const; 
      //Function to return the last element of the list.
      //Precondition: The list must exist and must not be empty.
      //Postcondition: If the list is empty, the program
      //               terminates; otherwise, the last  
      //               element of the list is returned.

    virtual bool search(const Type& searchItem) const = 0;
      //Function to determine whether searchItem is in the list.
      //Postcondition: Returns true if searchItem is in the list,
      //    otherwise the value false is returned.

    virtual void insertFirst(const Type& newItem) = 0;
      //Function to insert newItem at the beginning of the list.
      //Postcondition: first points to the new list, newItem is
      //    inserted at the beginning of the list, last points to
      //    the last node in the list, and count is incremented by
      //    1.

    virtual void insertLast(const Type& newItem) = 0;
      //Function to insert newItem at the end of the list.
      //Postcondition: first points to the new list, newItem is
      //    inserted at the end of the list, last points to the
      //    last node in the list, and count is incremented by 1.

    virtual void deleteNode(const Type& deleteItem) = 0;
      //Function to delete deleteItem from the list.
      //Postcondition: If found, the node containing deleteItem is
      //    deleted from the list. first points to the first node,
      //    last points to the last node of the updated list, and
      //    count is decremented by 1.

    linkedListIterator<Type> begin();
      //Function to return an iterator at the beginning of the 
      //linked list.
      //Postcondition: Returns an iterator such that current is set
      //    to first.

    linkedListIterator<Type> end();
      //Function to return an iterator one element past the 
      //last element of the linked list. 
      //Postcondition: Returns an iterator such that current is set
      //    to NULL.

    linkedListType(); 
      //default constructor
      //Initializes the list to an empty state.
      //Postcondition: first = NULL, last = NULL, count = 0; 

    linkedListType(const linkedListType<Type>& otherList); 
      //copy constructor

    ~linkedListType();
      //destructor
      //Deletes all the nodes from the list.
      //Postcondition: The list object is destroyed.  

	void rotate();
	  //Function to remove the first node of a linked list and put it
      //at the end of the linked list.
	void rotatestr();
bool isvowel(char);
string piglatinform(string);

      //A cheat version of rotate()
    
protected:
    int count;   //variable to store the number of 
                 //elements in the list
    nodeType<Type> *first; //pointer to the first node of the list
    nodeType<Type> *last;  //pointer to the last node of the list

private: 
    void copyList(const linkedListType<Type>& otherList); 
      //Function to make a copy of otherList.
      //Postcondition: A copy of otherList is created and
      //               assigned to this list.
};

template<class Type>
void linkedListType<Type>::rotate(){
	nodeType<Type>* current;
	nodeType<Type>* temp=NULL;
	nodeType<Type>* last=NULL;
	current=first;
	while(current != NULL)
	{
		temp=current;
		current=current->link;
		temp->link=last;
		last=temp;

	}
	temp=first;
	first=last;
	last=temp;

	}
	
/*
template<class Type>
void linkedListType<Type>::rotatestr(){
	nodeType<Type>* current;
	nodeType<Type>*temp = NULL;
	nodeType<Type>*prev = NULL;
	string str;
	current = first;
	while (current !=NULL){
		size_t found;
		found = str.find_first_of("aeiou");
		while(found!= string::npos)

temp = current ;
current = current->link;
		temp->link = prev;
prev = temp;
	}
	temp = first;
	first = last;
	last = temp;
	}
*/
template <class Type>
bool linkedListType<Type>::isvowel(char ch)

{
	switch(ch){
	case 'A':
	case 'E':
	case 'I':
	case 'O':
	case 'U':
	case 'a':
	case 'e':
	case 'i':
	case 'o':
	case 'u':


return true;
default:
	return false;
}
}

template<class Type>

string linkedListType<Type>::piglatinform(string pstr){
 string::size_type length;
 string::size_type value;
 bool found;
 if(isvowel(pstr[0]))          // if pstr[0] is vowel ass "-way " to the end of the string
	 pstr = pstr+"-way";

 else
 {
	 pstr = pstr +'-';  //pstr[0] is not vowel , rotate pstr to end of pstr
	//pstr = rotate();
	 length = pstr.length();
	 found = false;
	 for(value = 1; value < length-1; value++)
		 if(isvowel(pstr[0])){
			 found = true;
			 break;
		 }
		 else
	// pstr = rotate();
	 if(!found)
		 pstr = pstr.substr(1,length)+"d";
	 else
		 pstr = pstr +"ay";
 }
 return pstr;
}
/*
template <class Type>
void linkedListType<Type>::rotate-cheat()
{
	Type info;
    
	if (NULL == first) {
		return;
	}
	info = front();
	deleteNode(info);
	insertLast(info);
}*/

template <class Type>
bool linkedListType<Type>::isEmptyList() const
{
    return(first == NULL);
}

template <class Type>
linkedListType<Type>::linkedListType() //default constructor
{
    first = NULL;
    last = NULL;
    count = 0;
}

template <class Type>
void linkedListType<Type>::destroyList()
{
    nodeType<Type> *temp;   //pointer to deallocate the memory
                            //occupied by the node
    while (first != NULL)   //while there are nodes in the list
    {
        temp = first;        //set temp to the current node
        first = first->link; //advance first to the next node
        delete temp;   //deallocate the memory occupied by temp
    }
    last = NULL; //initialize last to NULL; first has already
                 //been set to NULL by the while loop
    count = 0;
}

template <class Type>
void linkedListType<Type>::initializeList()
{
	destroyList(); //if the list has any nodes, delete them
}

template <class Type>
void linkedListType<Type>::print() const
{
    nodeType<Type> *current; //pointer to traverse the list

    current = first;    //set current so that it points to 
                        //the first node
    while (current != NULL) //while more data to print
    {
        cout << current->info << " ";
        current = current->link;
    }
}//end print

template <class Type>
int linkedListType<Type>::length() const
{
    return count;
}  //end length

template <class Type>
Type linkedListType<Type>::front() const
{   
    assert(first != NULL);

    return first->info; //return the info of the first node	
}//end front

template <class Type>
Type linkedListType<Type>::back() const
{   
    assert(last != NULL);

    return last->info; //return the info of the last node	
}//end back

template <class Type>
linkedListIterator<Type> linkedListType<Type>::begin()
{
    linkedListIterator<Type> temp(first);

    return temp;
}

template <class Type>
linkedListIterator<Type> linkedListType<Type>::end()
{
    linkedListIterator<Type> temp(NULL);

    return temp;
}

template <class Type>
void linkedListType<Type>::copyList
                   (const linkedListType<Type>& otherList) 
{
    nodeType<Type> *newNode; //pointer to create a node
    nodeType<Type> *current; //pointer to traverse the list

    if (first != NULL) //if the list is nonempty, make it empty
       destroyList();

    if (otherList.first == NULL) //otherList is empty
    {
        first = NULL;
        last = NULL;
        count = 0;
    }
    else
    {
        current = otherList.first; //current points to the 
                                   //list to be copied
        count = otherList.count;

            //copy the first node
        first = new nodeType<Type>;  //create the node

        first->info = current->info; //copy the info
        first->link = NULL;        //set the link field of 
                                   //the node to NULL
        last = first;              //make last point to the
                                   //first node
        current = current->link;     //make current point to
                                     //the next node

           //copy the remaining list
        while (current != NULL)
        {
            newNode = new nodeType<Type>;  //create a node
            newNode->info = current->info; //copy the info
            newNode->link = NULL;       //set the link of 
                                        //newNode to NULL
            last->link = newNode;  //attach newNode after last
            last = newNode;        //make last point to
                                   //the actual last node
            current = current->link;   //make current point 
                                       //to the next node
        }//end while
    }//end else
}//end copyList

template <class Type>
linkedListType<Type>::~linkedListType() //destructor
{
   destroyList();
}//end destructor

template <class Type>
linkedListType<Type>::linkedListType
                      (const linkedListType<Type>& otherList)
{
   	first = NULL;
    copyList(otherList);
}//end copy constructor

         //overload the assignment operator
template <class Type>
const linkedListType<Type>& linkedListType<Type>::operator=
                      (const linkedListType<Type>& otherList)
{ 
    if (this != &otherList) //avoid self-copy
    {
        copyList(otherList);
    }//end else

     return *this; 
}

#endif
