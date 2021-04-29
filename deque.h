#ifndef DEQUE_H
#define DEQUE_H

#include <iostream>
#include <exception>
#include <stdexcept>
#include <string>
#include "nosuchobject.h"
#include "dlnode.h"
using namespace std;

template <typename T>
class Deque
{
    private:
       unsigned sz;
       DLNode<T>* frontPtr;
       DLNode<T>* backPtr;

       void initialize();
       
    public:
       Deque();
       Deque( const Deque<T>& ) throw ( bad_alloc );
       bool empty() const;
       unsigned size() const;
       void insertFront( const T& ) throw ( bad_alloc );
       void insertBack( const T& ) throw ( bad_alloc );
       T removeFront() throw ( NoSuchObject );
       T& front() const throw ( NoSuchObject );
       T removeBack() throw ( NoSuchObject );
       T& back() const throw ( NoSuchObject );
       const Deque<T> &operator=( const Deque<T>& ) throw ( bad_alloc );
       void clear();
       ~Deque();
       void printInternal() const;
}; // END Deque class declaration


/****************************************************************************
 *                           initialize Function                            *
 ****************************************************************************/
template <typename T>
void Deque<T>::initialize()
{
    this->sz = 0;
    this->frontPtr = NULL;
    this->backPtr = NULL;
} //END initialize function


/****************************************************************************
 *                            default constructor                           *
 ****************************************************************************/
template <typename T>
Deque<T>::Deque()
{
    this->initialize();
} //END default constructor

/****************************************************************************
 *                            copy constructor                              *
 ****************************************************************************/
template <typename T>
Deque<T>::Deque( const Deque<T>& otherObj) throw ( bad_alloc )
{
    cout << "Inside copy constructor for class LL" << endl;

    //set frontPtr and backPtr to NULL and set sz to 0
    this->initialize();
    
    //calling overloaded assignment
    *this = otherObj;
} //END copy constructor

/****************************************************************************
 *                            empty Function                                *
 *              returns true if the deque is empty and false otherwise      *
 ****************************************************************************/
template <typename T>
bool Deque<T>::empty() const
{
    bool isEmpty = false;
    
    if(frontPtr == NULL && backPtr == NULL && sz == 0)
    {
        isEmpty = true;
    }

    return isEmpty;
} //END empty function


/****************************************************************************
 *                             size Function                                *
 *               return the number of elements of the deque                 *
 ****************************************************************************/
template <typename T>
unsigned Deque<T>::size() const
{
    return sz;
} //END size function

/****************************************************************************
 *                          insertFront Function                            *
 *         insert a new element "info" at the beginning of the deque        *
 ****************************************************************************/
template <typename T>
void Deque<T>::insertFront( const T& info ) throw ( bad_alloc )
{
    if( empty() )
    {
        DLNode<T>* newNode = new DLNode<T>(info,NULL,NULL);
        this->frontPtr = newNode;
        this->backPtr = newNode;
    }
    else
    {
        DLNode<T>* newNode = new DLNode<T>(info,frontPtr,NULL);
        this->frontPtr->previous = newNode;
        this->frontPtr = newNode;
    }
    this->sz++;
} //END insertFront function

/****************************************************************************
 *                          insertBack Function                             *
 *            insert a new element "info" at the end of the deque           *
 ****************************************************************************/
template <typename T>
void Deque<T>::insertBack( const T& info) throw ( bad_alloc )
{
    if(empty())
    {
        DLNode<T>* newNode = new DLNode<T>(info,NULL,NULL);
        this->frontPtr = newNode;
        this->backPtr = newNode;
    }
    else
    {
        DLNode<T>* newNode = new DLNode<T>(info,NULL,backPtr);
        this->backPtr->next = newNode;
        this->backPtr = newNode;
    }
    this->sz++;
} //END insertBack function


/****************************************************************************
 *                          removeFront Function                            *
 *         remove the first element of the deque; an error occurs           *
 *         if deque is empty                                                *
 ****************************************************************************/
