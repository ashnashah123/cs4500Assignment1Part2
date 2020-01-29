// lang::CwC
#pragma once
#include <cstdlib>

/*
*  author: shah.ash@husky.neu.edu | peters.ci@husky.neu.edu
*/


// This class represents an Object
class Object {
public:

    // Constructor
    Object() {}

    // Destructor
    virtual ~Object() {}

    // Computes the hash value of the object
    virtual size_t hash();
    /*
    * Checks object equality to the given object
    * @arg other: the other object
    */
    virtual bool equals(Object *other);
};