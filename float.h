#include "string.h"

/*
* This class represents a float. 
* It contains methods to convert to a string, get the value, 
* and compare to another float.
*
*  author: shah.ash@husky.neu.edu | peters.ci@husky.neu.edu
*/
class Float : public Object{
public:
    // This is the value of this float
    int float_;
    
    /* Returns a string representation of this float
    */
    String* to_string();

    /* Returns the value of this float
    */
    float get_value();

    /* Compares this float to a given float
    * @arg otherfloat: the other float to compare this float to
    */
    int compare_to(float* otherfloat);
};