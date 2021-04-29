#ifndef NOSUCHOBJECT_H
#define NOSUCHOBJECT_H

#include <iostream>
#include <exception>
#include <stdexcept>
#include <string>
using std::logic_error;
using namespace std;

class NoSuchObject: public logic_error
{
    public:
        NoSuchObject(string message);
};

NoSuchObject::NoSuchObject(string message):logic_error(message)
{
    
}

#endif /* NOSUCHOBJECT_H */

