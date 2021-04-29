#ifndef DLNODE_H
#define DLNODE_H

#include <iostream>
#include <exception>
#include <stdexcept>
#include <string>
using namespace std;

template <typename T>
class DLNode 
{
    public:
        T info;
        DLNode<T>* next;
        DLNode<T>* previous;
        DLNode (T = T(), DLNode<T>* next = NULL, DLNode<T>* previous = NULL);
}; // END DLNode<T> class declaration


template <typename T>
DLNode<T>::DLNode (T info, DLNode<T>* next, DLNode<T>* previous)
{
    this->info = info;
    this->next = next;
    this->previous = previous;
}

#endif /* DLNODE_H */