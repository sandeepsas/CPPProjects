/*
 * ReadInputFile.h
 *
 *  Created on: Aug 16, 2016
 *      Author: sandeep
 */
#pragma once

#ifndef SRC_READINPUTFILE_H_
#define SRC_READINPUTFILE_H_

#include "PatternGen.h"

class ReadInputFile {

private:

	map<string, int> wordMap;
	vector<string> sCurrentLineSplit;

public:

	ReadInputFile();
	ReadInputFile(string &fileName);
	map<string, int> getWordMap() {
			return wordMap;
		}
	void readAndProcess(string &line);
	vector<string> split(const string& str, const string& delim);
	void splitWords();

	~ReadInputFile();

};


#endif /* SRC_READINPUTFILE_H_ */
