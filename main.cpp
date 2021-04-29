#include "main.h"


int main() 
{
    try
    {
        
        Stack <int> s1;
        s1.push(1);
        s1.push(2);
        s1.push(3);
        
        cout << "Printing contents of s1: " << endl;
        s1.printInternal();             //print s1
        cout << "size: " << s1.size() << endl;
        cout << "object on the top of s1: " << s1.top() << endl;
        cout << endl;
        cout << endl;
        
        cout << "testing default constructor: Printing contents of s3:" << endl;
        Stack <int> s3;
        s3.printInternal();             //print s2
        cout << "size: " << s3.size() << endl;
        //cout << "object on the top of s3: " << s3.top() << endl;
        cout << endl;
        cout << endl;
        
        cout<< "testing copy constructor: copying s1 to s2" << endl; 
        Stack <int> s2 = s1;            //copy s1 to s2;
        
        cout << "Printing contents of s1: " << endl;
        s1.printInternal();             //print s1
        cout << "size: " << s1.size() << endl;
        cout << "object on the top of s1: " << s1.top() << endl;
        cout << endl;
        cout << endl;
        
        cout << "Printing contents of s2:" << endl;
        s2.printInternal();             //print s2
        cout << "size: " << s2.size() << endl;
        cout << "object on the top of s2: " << s2.top() << endl;
        cout << endl;
        cout << endl;
        
        
        cout << "adding 4 to s1:" << endl;
        s1.push(4);                     //modify s1
        
        cout << "Printing contents of s1: " << endl;
        s1.printInternal();             //print s1
        cout << "size: " << s1.size() << endl;
        cout << "object on the top of s1: " << s1.top() << endl;
        cout << endl;
        cout << endl;
        
        cout << "Printing contents of s2:" << endl;
        s2.printInternal();             //print s2
        cout << "size: " << s2.size() << endl;
        cout << "object on the top of s2: " << s2.top() << endl;
        cout << endl;
        cout << endl;        
        
        
        cout << "adding 5 to s2:" << endl;
        s2.push(5);                     //modify s2

        cout << "Printing contents of s1: " << endl;
        s1.printInternal();             //print s1
        cout << "size: " << s1.size() << endl;
        cout << "object on the top of s1: " << s1.top() << endl;
        cout << endl;
        cout << endl;
        
        cout << "Printing contents of s2:" << endl;
        s2.printInternal();             //print s2
        cout << "size: " << s2.size() << endl;
        cout << "object on the top of s2: " << s2.top() << endl;
        cout << endl;
        cout << endl; 
        
        
        cout << "testing overloaded assignment operator: assigning s1 to s2" << endl;
        s2 = s1;
        
        cout << "Printing contents of s1: " << endl;
        s1.printInternal();             //print s1
        cout << "size: " << s1.size() << endl;
        cout << "object on the top of s1: " << s1.top() << endl;
        cout << endl;
        cout << endl;
        
        cout << "Printing contents of s2:" << endl;
        s2.printInternal();             //print s2
        cout << "size: " << s2.size() << endl;
        cout << "object on the top of s2: " << s2.top() << endl;
        cout << endl;
        cout << endl;
        
        cout << "Popping s1 once" << endl;
        s1.pop();
        
        cout << "Printing contents of s1: " << endl;
        s1.printInternal();             //print s1
        cout << "size: " << s1.size() << endl;
        cout << "object on the top of s1: " << s1.top() << endl;
        cout << endl;
        cout << endl;
        
        cout << "Printing contents of s2:" << endl;
        s2.printInternal();             //print s2
        cout << "size: " << s2.size() << endl;
        cout << "object on the top of s2: " << s2.top() << endl;
        cout << endl;
        cout << endl;
        
        
        cout << "Popping s2 once" << endl;
        s2.pop();
        
        cout << "Printing contents of s1: " << endl;
        s1.printInternal();             //print s1
        cout << "size: " << s1.size() << endl;
        cout << "object on the top of s1: " << s1.top() << endl;
        cout << endl;
        cout << endl;
        
        cout << "Printing contents of s2:" << endl;
        s2.printInternal();             //print s2
        cout << "size: " << s2.size() << endl;
        cout << "object on the top of s2: " << s2.top() << endl;
        cout << endl;
        cout << endl;
        
        cout << "Testing empty() function:" << endl;
        if(s1.empty())
        {
            cout << "S1 is empty." << endl;
        }
        else
        {
            cout << "S1 is not empty." << endl;
        }
        if(s2.empty())
        {
            cout << "S2 is empty." << endl;
        }
        else
        {
            cout << "S2 is not empty." << endl;
        }
        
        cout << "Clearing s1" << endl;
        s1.clear();
        
        cout << "Printing contents of s1: " << endl;
        s1.printInternal();             //print s1
        cout << "size: " << s1.size() << endl;
        //cout << "object on the top of s1: " << s1.top() << endl;
        cout << endl;
        cout << endl;
        
        cout << "Printing contents of s2:" << endl;
        s2.printInternal();             //print s2
        cout << "size: " << s2.size() << endl;
        //cout << "object on the top of s2: " << s2.top() << endl;
        cout << endl;
        cout << endl;
        
        if(s1.empty())
        {
            cout << "S1 is empty." << endl;
        }
        else
        {
            cout << "S1 is not empty." << endl;
        }
        if(s2.empty())
        {
            cout << "S2 is empty." << endl;
        }
        else
        {
            cout << "S2 is not empty." << endl;
        }
        cout << "clearing s2" << endl;
        s2.clear();
        
        cout << "Printing contents of s1: " << endl;
        s1.printInternal();             //print s1
        cout << "size: " << s1.size() << endl;
        //cout << "object on the top of s1: " << s1.top() << endl;
        cout << endl;
        cout << endl;
        
        cout << "Printing contents of s2:" << endl;
        s2.printInternal();             //print s2
        cout << "size: " << s2.size() << endl;
        //cout << "object on the top of s2: " << s2.top() << endl;
        cout << endl;
        cout << endl;
        
        if(s1.empty())
        {
            cout << "S1 is empty." << endl;
        }
        else
        {
            cout << "S1 is not empty." << endl;
        }
        if(s2.empty())
        {
            cout << "S2 is empty." << endl;
        }
        else
        {
            cout << "S2 is not empty." << endl;
        }
        
        cout << "BEGIN TESTING DEQUE MEMBER FUNCTIONS" << endl;
        
        Deque <int> d1;
        cout << "testing default constructor:" << endl;
        cout << "Printing contents of d1:" << endl;
        d1.printInternal();
        cout << "size: " << d1.size() << endl;
        d1.empty() ? cout << "d1 is empty" << endl : cout << "d1 is NOT Empty" << endl;
        //cout << "object at the top of d1: " << d1.front() << endl;
        //cout << "object at the end of d1: " << d1.back() << endl; 
        cout << endl;
        cout << endl;
        cout << "testing insertFront function:" << endl;
        d1.insertFront(1);
        d1.insertFront(2);
        d1.insertFront(3);
        
        cout << "Printing contents of d1:" << endl;
        d1.printInternal();
        cout << "size: " << d1.size() << endl;
        cout << "object at the top of d1: " << d1.front() << endl;
        cout << "object at the end of d1: " << d1.back() << endl;
        
        d1.empty() ? cout << "d1 is empty" << endl : cout << "d1 is NOT Empty" << endl;
        cout << endl;
        cout << endl;
        
        cout << "testing insertBack function" << endl;
        d1.insertBack(1);
        d1.insertBack(2);
        d1.insertBack(3);
        
        cout << "Printing contents of d1:" << endl;
        d1.printInternal();
        cout << "size: " << d1.size() << endl;
        cout << "object at the top of d1: " << d1.front() << endl;
        cout << "object at the end of d1: " << d1.back() << endl;
        d1.empty() ? cout << "d1 is empty" << endl : cout << "d1 is NOT Empty" << endl;
        cout << endl;
        cout << endl;
        
        cout << "deleting last three elements of d1:" << endl;
        d1.removeBack();
        d1.removeBack();
        d1.removeBack();
        
        cout << "Printing contents of d1:" << endl;
        d1.printInternal();
        cout << "size: " << d1.size() << endl;
        cout << "object at the top of d1: " << d1.front() << endl;
        cout << "object at the end of d1: " << d1.back() << endl;
        d1.empty() ? cout << "d1 is empty" << endl : cout << "d1 is NOT Empty" << endl;
        cout << endl;
        cout << endl;
        
        cout << "testing copy constructor: initializing d2 to d1:" << endl;
        Deque <int> d2 = d1;
        
        cout << "Printing contents of d1:" << endl;
        d1.printInternal();
        cout << "size: " << d1.size() << endl;
        cout << "object at the top of d1: " << d1.front() << endl;
        cout << "object at the end of d1: " << d1.back() << endl;
        d1.empty() ? cout << "d1 is empty" << endl : cout << "d1 is NOT Empty" << endl;
        cout << endl;
        cout << endl;
        
        cout << "Printing contents of d2:" << endl;
        d2.printInternal();
        cout << "size: " << d2.size() << endl;
        cout << "object at the top of d1: " << d2.front() << endl;
        cout << "object at the end of d1: " << d2.back() << endl;
        d2.empty() ? cout << "d2 is empty" << endl : cout << "d2 is NOT Empty" << endl;
        cout << endl;
        cout << endl;
        
        cout << "testing removeFront function: removing top object in d2:" << endl;
        cout << "object removed: " << d2.removeFront() << endl;
        
        cout << "Printing contents of d1:" << endl;
        d1.printInternal();
        cout << "size: " << d1.size() << endl;
        cout << "object at the top of d1: " << d1.front() << endl;
        cout << "object at the end of d1: " << d1.back() << endl;
        d1.empty() ? cout << "d1 is empty" << endl : cout << "d1 is NOT Empty" << endl;
        cout << endl;
        cout << endl;
        
        cout << "Printing contents of d2:" << endl;
        d2.printInternal();
        cout << "size: " << d2.size() << endl;
        cout << "object at the top of d1: " << d2.front() << endl;
        cout << "object at the end of d1: " << d2.back() << endl;
        d2.empty() ? cout << "d2 is empty" << endl : cout << "d2 is NOT Empty" << endl;
        cout << endl;
        cout << endl;
        
        cout << "Testing removeBack on d1:" << endl;
        cout << "object removed: " << d1.removeBack() << endl;
        cout << "Printing contents of d1:" << endl;
        d1.printInternal();
        cout << "size: " << d1.size() << endl;
        cout << "object at the top of d1: " << d1.front() << endl;
        cout << "object at the end of d1: " << d1.back() << endl;
        d1.empty() ? cout << "d1 is empty" << endl : cout << "d1 is NOT Empty" << endl;
        cout << endl;
        cout << endl;
        
        cout << "Printing contents of d2:" << endl;
        d2.printInternal();
        cout << "size: " << d2.size() << endl;
        cout << "object at the top of d1: " << d2.front() << endl;
        cout << "object at the end of d1: " << d2.back() << endl;
        d2.empty() ? cout << "d2 is empty" << endl : cout << "d2 is NOT Empty" << endl;
        cout << endl;
        cout << endl;
        
        cout << "testing overloaded assignment operator: assigning d1 to d2" << endl;
        d2 = d1;
        cout << "Printing contents of d1:" << endl;
        d1.printInternal();
        cout << "size: " << d1.size() << endl;
        cout << "object at the top of d1: " << d1.front() << endl;
        cout << "object at the end of d1: " << d1.back() << endl;
        d1.empty() ? cout << "d1 is empty" << endl : cout << "d1 is NOT Empty" << endl;
        cout << endl;
        cout << endl;
        
        cout << "Printing contents of d2:" << endl;
        d2.printInternal();
        cout << "size: " << d2.size() << endl;
        cout << "object at the top of d1: " << d2.front() << endl;
        cout << "object at the end of d1: " << d2.back() << endl;
        d2.empty() ? cout << "d2 is empty" << endl : cout << "d2 is NOT Empty" << endl;
        cout << endl;
        cout << endl;
        
        cout << "testing insertBack on d2: adding 1 to the end of d2" << endl;
        d2.insertBack(1);
        cout << "Printing contents of d1:" << endl;
        d1.printInternal();
        cout << "size: " << d1.size() << endl;
        cout << "object at the top of d1: " << d1.front() << endl;
        cout << "object at the end of d1: " << d1.back() << endl;
        d1.empty() ? cout << "d1 is empty" << endl : cout << "d1 is NOT Empty" << endl;
        cout << endl;
        cout << endl;
        
        cout << "Printing contents of d2:" << endl;
        d2.printInternal();
        cout << "size: " << d2.size() << endl;
        cout << "object at the top of d1: " << d2.front() << endl;
        cout << "object at the end of d1: " << d2.back() << endl;
        d2.empty() ? cout << "d2 is empty" << endl : cout << "d2 is NOT Empty" << endl;
        cout << endl;
        cout << endl;
        
        cout << "testing insertFront function on d2: adding 5 to the top of d2:" << endl;
        d2.insertFront(5);
        cout << "Printing contents of d1:" << endl;
        d1.printInternal();
        cout << "size: " << d1.size() << endl;
        cout << "object at the top of d1: " << d1.front() << endl;
        cout << "object at the end of d1: " << d1.back() << endl;
        d1.empty() ? cout << "d1 is empty" << endl : cout << "d1 is NOT Empty" << endl;
        cout << endl;
        cout << endl;
        
        cout << "Printing contents of d2:" << endl;
        d2.printInternal();
        cout << "size: " << d2.size() << endl;
        cout << "object at the top of d1: " << d2.front() << endl;
        cout << "object at the end of d1: " << d2.back() << endl;
        d2.empty() ? cout << "d2 is empty" << endl : cout << "d2 is NOT Empty" << endl;
        cout << endl;
        cout << endl;
        
        cout << "testing overloaded assignment operator: assigning d2 to d1" << endl;
        d1 = d2;
        cout << "Printing contents of d1:" << endl;
        d1.printInternal();
        cout << "size: " << d1.size() << endl;
        cout << "object at the top of d1: " << d1.front() << endl;
        cout << "object at the end of d1: " << d1.back() << endl;
        d1.empty() ? cout << "d1 is empty" << endl : cout << "d1 is NOT Empty" << endl;
        cout << endl;
        cout << endl;
        
        cout << "Printing contents of d2:" << endl;
        d2.printInternal();
        cout << "size: " << d2.size() << endl;
        cout << "object at the top of d1: " << d2.front() << endl;
        cout << "object at the end of d1: " << d2.back() << endl;
        d2.empty() ? cout << "d2 is empty" << endl : cout << "d2 is NOT Empty" << endl;
        cout << endl;
        cout << endl;
        
        cout << "testing removeFront and removeBack on d2. removing front and back on d2" << endl;
        d2.removeBack();
        d2.removeFront();
        cout << "Printing contents of d1:" << endl;
        d1.printInternal();
        cout << "size: " << d1.size() << endl;
        cout << "object at the top of d1: " << d1.front() << endl;
        cout << "object at the end of d1: " << d1.back() << endl;
        //d1.empty()?cout << "d1 is empty" << endl:cout << "d1 is NOT Empty" << endl;
        cout << endl;
        cout << endl;
        
        cout << "Printing contents of d2:" << endl;
        d2.printInternal();
        cout << "size: " << d2.size() << endl;
        cout << "object at the top of d1: " << d2.front() << endl;
        cout << "object at the end of d1: " << d2.back() << endl;
      ///  d2.empty()?cout << "d2 is empty" << endl:cout << "d2 is NOT Empty" << endl;
        //cout << endl;
        //cout << endl;
        cout << "clearing contents of d1" << endl;
        d1.clear();
        cout << "Printing contents of d1:" << endl;
        d1.printInternal();
        cout << "done printing:" << endl;
        cout << "size: " << d1.size() << endl;
        //cout << "object at the top of d1: " << d1.front() << endl;
        //cout << "object at the end of d1: " << d1.back() << endl;
        d1.empty() ? cout << "d1 is empty" << endl : cout << "d1 is NOT Empty" << endl;
        cout << endl;
        cout << endl;
        
        cout << "Printing contents of d2:" << endl;
        d2.printInternal();
        cout << "size: " << d2.size() << endl;
        cout << "object at the top of d1: " << d2.front() << endl;
        cout << "object at the end of d1: " << d2.back() << endl;
        d2.empty() ? cout << "d2 is empty" << endl : cout << "d2 is NOT Empty" << endl;
        cout << endl;
        cout << endl;
        
        
        cout << "clearing contents of d2:" << endl;
        d2.clear();
        
        cout << "Printing contents of d1:" << endl;
        d1.printInternal();
        cout << "size: " << d1.size() << endl;
        //cout << "object at the top of d1: " << d1.front() << endl;
        //cout << "object at the end of d1: " << d1.back() << endl;
        d1.empty() ? cout << "d1 is empty" << endl : cout << "d1 is NOT Empty" << endl;
        cout << endl;
        cout << endl;
        
        cout << "Printing contents of d2:" << endl;
        d2.printInternal();
        cout << "done printing:" << endl;
        cout << "size: " << d2.size() << endl;
        //cout << "object at the top of d2: " << d2.front() << endl;
        //cout << "object at the end of d2: " << d2.back() << endl;
        d2.empty()? cout << "d2 is empty" << endl : cout << "d2 is NOT Empty" << endl;
        cout << endl;
        cout << endl; 
        
        cout << "assigning d1 to d2, with d2 being empty" << endl;
        d1.insertFront(1);
        d1.insertFront(2);
        d1.insertFront(3);
        d2 = d1;
        cout << "Printing contents of d1:" << endl;
        d1.printInternal();
        cout << "size: " << d1.size() << endl;
        cout << "object at the top of d1: " << d1.front() << endl;
        cout << "object at the end of d1: " << d1.back() << endl;
        d1.empty() ? cout << "d1 is empty" << endl : cout << "d1 is NOT Empty" << endl;
        cout << endl;
        cout << endl;
        
        cout << "Printing contents of d2:" << endl;
        d2.printInternal();
        cout << "size: " << d2.size() << endl;
        cout << "object at the top of d2: " << d2.front() << endl;
        cout << "object at the end of d2: " << d2.back() << endl;
        d2.empty()? cout << "d2 is empty" << endl : cout << "d2 is NOT Empty" << endl;
        cout << endl;
        cout << endl; 
        
        cout << "BEGIN TESTING FOR EXCEPTIONS" << endl;
        
        cout << "BEGIN TESTING FOR EXCEPTIONS IN STACK CLASS" << endl;
        
        cout << "defining Stack s4..." << endl;
        Stack <char> s4;
        cout << "defined..." << endl;
        cout << endl;
        //cout << "calling top function. Should throw NoSuchObject exception..." << endl;
        //s4.top();
        //cout << "calling pop function. Should throw NoSuchObject exception..." << endl;
        //s4.pop();
        
        cout << "BEGIN TESTING FOR EXCEPTIONS IN DEQUE CLASS" << endl;
        cout << "defining Deque d3..." << endl;
        Deque <char> d3;
        cout << "defined..." << endl << endl;
        
        //cout << "calling removeFront function. Should throw NoSuchObject exception..." << endl;
        //d3.removeFront();
        
        //cout << "calling removeBack function. Should throw NoSuchObject exception..." << endl;
        //d3.removeBack();
        
        //cout << "calling front function. Should throw NoSuchObject exception..." << endl;
        //d3.front();
        
        //cout << "calling back function. Should throw NoSuchObject exception..." << endl;
        //d3.back();
        

    }
    
    
    catch(NoSuchObject &e)
    {
        cout << e.what() << endl;
    }
    catch (bad_alloc &e)
    {
        cout << e.what() << endl;
    }
    catch (...)
    {
        cout << "Unknown exception caught in main." << endl;
    }

    return 0;
}