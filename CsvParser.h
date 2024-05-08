#pragma once
#include <vector>
#include <string>

class CsvParser
{
public:
	virtual ~CsvParser() {};

	virtual std::vector<std::string> parseLine(const std::string& line) = 0;
};
