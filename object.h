// lang::CwC

/*
*  author: shah.ash@husky.neu.edu | peters.ci@husky.neu.edu
*/

// This class represents an Object
class Object {
public:
    // This is the hash value of the object
    size_t hash_;
    
    // Computes the hash value of the object
    size_t hash();
    // A helper for hash that recomputes the hash only if needed
    virtual size_t hash_me_();
    /*
    * Checks object equality to the given object
    * @arg other: the other object
    */
    virtual bool equals(Object *other);
};