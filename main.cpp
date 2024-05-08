#include <iostream>
#include "SwimmerFactory.h"

using namespace std;

int main()
{
	cout << "startas" << endl;
	string filename = "swimpers_db.csv";
	SwimmerFactory swimmerFact;
	vector<Swimmer> swimmersVector = swimmerFact.createFromCsv(filename, 1);

    std::cout << "Hello World!\n";

}