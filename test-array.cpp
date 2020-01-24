// lang:cwc
#include "object.h" 
#include "string.h" 
#include "integer.h"
#include "bool.h"
#include "array.h"
#include "float.h"
#include <iostream>

/*
*  author: shah.ash@husky.neu.edu | peters.ci@husky.neu.edu
*/

void FAIL() {   exit(1);    }
void OK(const char* m) { std::cout << m << '\n'; }
void t_true(bool p) { if (!p) FAIL(); }
void t_false(bool p) { if (p) FAIL(); }
 

// Tests for String class
// Test concat
void test_concat_and_length() {
    String * s = new String("Hello");
    String * t = new String("World");
    String * u = s->concat(t);
    String * hw = new String("HelloWorld");
    t_true(s->length() == 5);
    t_true(t->length() == 5);
    t_true(u->length() == 10);

    t_true(s->equals(s));
    t_false(s->equals(t));
    t_false(s->equals(u));
    t_true(u->equals(hw));
    OK("Test concat and length passed for string");
}

// Tests for Integer class
// Test to_string and get_value
void test_to_string() {
    Integer * i = new Integer(1);
    Integer * j = new Integer(3);
    Integer * k = new Integer(1);
    int val = j->get_value();
    t_true(val == 3);

    String * s = new String("1");
    String * s = i->to_string();

    t_true(s->equals(i));
    t_true(i->equals(s));

    t_true(i->equals(k));
    t_true(k->equals(i));
    t_false(i->equals(j));
    OK("test to string for integer passed");
}

// Tests for Integer class
// Test compare_to
void test_compare_to() {
    Integer * i = new Integer(1);
    Integer * j = new Integer(3);
    Integer * k = new Integer(1);

    int negative = i->compare_to(j);
    int positive = j->compare_to(i);
    int zero = i->compare_to(k);

    t_true(negative < 0);
    t_true(positive > 0);
    t_true(zero == 0);
    OK("test compare to for integer passed");
}

// Tests for Float class
// Test to_string and get_value
void test_to_string() {
    Float * i = new Float(1.1);
    Float * j = new Float(3.1);
    Float * k = new Float(1.1);
    int val = j->get_value();
    t_true(val == 3.1);

    String * s = new String("1.1");
    String * s = i->to_string();

    t_true(s->equals(i));
    t_true(i->equals(s));

    t_true(i->equals(k));
    t_true(k->equals(i));
    t_false(i->equals(j));
    OK("test to string for float passed");
}

// Tests for Float class
// Test compare_to
void test_compare_to() {
    Float * i = new Float(1.1);
    Float * j = new Float(3.2);
    Float * k = new Float(1.1);

    int negative = i->compare_to(j);
    int positive = j->compare_to(i);
    int zero = i->compare_to(k);

    t_true(negative < 0);
    t_true(positive > 0);
    t_true(zero == 0);
    OK("test compare to for float passed");
}

// Test for an array of strings
void test_array_add() {
    String * s = new String("Hello");
    String * t = new String("World");
    String * u = new String("foo");
    Array* arr = new Array();

    arr->add(s, 0);
    arr->add(t, 2);
    arr->add(u, 1)

    String* first = arr->get(0);
    t_true(first->equals(s));
    
    String* third = arr->get(1);
    t_true(third->equals(u));
    
    String* third = arr->get(2);
    t_true(third->equals(t));

    OK("test add passed with strings");
}

// Test for an array of integers
void test_array_add_with_integers() {
    Integer * s = new Integer(1);
    Integer * t = new Integer(2);
    Integer * u = new Integer(3);
    Array* arr = new Array();

    arr->add(s, 0);
    arr->add(t, 2);
    arr->add(u, 1)

    Integer* first = arr->get(0);
    t_true(first->equals(s));
    
    Integer* second = arr->get(1);
    t_true(second->equals(u));
    
    Integer* third = arr->get(2);
    t_true(third->equals(t));

    OK("test add with integers passed");
}

// Test for an array of Floats
void test_array_add_with_floats() {
    Float * s = new Float(1);
    Float * t = new Float(2);
    Float * u = new Float(3);
    Array* arr = new Array();

    arr->add(s, 0);
    arr->add(t, 2);
    arr->add(u, 1)

    Float* first = arr->get(0);
    t_true(first->equals(s));
    
    Float* second = arr->get(1);
    t_true(second->equals(u));
    
    Float* third = arr->get(2);
    t_true(third->equals(t));

    OK("test add with floats passed");
}

// Test for an array of bools
void test_array_add_with_Bools() {
    Bool * s = new Bool(1);
    Bool * t = new Bool(2);
    Bool * u = new Bool(3);
    Array* arr = new Array();

    arr->add(s, 0);
    arr->add(t, 2);
    arr->add(u, 1)

    Bool* first = arr->get(0);
    t_true(first->equals(s));
    
    Bool* second = arr->get(1);
    t_true(second->equals(u));
    
    Bool* third = arr->get(2);
    t_true(third->equals(t));

    OK("test add with bools passed");
}

// Tests for Array class
// Test append
void test_array_append() {
    String * s = new String("Hello");
    String * t = new String("World");
    String * u = new String("foo");
    Array* arr = new Array();

    arr->append(s);
    arr->append(t);
    arr->append(u);

    String* first = arr->get(0);
    t_true(first->equals(s));

    String* second = arr->get(1);
    t_true(second->equals(t));

    String* third = arr->get(2);
    t_true(third->equals(u));

    OK("test append passed");
}

