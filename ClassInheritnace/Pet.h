#pragma once

#include <string>

using namespace std;

class Pet{
protected:
	string name;
	string say;
	string feautures;
	string tpe;

	

public:
	Pet(string name, string say, string feautures, string type);
	Pet();
	virtual string display();
	virtual string sound();
	virtual string show();
	virtual string type();
	virtual string get_feautures();



};

