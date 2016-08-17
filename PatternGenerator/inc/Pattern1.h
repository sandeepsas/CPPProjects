/*
 * Pattern1.h
 *
 *  Created on: Aug 16, 2016
 *      Author: sandeep
 */

# pragma once


#ifndef INC_PATTERN1_H_
#define INC_PATTERN1_H_



#include "Pattern.h"
#include "PatternGen.h"
class Pattern1:public Pattern{

private:
	map<string, int> wordMap;

public:
	Pattern1();
	Pattern1(map<string, int> &wMap);
	virtual ~Pattern1();

	void printPattern();
};



#endif /* INC_PATTERN1_H_ */
