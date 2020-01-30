
#pragma once
#include <cstring>

#include "object.h"

class String : public Object{
public:
	// to do

/**
* String construct.
*
*@param str
*/


	String(const char* str) : Object() {
		// to do
	}

	~String(){
		// to do
	}

	size_t length() {
		// to do
	}

	bool equals(Object *other){
		// to do
        return false;
	}

	size_t hash_me() {
		// to do
        return 0;
	}
};