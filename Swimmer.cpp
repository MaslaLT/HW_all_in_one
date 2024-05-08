#include <iostream>
#include "Swimmer.h"

using std::string;
using std::cout;
using std::endl;


Swimmer::Swimmer(const string& name, const string& surname,Gender gender, int height, int weight, float speed)
	: name(name), surname(surname),gender(gender), height(height), weight(weight), speed(speed) {};


void Swimmer::display() {
	cout << this->name << " " << this->surname << " " << "Gender" << " " << this->height << " " << this->weight << " " << this->speed << endl;
}

void Swimmer::setName(string name) {
	this->name = name;
	getName();
}

void Swimmer::setSurname(string surname) {
	this->surname = surname;
}

void Swimmer::setGender(Gender gender) {
	this->gender = gender;
}

void Swimmer::setHeight(int centimeters) {
	this->height = centimeters;
}

void Swimmer::setWeight(int kilograms) {
	this->weight = kilograms;
}

void Swimmer::setSpeed(float kmH) {
	this->speed = kmH;
}

string Swimmer::getName() {
	return this->name;
}
