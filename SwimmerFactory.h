#pragma once
#include <string>
#include <vector>
#include "Swimmer.h"

class SwimmerFactory
{
private:
	Gender stringToGender(const std::string& gender);

public:
	Swimmer createFromTokens(std::vector<std::string> tokens);

	std::vector<Swimmer> createFromCsv(std::string filename, int skipLine);
};

