#ifndef STACK_H
#define STACK_H

#include <iostream>
#include <exception>
#include <stdexcept>
#include <string>
#include "nosuchobject.h"
#include "node.h"
using namespace std;

template <typename T>
class Stack
{
    private:
        unsigned sz;
        Node<T>* topPtr;

        void initialize();

    public:
        Stack();
        Stack( const Stack<T>& ) throw ( bad_alloc );
        bool empty() const;
        unsigned size() const;
        T& top() const throw ( NoSuchObject );
        T pop() throw ( NoSuchObject );
        void push( const T& ) throw ( bad_alloc );
        const Stack<T>& operator=( const Stack<T>& ) throw ( bad_alloc );
        void printInternal() const;
        void clear();
        ~Stack();
}; // END Stack<T> class declaration


//BEGIN MEMBER IMPLEMENTATION

/****************************************************************************
 *                           initialize Function                            *
 ****************************************************************************/
template <typename T>
void Stack<T>::initialize()
{
    this->sz = 0;
    this->topPtr = NULL;
}

/****************************************************************************
 *                            default constructor                           *
 ****************************************************************************/
template <typename T>
Stack<T>::Stack()
{
   this->initialize();
}


/****************************************************************************
 *                            copy constructor                              *
 ****************************************************************************/
template <typename T>
Stack<T>::Stack( const Stack<T>& otherObj ) throw ( bad_alloc )
{
    //set topPtr to NULL and sz to 0
    this->initialize();
    
    //call overloaded assignment operator
    *this = otherObj;
}

/****************************************************************************
 *                            empty Function                                *
 *              returns true if the deque is empty and false otherwise      *
 ****************************************************************************/
template <typename T>
bool Stack<T>::empty() const
{
    bool isEmpty = false;
    if(topPtr == NULL && sz == 0)
    {
        isEmpty = true;
    }
    
    return isEmpty;
}

/****************************************************************************
 *                             size Function                                *
 *               return the number of elements of the deque                 *
 ****************************************************************************/
template <typename T>
unsigned Stack<T>::size() const
{
    return sz;
}

/****************************************************************************
 *                             top Function                                 *
 *         returns a reference to the object on the top of the stack        *
 ****************************************************************************/
template <typename T>
T& Stack<T>::top() const throw ( NoSuchObject )
{
    if(empty())
    {
        throw NoSuchObject("No such object exists.");
    }
    else
    {
        return topPtr->getObject();
    }
}


/****************************************************************************
 *                             pop Function                                 *
 *               remove the object at the top of the stack                  *
 ****************************************************************************/
template <typename T>
T Stack<T>::pop() throw ( NoSuchObject )
{
    if(empty())
    {
        throw NoSuchObject("No such object.");
    }
    
    //if not empty
    //pop value off top of stack
    T object = topPtr->getObject();
    Node<T>* garbage = topPtr;
    topPtr = topPtr->getNextPtr();
    delete garbage;
    
    //decrement size
    this->sz--;
    
    return object;  //return the object that was deleted
}


/****************************************************************************
 *                             push Function                                *
 *                add an object onto the top of the stack                   *
 ****************************************************************************/

template <typename T>
void Stack<T>::push( const T& object ) throw ( bad_alloc )
{
    if( empty() )
    {
        this->topPtr = new Node<T>(object);
        this->topPtr->setNextPtr(NULL);
    }
    else
    {
        Node<T>* addMe = new Node<T>(object);
        addMe->setNextPtr(this->topPtr);
        this->topPtr = addMe;
    }
    
    //increment size
    this->sz++;
}

/****************************************************************************
 *                       overloaded assignment operator                     *
 ****************************************************************************/
template <typename T>
const Stack<T>& Stack<T>::operator=( const Stack<T>& otherObj ) throw ( bad_alloc )
{
    cout << "in overloaded assignment operator" << endl;
    //check for self-assignment
    if(this != &otherObj)
    {
        //make sure any existing contents of the left hand side list are deallocated
        this->clear();
        this->initialize();
        
        // pointer to current Node of list being copied from
        Node<T>* current = otherObj.topPtr; 
        
        // pointer to last Node of list being copied to
        Node<T>* tail = NULL;
        
        // pointer to the Node object being added to the list being copied to
        Node<T>* addMe = NULL;  
        
        //while list being copied from is not empty
        while ( current != NULL && !(otherObj.empty()) )
        {
            //if list being copied to is empty
            if ( tail == NULL )
            {
                // this is the first object being appended to the list being copied to
                addMe = new Node<T>(current->getObject());

                //topPtr and tail both point to the new object (first object)
                this->topPtr = tail = addMe;
            }
            else
            {
                // this is a subsequent object being appended to the list being copied to
                addMe = new Node<T>(current->getObject());
                
                //tail's next pointer points to the new object being added
                tail->setNextPtr(addMe);
                
                //tail points to last object (the new object being added)
                tail = addMe;
            }
            
            //increment sz
            this->sz++;

            // move current to the next Node object on the list being copied from
            current = current->getNextPtr();
        } //END while loop
    }  // END tail pointer version of copy function
    
    return *this;
}

/****************************************************************************
 *                          printInternal operator                          *
 *               print the internal contents of the stack node              *
 ****************************************************************************/
template <typename T>
void Stack<T>::printInternal() const
{
    Node<T>* current = topPtr;
    int i = 0;
    //cout << "Top: " << topPtr << endl;
    //cout << "PRINTING" << endl;
    while ( current != 0 ) 
    {
        cout << "Node " << i << endl;
        //cout << "Address: " << current << endl;
        cout << "Object: " << current->getObject() << endl;
        //cout << "Next: " << current->getNextPtr() << endl;
        current = current->getNextPtr();
        i++;
    } // END while loop
    //cout << "PRINTING DONE.";
} // Stack<T>::printInternal

/****************************************************************************
 *                            clear Function                                *
 *                            clear the stack                               *
 ****************************************************************************/
template <typename T>
void Stack<T>::clear()
{
    //printInternal();   
    while ( !(this->empty()) )
    {
        this->pop();
        //printInternal();
    }   
    
    //set topPtr to NULL and sz to 0
    this->initialize();
}

/****************************************************************************
 *                              Destructor                                  *
 ****************************************************************************/
template <typename T>
Stack<T>::~Stack()
{
    cout << "in Stack destructor..." << endl;
    clear();
}
#endif