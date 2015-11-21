/*************************************************************************
	> File Name: mystring.cpp
	> Author: nkawait
	> Mail: nkwangcan@foxmail.com 
	> Created Time: Sun 22 Nov 2015 01:59:50 AM CST
 ************************************************************************/
#ifndef MY_STRING_H
#define MY_STRING_H

#include<iostream>

class MyString{
public:
	MyString();
	MyString(const MyString& rst);
	MyString& operator=(const MyString& rst);
	~MyString();

private:
	char* string_;
};

#endif
