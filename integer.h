#include "string.h"

/*
* This class represents a Integer. 
* It contains methods to convert to a string, get the value, 
* and compare to another integer.
*
*  author: shah.ash@husky.neu.edu | peters.ci@husky.neu.edu
*/
class Integer : public Object{
public:
    // This is the value of this Integer
    int integer_;
    
    /* Returns a string representation of this integer
    */
    String* to_string();

    /* Returns the value of this integer
    */
    int get_value();

    /* Compares this integer to a given integer
    * @arg otherInteger: the other integer to compare this integer to
    */
    int compare_to(Integer* otherInteger);
};