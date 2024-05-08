#include "SwimmerFactory.h"
#include "FileReader.h"
#include "SwimmerCsvParser.h"
#include "Swimmer.h"
#include <stdexcept>
#include <iostream>

Gender SwimmerFactory::stringToGender(const std::string& gender) noexcept(false)
{
	if (gender == "Man") {
		return Gender::Man;
	}
	if (gender == "Woman") {
		return Gender::Woman;
	}
	else {
		throw std::invalid_argument("Unknown gender: " + gender);
	}
}

Swimmer SwimmerFactory::createFromTokens(std::vector<std::string> tokens)
{
	std::string name = tokens[0];
	std::string surname = tokens[1];
	Gender gender = this->stringToGender(tokens[2]);
	int height = stoi(tokens[3]);
	int weight = stoi(tokens[4]);
	float speed = stof(tokens[5]);
	return Swimmer(name, surname, gender, height, weight, speed);
}

std::vector<Swimmer> SwimmerFactory::createFromCsv(std::string filename, int skipLine)
{
	FileReader fileReader(filename);
	if (fileReader.isOpen()) {
		std::cout << "File Opened" << std::endl;
	}
	fileReader.skipLines(skipLine);
	SwimmerCsvParser swimmerParser;
	std::vector<Swimmer> swimmersVector;

	while (!fileReader.isEOF()) {
		fileReader.readLine();
		std::string line = fileReader.getLine();
		std::vector<std::string> tokens = swimmerParser.parseLine(line);
		Swimmer swimmer = this->createFromTokens(tokens);
		swimmersVector.push_back(swimmer);
	}

	return swimmersVector;
}