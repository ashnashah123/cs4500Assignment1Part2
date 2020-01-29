#pragma once
//lang::CwC

#include "string.h"
#include <stdlib.h>

/* This class represents an array. 
*  It contains basic methods on array based on the Java arraylist implementation.
*  There are methods to add, remove, and get elements from the list
*
*  author: shah.ash@husky.neu.edu | peters.ci@husky.neu.edu
*/
class StringArray : public Object {
public:

    // default constructor
    StringArray() {}

    // destructor
    ~StringArray() {}

    /* adds an element to the list at the given index
    * @arg o: string to be added to this array
    * @arg index: the index to add the string at 
    */
    void add(String* o, size_t index);

    /* adds an element to the end of the list
    * @arg o: string to be added to this array
    */
    void append(String* o);


    /* adds all elements of the given array to this array to the given index
    * @arg a: the array of elements to be added to this list
    * @arg index: the index at which to add the elements of the given array
    */
    void add_all(Array* a, size_t index);


    /* clears the array of all elements
    */
    void clear();

    /* gets the element in this array at the given index
    * @arg index: the index to get the string at
    */
    String* get(size_t index);

    /* gets the index of the given object, returning the index of the first match.
    * returns the size of the stringArray if the object cannot be found
    * @arg o: string to get the index of
    */
    size_t index_of(String* o);

    /* removes an element at the given index and returns it
    * @arg index: the index at which to remove the string
    */
    String* remove(size_t index);

    /* swaps an element at the given index with the given element
    * @arg index: index at which to swap the element
    * @arg o: the string to swap
    */
    String* set(size_t index, String* o);

    /* returns the number of elements in this array
    */
    size_t length();

    /*
    * Computes the hash value for this Array
    */
    size_t hash();

    /*
    * Checks equality between this array and a given string
    * @arg other: the other string to check equality to
    */
    bool equals(String* other);

};
