#pragma once
#include "CsvParser.h"
#include <string>
#include <vector>

class SwimmerCsvParser : public CsvParser {
public:
	std::vector<std::string> parseLine(const std::string& line) override;
};
