#pragma once
#include "string.h"

/*
* This class represents a Bool. 
* It contains methods to convert to a string, get the value, 
* and compare to another bool.
*
*  author: shah.ash@husky.neu.edu | peters.ci@husky.neu.edu
*/
class Bool : public Object{
public:

    // constructor with bool param
    Bool(bool b) {}

    // Destructor
    ~Bool() {}

    /* Returns a string representation of this Bool
    */
    String* to_string();

    /* Returns the value of this Bool
    */
    bool get_value();

    /* Compares this Bool to a given Bool
    * @arg otherBool: the other bool to compare this bool to
    */
    int compare_to(Bool* otherBool);

    /*
    * Computes the hash value for this Bool
    */
    size_t hash();

    /*
    * Checks equality between this bool and a given object
    * @arg other: the other object to check equality to
    */
    bool equals(Object* other);
};