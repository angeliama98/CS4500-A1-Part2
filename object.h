//lang::CwC
#pragma once 


#include <stdlib.h>

class Object{
	public:
		// to do
/**
* Object - represent an item that can be put into an array.
*
*@author Yiwen Ma & Viswajith Gopinathan
*/

		// constructor
		Object() { 
			// to do
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
