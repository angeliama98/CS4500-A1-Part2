#include <stdio.h>
#include "array.h"
#include "string.h"

void FAIL() {   exit(1);    }
void t_true(bool p) { if (!p) FAIL(); }
void t_false(bool p) { if (p) FAIL(); }

 // test equal
void test1() {
  String * s = new String("Hello");
  Array * a = new Array();
  Array * b = new Array();
  a->add(s);
  b->add(s);
  t_true(a->equals(a));
  t_true(b->equals(b));
  t_false(a->equals(b));
  printf("Test 1 passed!");
}

// test length, add, set, remove
void test2() {
  String * s = new String("Hello");
  String * t = new String("World");
  String * u = s->concat(t);
  Array * a = new Array();
  t_true(a->length() == 0);
  a->add(s);
  a->set(1,t);
  a->add(u);
  t_true(a->get(2)->equals(u));
  t_true(a->length() == 3);
  a->remove(2);
  t_true(a->length() == 2);
  t_true(a->get(1)->equals(t));
  printf("Test 2 passed!");
}
 
 // test hash_me
void test3() {
  String * s = new String("Hello");
  Array * a = new Array();
  a->add(s);
  t_true(a->hash() == a->hash());
  printf("Test 3 passed!");
}
 
 // test append, get
void test4() {
  String * s = new String("Hello");
  String * t = new String("World");
  String * u = s->concat(t);
  Array * a = new Array();
  a->add(s);
  Array * b = new Array();
  b->add(t);
  b->add(u);
  a->append(b);
  t_true(a->length() == 3);
  t_true(a->get(2)->equals(u));
  printf("Test 4 passed!");
}

 // test index_of, clear
void test5() {
  String * s = new String("Hello");
  String * t = new String("World");
  String * u = s->concat(t);
  Array * a = new Array();
  a->add(s);
  a->add(t);
  a->add(u);
  t_true(a->index_of(s) == 0);
  t_true(a->index_of(u) == 1);
  t_true(a->get(2)->equals(u));
  a->clear();
  t_true(a->length() == 0);
  printf("Test 5 passed!");
}

// make all tests run
int main() {
  test1();
  test2();
  test3();
  test4();
  test5();
  return 0;
}