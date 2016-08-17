/*
 * pattern.h
 *
 *  Created on: Aug 16, 2016
 *      Author: sandeep
 */

#ifndef INC_PATTERN_H_
#define INC_PATTERN_H_
# pragma once

#include "PatternGen.h"

class Pattern{

public:

	Pattern(){

	}

	virtual ~Pattern(){

	}
	virtual void printPattern(){
		std::cout<<"Virtual function of Pattern Main Interface";
	}

};


#endif /* INC_PATTERN_H_ */
