//lang::Cpp

#pragma once


#include <iostream>

#include "string.h"
#include "strList.h"

// print integer
void print(int i){
	std::cout << i;

}

// print double
void print(double d){
	std::cout <<d ;
}

// print char*
void print(const char* str) {
	std::cout << str;
}

// print size_t
void print(size_t i) {
	std::cout << i;
}

// print String
void print(String *str) {
	std::cout << str;
}

// println integer
void println(int i){
	print(i);
	std::cout <<"\n";
}

// println double
void println(double d){
	print(d);
	std::cout <<"\n";
}

// println char*
void println(const char* str){
	print(str);
	std::cout << "\n";
}

// println size_t
void println(size_t i){
	print(i);
	std::cout << "\n";
}

// println String
void println(String *str){
	//print(str);
	std::cout<< str->str_ << "\n"; 
}

