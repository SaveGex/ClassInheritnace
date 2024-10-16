#pragma once
#include "Pet.h"



class Parrot : public Pet{
protected:
	string feautures;



public:

	Parrot(string name, string say, string feautures, string tpy);
	Parrot();
	virtual string display();
	virtual string sound();
	virtual string show();
	virtual string type();
	virtual string get_feautures();
};

