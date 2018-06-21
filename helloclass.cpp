#include"helloclass.h"
#include<iostream>

using namespace std;

       HelloClass:: HelloClass()
	{
		cout<<"I am being created";
	}
	
	HelloClass::~HelloClass()
	{
		cout<<"I am being destroyed";
	}

	void HelloClass::sayHello()
	{
		cout<<"Hello,Class!";
	}

