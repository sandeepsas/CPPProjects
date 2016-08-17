/*
 * ReadInputFile.cpp
 *
 *  Created on: Aug 16, 2016
 *      Author: sandeep
 */

#include "../inc/ReadInputFile.h"
#include <fstream>
using namespace std;

ReadInputFile::ReadInputFile() {
}

ReadInputFile::ReadInputFile(string &fileName) {

	map<string, int> wordMap = std::map<string, int>();
	/*Open file*/
	string line;
	ifstream myfile("Input.txt");
	if (myfile.is_open()){
		while ( getline (myfile,line) ){
			cout << line << '\n';
		}
		myfile.close();
	}
	readAndProcess(line);
}

void ReadInputFile::readAndProcess(string &line){
	string delim = " ";
	this->sCurrentLineSplit = split(line, delim);

	for(auto elem : this->sCurrentLineSplit){

		map<string,int>::iterator it = wordMap.find(elem);
		if(it != wordMap.end()){
			int val = it->second;
			val++;
			it->second = val;
		}else{
			wordMap.insert (it, std::pair<string,int>(elem,1));
		}
	}


}

void ReadInputFile::splitWords(){

}
vector<string> ReadInputFile::split(const string& str, const string& delim)
{
	vector<string> tokens;
	size_t prev = 0, pos = 0;
	do
	{
		pos = str.find(delim, prev);
		if (pos == string::npos) pos = str.length();
		string token = str.substr(prev, pos-prev);
		if (!token.empty()) tokens.push_back(token);
		prev = pos + delim.length();
	}
	while (pos < str.length() && prev < str.length());
	return tokens;
}

ReadInputFile::~ReadInputFile(){

}
