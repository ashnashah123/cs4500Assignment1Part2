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
    // This is the list which contains the characters of the string
    char* val_; 
    // This is the length of the string 
    size_t size_;
    
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
};