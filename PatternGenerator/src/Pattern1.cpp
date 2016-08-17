/*
 * Pattern1.cpp
 *
 *  Created on: Aug 16, 2016
 *      Author: sandeep
 */

#include "../inc/Pattern1.h"
#include "../inc/PatternFactory.h"


Pattern1::Pattern1(map<string, int> &wMap) {

	this->wordMap = wMap;

}

Pattern1::Pattern1(){

}

Pattern1::~Pattern1() {
}

void Pattern1::printPattern(){
	if(this->wordMap.size()<3){
		cout<<"";
		return;
	}

	for(auto elem : this->wordMap){

		bool flag = PatternFactory::matcherFunction(elem.first);
		if(flag){
			cout << elem.first << " " << elem.second << "\n";
		}
	}
}

