#include "Parrot.h"


Parrot::Parrot(string name, string say, string feautures, string tpy) : Pet::Pet(name, say, feautures, tpy), feautures{ feautures }
{
}

Parrot::Parrot() : Parrot::Parrot("","","","")
{
}

string Parrot::display()
{
	return " name: " + name + " he say: " + say + " feautures: " + feautures;;
}

string Parrot::sound()
{
	return say;
}

string Parrot::show() {
	return name;
}

string Parrot::type() {
	return tpe;
}

string Parrot::get_feautures() {
	return feautures;
}


