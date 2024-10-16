#pragma once
#include "Pet.h"
class Hamster :
    public Pet
{
protected:
    string feautures;
public:
	Hamster(string name, string say, string feautures, string tpy);
	Hamster();
	virtual string display();
	virtual string sound();
	virtual string show();
	virtual string type();
	virtual string get_feautures();
};

