#pragma once

#include <string>

#include "Pet.h"

using namespace std;

class Dog : public Pet{
private:
	string feautures;
	
public:
	Dog(string name, string say, string feautures, string tpy);
	Dog();
	virtual string display();
	virtual string sound();
	virtual string show();
	virtual string type();
	virtual string get_feautures();
};

