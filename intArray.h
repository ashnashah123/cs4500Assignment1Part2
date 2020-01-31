#pragma once
//lang::CwC

#include "object.h"
#include <stdlib.h>

/* This class represents an integer array.
*  It contains basic methods on array based on the Java arraylist implementation.
*  There are methods to add, remove, and get elements from the list
*
*  author: shah.ash@husky.neu.edu | peters.ci@husky.neu.edu
*/
class IntArray : public Object{
public:

    // default constructor
    IntArray() {}

    // destructor
    ~IntArray() {}

    /* adds an element to the list at the given index
    * @arg o: object to be added to this array
    * @arg index: the index to add the object at 
    */
    void add(int o, size_t index);

    /* adds an element to the end of the list
    * @arg o: object to be added to this array
    */
    void append(int o);


    /* adds all elements of the given array to this array to the given index
    * @arg a: the array of elements to be added to this list
    * @arg index: the index at which to add the elements of the given array
    */
    void add_all(Array* a, size_t index);


    /* clears the array of all elements
    */
    void clear();

    /* gets the element in this array at the given index
    * @arg index: the index to get the object at
    */
    int get(size_t index);

    /* gets the index of the given object
    * @arg o: object to get the index of
    */
    size_t index_of(int o);

    /* removes an element at the given index and returns it. Shifts elements left accordingly.
    * @arg index: the index at which to remove the object
    */
    int remove(size_t index);

    /* swaps an element at the given index with the given element
    * @arg index: index at which to swap the element
    * @arg o: the object to swap
    */
    int set(size_t index, int o);

    /* returns the number of elements in this array
    */
    size_t length();

    /*
    * Computes the hash value for this Array
    */
    size_t hash();

    /**
     * Checks object equality to the given object
     * @param other the object to compare to
     */
    virtual bool equals(Object *other);

};
