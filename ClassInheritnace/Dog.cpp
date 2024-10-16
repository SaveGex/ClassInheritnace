#include "Dog.h"

Dog::Dog(string name, string say, string feautures, string tpy) : Pet::Pet(name, say, feautures, tpy), feautures{ feautures }{

}

Dog::Dog() : Dog::Dog("", "", "", "") {
	
}

string Dog::display()
{
	return " name: " + name + " he say: " + say + " feautures: " + feautures;;
}

string Dog::sound()
{
	return say;
}

string Dog::show() {
	return name;
}

string Dog::type() {
	return tpe;
}

string Dog::get_feautures() {
	return feautures;
}
