// fileIO.cpp

#include <fstream>
#include <iostream>
#include <sstream>

int main(){
	std::ifstream inFile;
	std::string currentLine;
	std::stringstream ss;
	std::stringstream intConvert;
	int num1;
	int num2;
	std::string sNum1;
	std::string sNum2;
	std::string text;

	inFile.open("data.csv");
	
	while(getline(inFile, currentLine)){
		ss.clear();
		ss.str("");

		intConvert.clear();
		intConvert.str("");

		ss.str(currentLine);

		getline(ss, sNum1, ',');
		intConvert << sNum1;
		intConvert >> num1;

		intConvert.clear();
                intConvert.str("");

		getline(ss, sNum2, ',');
		intConvert << sNum2;
		intConvert >> num2;
		getline(ss, text);

		int total = num1 + num2;
		for(int i = 0; i < total; i++){
			std::cout << text << "  ";
		} // end for
		std::cout << std::endl;
	} // end while
	
	inFile.close();

} // end main
