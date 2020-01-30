
#pragma once
#include <cstring>

#include "object.h"

class String : public Object{
public:
	char *str_; //owned -> means responsible for deleting
	size_t size_;

/**
* String construct.
*
*@param str
*/


	String(const char* str) : Object() {
		size_ = strlen(str);

		str_ = new char[size_ + 1];

		strcpy(str_, str);
	}

	~String(){
		delete[] str_;
	}

	size_t length() {
		return size_;
	}

	bool equals(Object *other){
		String *other1 = dynamic_cast<String *>(other);

		if(other1 == nullptr) return false;
		
		return !strcmp(this->str_, other1->str_);
	}

	size_t hash_me() {
		size_t res = 0;
		for(int i = 0; i < size_; i++){
			res += str_[i];
		}
		return res;
	}

	//String *s = new String("Hello");
	//...
	//delete s;
};