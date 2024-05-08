#include "FileReader.h"
#include <iostream>
#include <fstream>
#include <string> 

using std::string;

FileReader::FileReader(const string& filename)
{
	this->file.open(filename);
}

FileReader::~FileReader() {
	if (this->file.is_open()) {
		this->file.close();
	}
}

bool FileReader::readLine()
{
	string line;
	if (getline(this->file, this->line)) {
		return 1;
	}
	return 0;

}

void FileReader::skipLines(int lines)
{
	int skips = 0;
	while (skips < lines || isEOF()) {
		skips++;
		this->readLine();
	}
}

string FileReader::getLine()
{
	return this->line;
}

bool FileReader::isEOF() { 
	return this->file.eof();
}

bool FileReader::isOpen() const {
	return this->file.is_open();
}

void FileReader::closeFile()
{
	this->file.close();
}