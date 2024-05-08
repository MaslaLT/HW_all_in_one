#pragma once
#include <string>

enum class Gender {Man, Woman};

class Swimmer
{
private:
	std::string name;
	std::string surname;
	Gender gender;
	int height;
	int weight;
	float speed;

public:
	Swimmer(const std::string& name, const std::string& surname,Gender gender, int height, int weight, float speed);

	void display();

	void setName(std::string name);

	void setSurname(std::string surname);

	void setGender(Gender gender);

	void setHeight(int centimeters);

	void setWeight(int kilograms);

	void setSpeed(float kmH);

	std::string getName();
};
