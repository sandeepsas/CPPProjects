/*
 * PatternFactory.h
 *
 *  Created on: Aug 16, 2016
 *      Author: sandeep
 */

#ifndef INC_PATTERNFACTORY_H_
#define INC_PATTERNFACTORY_H_

# pragma once

#include "PatternGen.h"
# include "ReadInputFile.h"
# include "Pattern.h"
# include "Pattern1.h"

class PatternFactory{

	ReadInputFile inputFile;

public:
	/*	static bool matcherFunction(string key) {
		regex_match(key,".*\\d+.*");
	}*/

	PatternFactory(ReadInputFile &inputFile){
		this->inputFile = inputFile;
	}

	static bool matcherFunction(const std::string& s){
		return !s.empty() && std::find_if(s.begin(),
				s.end(), [](char c) { return !std::isdigit(c); }) == s.end();
	}


	Pattern* getPattern(int patternType){

		if(patternType == 1){

			map<string, int> wMap = inputFile.getWordMap();

			return new Pattern1(wMap);
		}
		printError();
		return new Pattern1();
	}
	/*Print Error for invalid parameter*/
	void printError() {
		printf("Invalid Parameter!!. \nValid parameters are 1, 2, 3");

	}
};
#endif /* INC_PATTERNFACTORY_H_ */
