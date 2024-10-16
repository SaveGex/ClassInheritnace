#include "Cat.h"

Cat::Cat(string name, string say, string feautures, string tpy) : Pet::Pet(name, say, feautures, tpy), feautures{ feautures }
{
}

Cat::Cat() : Cat::Cat("", "", "", "") {

}


string Cat::display()
{
	return " name: " + name + " he say: " + say + " feautures: " + feautures;;
}

string Cat::sound()
{
	return say;
}

string Cat::show() {
	return name;
}

string Cat::type() {
	return tpe;
}

string Cat::get_feautures() {
	return feautures;
}
