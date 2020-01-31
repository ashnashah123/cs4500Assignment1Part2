// lang:cwc
#include "object.h"
#include "string.h"
#include "array.h"
#include <iostream>
#include "intArray.h"
#include "floatArray.h"
#include "boolArray.h"
#include "stringArray.h"

/*
*  author: shah.ash@husky.neu.edu | peters.ci@husky.neu.edu
*/

void FAIL() { exit(1); }

void OK(const char *m) { std::cout << m << '\n'; }

void t_true(bool p) { if (!p) FAIL(); }

void t_false(bool p) { if (p) FAIL(); }


// Tests for String class
// Test concat
void test_concat_and_length() {
    String *s = new String("Hello");
    String *t = new String("World");
    String *u = s->concat(t);
    String *hw = new String("HelloWorld");
    t_true(s->size() == 5);
    t_true(t->size() == 5);
    t_true(u->size() == 10);

    t_true(s->equals(s));
    t_false(s->equals(t));
    t_false(s->equals(u));
    t_true(u->equals(hw));
    delete(s);
    delete(t);
    delete(u);
    delete(hw);
    OK("Test concat and length passed for string");
}

// Test for an array of strings
void test_array_add() {
    String *s = new String("Hello");
    String *t = new String("World");
    String *u = new String("foo");
    Array *arr = new Array();

    arr->add(s, 0);
    arr->add(t, 2);
    arr->add(u, 1);

    Object *first = arr->get(0);
    t_true(first->equals(s));

    Object *second = arr->get(1);
    t_true(second->equals(u));

    Object *third = arr->get(3);
    t_true(third->equals(t));

    delete(s);
    delete(t);
    delete(u);
    delete(arr);

    OK("test add passed with strings");
}

// Test for an array of integers
void test_array_add_with_integers() {
    int s = 1;
    int t = 2;
    int u = 3;
    IntArray *arr = new IntArray();

    arr->add(s, 0);
    arr->add(t, 2);
    arr->add(u, 1);

    int first = arr->get(0);
    t_true(first == s);

    int second = arr->get(1);
    t_true(second == u);

    int third = arr->get(3);
    t_true(third == t);

    delete(arr);

    OK("test add with integers passed");
}

// Test for an array of Floats
void test_array_add_with_floats() {
    float s = 1;
    float t = 2;
    float u = 3;
    FloatArray *arr = new FloatArray();

    arr->add(s, 0);
    arr->add(t, 2);
    arr->add(u, 1);

    float first = arr->get(0);
    t_true(first == s);

    float second = arr->get(1);
    t_true(second == u);

    float third = arr->get(3);
    t_true(third == t);

    delete(arr);

    OK("test add with floats passed");
}

// Test for an array of bools
void test_array_add_with_Bools() {
    bool s = true;
    bool t = true;
    bool u = false;
    BoolArray *arr = new BoolArray();

    arr->add(s, 0);
    arr->add(t, 2);
    arr->add(u, 1);

    bool first = arr->get(0);
    t_true(first == s);

    bool second = arr->get(1);
    t_true(second == u);

    bool third = arr->get(3);
    t_true(third == t);

    delete(arr);

    OK("test add with bools passed");
}

// Tests for Array class
// Test append
void test_array_append() {
    String *s = new String("Hello");
    String *t = new String("World");
    String *u = new String("foo");
    Array *arr = new Array();

    arr->append(s);
    arr->append(t);
    arr->append(u);

    Object *first = arr->get(0);
    t_true(first->equals(s));

    Object *second = arr->get(1);
    t_true(second->equals(t));

//    The array is shifted over.
    Object *third = arr->get(2);
    t_true(third->equals(u));

    delete(s);
    delete(t);
    delete(u);
    delete(arr);

    OK("test append passed");
}

// Tests for Array class
// Test add all
void test_array_add_all() {
    String *s = new String("Hello");
    String *t = new String("World");
    String *u = new String("foo");
    Array *arr1 = new Array();

    arr1->append(s);
    arr1->append(t);
    arr1->append(u);

    Array *arr2 = new Array();
    String *a = new String("ashna");
    String *b = new String("shah");
    String *c = new String("this");

    arr2->append(a);
    arr2->append(b);
    arr2->append(c);

    arr1->add_all(arr2, 1);

    Object *first = arr1->get(0);
    t_true(first->equals(s));

    Object *second = arr1->get(1);
    t_true(second->equals(a));

    Object *third = arr1->get(2);
    t_true(third->equals(b));

    Object *last = arr1->get(5);
    t_true(last->equals(u));

    delete(s);
    delete(t);
    delete(u);
    delete(a);
    delete(b);
    delete(c);
    delete(arr1);
    delete(arr2);

    OK("test array add_all passed");
}