template <typename T>
T Deque<T>::removeFront() throw ( NoSuchObject )
{
    
    if( empty() )
    {
        throw NoSuchObject("No such object.");
    }
    
    //if not empty
    T object = this->frontPtr->info;       //store the object that was deleted
    DLNode<T>* garbage = frontPtr;         //set garbage pointer to front of the deque
    this->frontPtr = this->frontPtr->next; //set frontPtr to the next object in the deque
    delete garbage;                        //delete the first object of the deque
    if (frontPtr != NULL)                  //if object deleted is not the only object in the deque
    {
        this->frontPtr->previous = NULL;
    }
    else                                   //if deque is empty after deleting the object
    {
        frontPtr = NULL;
        backPtr = NULL;
    }
    garbage = NULL;                        //set garbage pointer to NULL
    this->sz--;                            //decrement size of deque
    cout << "new size: " << sz << endl;
    
    return object;                         //return the object that was deleted
} //END removeFront function

/****************************************************************************
 *                              front Function                              *
 *         return the first element of the deque; an error occurs           *
 *         if deque is empty                                                *
 ****************************************************************************/
template <typename T>
T& Deque<T>::front() const throw ( NoSuchObject )
{
    if(empty())
    {
        throw NoSuchObject("No such object.");
    }
    else
    {
        return frontPtr->info;
    }
} //END front function


/****************************************************************************
 *                          removeBack Function                             *
 *          remove the last element of the deque; an error occurs           *
 *          if deque is empty                                               *
 ****************************************************************************/
template <typename T>
T Deque<T>::removeBack() throw ( NoSuchObject )
{
    if(empty())
    {
        throw NoSuchObject("No such object.");
    }
    
    //if not empty
    T object = this->backPtr->info;
    DLNode<T>* garbage = this->backPtr;
    this->backPtr = this->backPtr->previous;
    delete garbage;
    
    if(backPtr != NULL)                 //if deleted object was not the only one on the deque
    {
        this->backPtr->next = NULL;
    }
    else                                //if deque is empty after deleting the object
    {
        backPtr = NULL;
        frontPtr = NULL;
    }
    garbage = NULL;
    this->sz--;                        //decrement size
    
    return object;
} //END removeBack function

/****************************************************************************
 *                             back Function                                *
 *         return the first element of the deque; an error occurs           *
 *         if deque is empty                                                *
 ****************************************************************************/
template <typename T>
T& Deque<T>::back() const throw ( NoSuchObject )
{
    if(empty())
    {
        throw NoSuchObject("No such object.");
    }
    else
    {
        return backPtr->info;
    }
} //END back function

/****************************************************************************
 *                          overloaded assignment operator                  *
 ****************************************************************************/
template <typename T>
const Deque<T>& Deque<T>::operator=( const Deque<T>& otherObj ) throw ( bad_alloc )
{
    //check for self-assignment
    if(this != &otherObj)
    {
        //make sure any existing contents of the left hand side list are deallocated
        cout << "calling clear" << endl;
        cout << "current size: " << sz << endl;
        this->clear();
        cout << "new size: " << sz << endl;
        this->initialize();
        //this->printInternal();
        // pointer to current Node of list being copied from
        DLNode<T>* current = otherObj.frontPtr;
        
        //while list being copied from is not empty
        while( current != NULL && !(otherObj.empty()) )
        {
            this->insertBack(current->info);
            current = current->next;
            cout << "updated size: " << sz << endl;
        }
    }
    
    return *this;  
}  // END overloaded assignment operator


/****************************************************************************
 *                            clear Function                                *
 *                            clear the deque                               *
 ****************************************************************************/
template <typename T>
void Deque<T>::clear()
{
    int i = 0;
    while( !(this->empty()) )
    {
        this->removeFront();
        //cout << "i: " << i << endl;
        i++;
    }
    cout << "Objects removed: " << i << endl;
    //set frontPtr and backPtr to NULL and size to 0;
    this->initialize();
} //END clear function

/****************************************************************************
 *                              destructor                                  *
 ****************************************************************************/
template <typename T>
Deque<T>::~Deque()
{
    cout << "inside Deque destructor..." << endl; 
    clear();
} //END destructor


template <typename T>
void Deque<T>::printInternal() const
{
    DLNode<T>* current = this->frontPtr;
    int i = 0;
    //cout << "Top: " << topPtr << endl;
    //cout << "PRINTING" << endl;
    while ( current != 0 ) 
    {
        cout << "Node " << i << endl;
        //cout << "Address: " << current << endl;
        cout << "Object: " << current->info << endl;
        //cout << "Next: " << current->next << endl;
        current = current->next;
        i++;
    } // while
    //cout << "PRINTING DONE." << endl;
} // Stack<T>::printInternal

#endif