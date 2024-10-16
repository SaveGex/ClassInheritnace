#pragma once
#include "Pet.h"
class Cat :
    public Pet
{
protected:
    string feautures;
public:
	Cat(string name, string say, string feautures, string tpy);
	Cat();
	virtual string display();
	virtual string sound();
	virtual string show();
	virtual string type();
	virtual string get_feautures();
};

