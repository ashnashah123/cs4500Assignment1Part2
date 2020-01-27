#pragma once
// lang::CwC

/*
* This class represents a String. 
* It contains a method to add characters, grow the string, 
* and to concat strings together.
*
*  author: shah.ash@husky.neu.edu | peters.ci@husky.neu.edu
*/
class String : public Object {
public: 
    // default constructor
    String() {}

    // Constructor with const char* param
    String(const char* c) {}

    // constructor with char* param
    String(char* c) {}

    // destructor
    ~String() {}

    /* Concatenates this String with the given String together and returns the new String
    * @arg s: the String to concatenate to this String
    */
    String* concat(String* s);
    
    /* Adds a character to this string
    * @arg c: the character to be added to this string
    */
    void addChar(char* c);

    /* Returns the length of this string. 
    */
    int length();

    /*
    * Computes the hash value for this String
    */
    size_t hash();

    /*
    * Checks equality between this string and a given object
    * @arg other: the other object to check equality to
    */
    bool equals(Object* other);
};