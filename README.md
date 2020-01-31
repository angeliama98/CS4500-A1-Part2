Part 2 description:

In part 2, we have an API write in CwC. The API includes an Object class and an Array class. String class is the child of Object.


array.h:
Array contains an array of Objects and the size of the array. The Array class has the following methods:
1) length(): get the size of the array
2) equals(Array *other): check if this array equals to the given array
3) hash_me(): override hash()
4) append(Array *s): append two Arrays together
5) get(Array *s): get the object index in the array
6) add(Object* o): add the object to the end of the array
7) set(size_t index, Object* o): set the element in the given index to the given object
8) remove(size_t index): remove the element with the given index
9) index_of(Object* o): get the index of the given object. If the object does not exist in the array, return the index that is larger than size_.
10) clear(): remove all elements in the array


object.h:
Object contains the following methods:
1) equals(Object *other): check if this object equals to the given object
2) hash(): generate hash code for this object
3) virtual hash_me(): override hash()

helper.h:
It includes all kinds of print for int, double, char*, size_t and String. We can call the function using 'println'.

string.h: 
provides length, equals, hash_me, compare and concat functionalities.

test-array.cpp:
contains all the tests and a main to run the program.
