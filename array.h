
//lang::CwC

#pragma once

#include "object.h"

class Array {
public:
	// to do

/**
* Array - to represent a list of objects.
*
*@author Yiwen Ma & Viswajith Gopinathan
*/

	// constructor
	Array() {
		// to do
	}

	// deconstructor
	~Array(){
		// to do
	}

	// get the length of this array
	size_t length() {
	}

	// check if this array equals to other array
	bool equals(Array *other){
	}

	// hash_me override
	size_t hash_me() {
	}

	// append two Arrays
	Array* append(Array *s){
	}

	// get the object with the index in the array
	Object* get(size_t index){

	}

	// add the obejct to the end of the array
	Object* add(Object* o){

	}

	// set the element in the given index to the given object
	void set(size_t index, Object* o){

	}

	// remove the element with the given index
	Object* remove(size_t index){

	}

	// get the index of the given object
	size_t index_of(Object* o){}

	// remove all elements in the array
	void clear(){

	}
};

//TEST