// Tests for Array class
// Test add all
void test_array_add_all() {
    String * s = new String("Hello");
    String * t = new String("World");
    String * u = new String("foo");
    Array* arr1 = new Array();

    arr1->append(s);
    arr1->append(t);
    arr1->append(u);

    Array* arr2 = new Array();
    String * a = new String("ashna");
    String * b = new String("shah");
    String * c = new String("this");
    Array* arr1 = new Array();

    arr2->append(a);
    arr2->append(b);
    arr2->append(c);

    arr1->add_all(arr2, 1);

    String* first = arr1->get(0);
    t_true(first->equals(s));

    String* second = arr1->get(1);
    t_true(second->equals(a));

    String* third = arr1->get(2);
    t_true(third->equals(b));

    String* last = arr1->get(5);
    t_true(last->equals(u));
}

// Tests for Array class
// Test clear
void test_array_clear() {
    String * s = new String("Hello");
    String * t = new String("World");
    String * u = new String("foo");
    Array* arr1 = new Array();

    arr1->append(s);
    arr1->append(t);
    arr1->append(u);

    arr->clear();
    arr_length = arr1->length();
    t_true(length->equals(0));
}

// Tests for Array class
// Test index of
void test_array_index_of() {
  String * h = new String("Hello");
  String * w = new String("World");
  String * world = new String("World");
  String * f = new String("foo");
  String * not_there = new String("not there");
  Array * arr1 = new Array();

  arr1->append(h);
  arr1->append(w);
  arr1->append(f);

  t_true(arr1->index_of(h) == 0);
  t_true(arr1->index_of(world) == 1);
  t_true(arr1->index_of(w) == 1);
  t_true(arr1->index_of(not_there) == 4);

  OK("test index of passed");
}

// Tests for Array class
// Test remove
void test_array_remove() {
  String * h = new String("Hello");
  String * w = new String("World");
  String * f = new String("foo");
  Array * arr1 = new Array();

  arr1->append(h);
  arr1->append(w);
  arr1->append(f);

  t_true(arr1->size_ == 3);
  arr1->remove(2);
  t_true(arr1->size_ == 2);
  arr1->remove(0);
  t_true(arr1->size_ == 1);
  String* element = arr1->get(0);
  t_true(element->equals(w));

  OK("test remove passed");
}

// Tests for Array class
// Test set
void test_array_set() {
  String * h = new String("Hello");
  String * w = new String("World");
  String * f = new String("foo");
  String * new_string = new String("New!"); 
  Array * arr1 = new Array();

  arr1->append(h);
  arr1->append(w);
  arr1->append(f);

  arr1->set(1, new_string);

  String* replaced = arr1->get(1);
  t_true(replaced->equals(new_string));
  t_true(arr1->size_== 3);

  OK("test set passed");
}

// Tests for Array class
// Test length
void test_array_length() {
  String * h = new String("Hello");
  String * w = new String("World");
  String * f = new String("foo");
  Array * arr1 = new Array();

  t_true(arr1->length() == 0);

  arr1->append(h);
  arr1->append(w);
  arr1->append(f);

  t_true(arr1->length() == 3);

  OK("test size passed");
}

// Tests for Array class
// Test equals
void test_array_equals() {
  String * h = new String("Hello");
  String * w = new String("World");
  String * f = new String("foo");
  Array * arr1 = new Array();

  arr1->append(h);
  arr1->append(w);
  arr1->append(f);

  Array * arr2 = new Array();

  arr2->append(h);
  arr2->append(w);
  arr2->append(f);

  Array * arr3 = new Array();
  arr3->append(h);
  t_false(arr1->equals(arr3));
  
  Array * str_list4 = nullptr;
  arr1->equals(str_list4);
  t_false(arr1->equals(str_list4));
  
  t_true(arr1->equals(arr2));

  OK("test equals passed");
}

// Tests for Array class
// Test hash
void test_array_hash() {
  String * h = new String("Hello");
  String * w = new String("World");
  String * f = new String("foo");
  Array * arr1 = new Array();

  arr1->append(h);
  arr1->append(w);
  arr1->append(f);
  size_t hash_val = arr1->hash();
  
  arr1->append(f);
  size_t hash_after_pushing = arr1->hash();

  t_true(hash_val != hash_after_pushing);
  
  OK("hash test passed");
}

// Tests for Bool class
// Test to_string
void test_bool_to_string() {
    Bool* true_boolean = new Bool(true);
    Bool* false_boolean = new Bool(false);

    String* true_bool_string = true_boolean->to_string();
    String* false_bool_string = false_boolean->to_string();

    t_true(true_bool_string->equals("true"));
    t_true(false_bool_string->equals("true"));
}

// Tests for Bool class
// Test get_value
void test_bool_get_value() {
    Bool* true_boolean = new Bool(true);
    Bool* false_boolean = new Bool(false);

    bool true_bool = true_boolean->get_value();
    bool false_bool = false_boolean->get_value();
    
    t_true(true_bool == true);
    t_true(false_bool == false);
}

// Tests for Bool class
// Test compare_to
void test_bool_compare_to() {
    Bool* true_boolean = new Bool(true);
    Bool* false_boolean = new Bool(false);

    int zero = true_boolean->compare_to(true_boolean);
    int positive = true_boolean->compare_to(false_boolean);
    int negative = false_boolean->compare_to(true_boolean);

    t_true(zero == 0);
    t_true(postive > 0);
    t_true(negative < 0);
}


