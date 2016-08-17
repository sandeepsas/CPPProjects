/*
 * main.cpp
 *
 *  Created on: Aug 16, 2016
 *      Author: sandeep
 */
#include "../inc/PatternGen.h"
#include "../inc/ReadInputFile.h"
#include "../inc/PatternFactory.h"
#include "../inc/Pattern.h"

using namespace std;

void parsePattern(ReadInputFile &inputFile, int &param);

int main(int argc, char *argv[]) {
	/*Check Arguments*/
	if(argc<=2){
		printf("\nINVALID ARGUMENT USAGE");
		printf("\nUsage =:> PatternCounter Input.txt 1");
		exit(0);
	}else if(argc == 3){
		std::cout<<"\n File name = "<< argv[1];
		std::cout<<"\n Pattern # = "<< argv[2];
	}else{
		printf("\nINVALID ARGUMENT USAGE");
		printf("\nUsage =:> PatternCounter Input.txt 3");
		exit(0);
	}

	string fileName = argv[1];

	/*File name string check*/
	if(fileName.empty()){
		throw invalid_argument("\nINVALID ARGUMENT USAGE");
	}

	try{
		int param = stoi(argv[2]);
		ReadInputFile readInputFile(fileName);

		parsePattern(readInputFile, param);

	}catch(invalid_argument& e){

	}

	return 0;
}

void parsePattern(ReadInputFile &inputFile, int &param) {
		PatternFactory patternFactory(inputFile);
		patternFactory.getPattern(param)->printPattern();
	}


