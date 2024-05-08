#include "SwimmerCsvParser.h"
#include <sstream>

using namespace std;

vector<string> SwimmerCsvParser::parseLine(const string& line) {
	stringstream ss(line);
	string item;
	vector<string> tokens;
	while (getline(ss, item, ',')) {
		tokens.push_back(item);
	}
	return tokens;
}