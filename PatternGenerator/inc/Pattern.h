/*
 * pattern.h (abstract class)
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
	/*Pure virtual function*/
	virtual void printPattern()=0;

};


#endif /* INC_PATTERN_H_ */
