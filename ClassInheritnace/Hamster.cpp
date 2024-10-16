#include "Hamster.h"

Hamster::Hamster(string name, string say, string feautures, string tpy) : Pet::Pet(name, say, feautures, tpy), feautures{feautures}{

}

Hamster::Hamster() : Hamster::Hamster("", "", "", "") {

}

	string Hamster::display()
	{
		return " name: " + name + " he say: " + say + " feautures: " + feautures;;
	}

	string Hamster::sound()
	{
		return say;
	}

	string Hamster::show() {
		return name;
	}

	string Hamster::type() {
		return tpe;
	}

	string Hamster::get_feautures() {
		return feautures;
	}
