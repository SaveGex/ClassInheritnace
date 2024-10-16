#include "Pet.h"

Pet::Pet(string name, string say, string feautures, string tpy) : name{name}, say{say}, feautures{feautures}, tpe{tpy}
{
}

Pet::Pet() : Pet::Pet("", "", "", "") {

}

string Pet::display()
{
	return " name: " + name + " he say: " + say + " feautures: " + feautures;;
}

string Pet::sound()
{
	return say;
}

string Pet::show(){
	return name;
}

string Pet::type(){
	return tpe;
}

string Pet::get_feautures(){
	return feautures;
}

