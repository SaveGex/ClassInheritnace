#include <iostream>
#include <string>
#include "Dog.h"
#include "Pet.h"
#include "Parrot.h"
#include "Hamster.h"
#include "Cat.h"
using namespace std;


string display(Pet& obj) {
	return string(" sound: " + obj.sound() + " name: " + obj.show() + " type: " + obj.type() + " feautures: " + obj.get_feautures());
}

int main() {

	Dog dog("Dog", "woof", "can be dog", "dogs");
	cout << display(dog);

	Parrot parrot("Parrot", "everything", "Can flying", "angry birds");
	cout <<"\n"<< display(parrot);

	Hamster ham("Ham", "quiet", "life not more than 5 years", "mouses");
	cout << "\n" << display(ham);

	Cat cat("Cat", "meaw", "can sleep almost all day", "cats");
	cout << display(cat);
	return 0;
}