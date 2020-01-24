//lang::CwC
#pragma once 


#include <stdlib.h>

class Object{
	public:
		size_t hash_;

/**
* Object - represent an item that can be put into an array.
*
*@author Yiwen Ma & Viswajith Gopinathan
*/

		// constructor
		Object() { 
			hash_ = 0;
		}
		// deconstructor
		virtual ~Object() { }

		// check if this equals to other
		virtual bool equals(Object *other){
		}

		// generate hash code
		size_t hash() {
		}

		// hash code cast
		virtual size_t hash_me() {
		}
};