// Tests for Array class
// Test clear
void test_array_clear() {
    String *s = new String("Hello");
    String *t = new String("World");
    String *u = new String("foo");
    Array *arr1 = new Array();

    arr1->append(s);
    arr1->append(t);
    arr1->append(u);

    arr1->clear();
    size_t arr_length = arr1->length();
    t_true(arr_length == 0);

    delete(s);
    delete(t);
    delete(u);
    delete(arr1);
    OK("test array clear passed");
}

// Tests for Array class
// Test index of
void test_array_index_of() {
    String *h = new String("Hello");
    String *w = new String("World");
    String *world = new String("World");
    String *f = new String("foo");
    String *not_there = new String("not there");
    Array *arr1 = new Array();

    arr1->append(h);
    arr1->append(w);
    arr1->append(f);

    t_true(arr1->index_of(h) == 0);
    t_true(arr1->index_of(world) == 1);
    t_true(arr1->index_of(w) == 1);
    t_true(arr1->index_of(not_there) == 4);

    delete(h);
    delete(w);
    delete(world);
    delete(f);
    delete(not_there);
    delete(arr1);

    OK("test index of passed");
}

// Tests for Array class
// Test remove
void test_array_remove() {
    String *h = new String("Hello");
    String *w = new String("World");
    String *f = new String("foo");
    Array *arr1 = new Array();

    arr1->append(h);
    arr1->append(w);
    arr1->append(f);

    t_true(arr1->length() == 3);
    arr1->remove(2);
    t_true(arr1->length() == 2);
    arr1->remove(0);
    t_true(arr1->length() == 1);
    Object *element = arr1->get(0);
    t_true(element->equals(w));

    delete(h);
    delete(w);
    delete(f);
    delete(arr1);
//    delete(element);

    OK("test remove passed");
}

// Tests for Array classpy
// Test set
void test_array_set() {
    String *h = new String("Hello");
    String *w = new String("World");
    String *f = new String("foo");
    String *new_string = new String("New!");
    Array *arr1 = new Array();

    arr1->append(h);
    arr1->append(w);
    arr1->append(f);

    arr1->set(1, new_string);

    Object *replaced = arr1->get(1);
    t_true(replaced->equals(new_string));
    t_true(arr1->length() == 3);

    delete(h);
    delete(w);
    delete(f);
    delete(arr1);
    delete(new_string);

    OK("test set passed");
}

// Tests for Array class
// Test length
void test_array_length() {
    String *h = new String("Hello");
    String *w = new String("World");
    String *f = new String("foo");
    Array *arr1 = new Array();

    t_true(arr1->length() == 0);

    arr1->append(h);
    arr1->append(w);
    arr1->append(f);

    t_true(arr1->length() == 3);

    delete(h);
    delete(w);
    delete(f);
    delete(arr1);

    OK("test size passed");
}

// Tests for Array class
// Test equals
void test_array_equals() {
    String *h = new String("Hello");
    String *w = new String("World");
    String *f = new String("foo");
    Array *arr1 = new Array();

    arr1->append(h);
    arr1->append(w);
    arr1->append(f);

    Array *arr2 = new Array();

    arr2->append(h);
    arr2->append(w);
    arr2->append(f);

    Array *arr3 = new Array();
    arr3->append(h);
    t_false(arr1->equals(arr3));

    Array *str_list4 = nullptr;
    arr1->equals(str_list4);
    t_false(arr1->equals(str_list4));

    t_true(arr1->equals(arr2));

    delete(h);
    delete(w);
    delete(f);
    delete(arr1);
    delete(arr2);
    delete(arr3);
    delete(str_list4);

    OK("test equals passed");
}

// Tests for Array class
// Test hash
void test_array_hash() {
    String *h = new String("Hello");
    String *w = new String("World");
    String *f = new String("foo");
    Array *arr1 = new Array();

    arr1->append(h);
    arr1->append(w);
    arr1->append(f);
    size_t hash_val = arr1->hash();

    arr1->append(f);
    size_t hash_after_pushing = arr1->hash();

    t_true(hash_val != hash_after_pushing);

    delete(h);
    delete(w);
    delete(f);
    delete(arr1);

    OK("hash test passed");
}

int main() {
    test_concat_and_length();
    test_array_add();
    test_array_add_with_integers();
    test_array_add_with_floats();
    test_array_add_with_Bools();
    test_array_append();
    test_array_add_all();
    test_array_clear();
    test_array_index_of();
    test_array_remove();
    test_array_set();
    test_array_length();
    test_array_equals();
    test_array_hash();
    OK("SUCCESS!\n");
    return 0;
}
