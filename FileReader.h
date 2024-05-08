#pragma once
#include <fstream>

class FileReader
{
private:
	std::ifstream file;
	std::string line;

public:
	FileReader(const std::string& filename);

	~FileReader();

	bool readLine();

	void skipLines(int lines);

	std::string getLine();

	bool isEOF();

	bool isOpen() const;

	void closeFile();
};

