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
		std::cout << "Num1: " << num1 << "-";

		intConvert.clear();
                intConvert.str("");

		getline(ss, sNum2, ',');
		intConvert << sNum2;
		intConvert >> num2;
		std::cout << "Num2: " << num2 << "-";
		getline(ss, text);

		int total = num1 + num2;
		std::cout << "Total: " << total << std::endl;
		/*
		for(int i = 0; i < total; i++){
			std::cout << text << "  ";
		} // end for
		*/
		std::cout << std::endl;
	} // end while
	
/*
	while(getline(inFile, currentLine)){
		std::cout << "Line: " << currentLine << std::endl;
	 	ss.clear();
                ss.str("");

                ss.str(currentLine);
		getline(ss, sNum1, ',');
		std::cout << "Number 1: " << sNum1 << std::endl;
		getline(ss, sNum2, ',');
		std::cout << "Number 2: " << sNum2 << std::endl;
	}
*/
	inFile.close();

} // end main
