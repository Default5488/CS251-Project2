// TODO: remove and replace this file header comment
// This is a .h file you will edit and turn in.

// Remove starter comments and add your own
// comments on each function and on complex code sections.

#pragma once

#include <iostream>
#include <stdio.h>
#include <ctype.h>
#include <string>
#include <set>
#include <map>
using namespace std;


/*
@param:
s: string of the token to be "cleaned' have returned

Takes in a string, verifys it has letters

Trims leading & trailing puncuation

Converts to lower case

@return tempS:  trimmed string
*/
string cleanToken(string s) {
	int sSize = s.size();//Size of string
	bool alpha = false;//Check for if s contains letter

	/**If this comes up again, create helper function**/
	for(auto& ch : s){//First checks if any letters are contained
		if(isalpha(ch)){
			alpha = true;
			break;
		}
	}

	if(!alpha)//No letters found in s -> alpha = false
		return "";

	
	int letterIndex = 0;//Index of letter occurance
	for(int i = 0; i < sSize; i++){//Parse until first letter
		if(ispunct(s.substr(i, i+1)))//leading space punch check
			letterIndex++;
		else
			break;
	}	

	string tempS;
	if(letterIndex != 0)//trim s leading
		tempS = s.substr(letterIndex + 1, s.size());

	
	sSize = tempS.size();//Size of parsed string
	letterIndex = sSize;//End of tempS
	for(int k = sSize; k > 0; k--){
		if(ispunct(tempS.substr(k-1, k)))
			letterIndex--;
	}

	if(letterIndex != sSize)//Trim trail punc
		tempS = tempS.substr(0, letterIndex);//?? Make sure it's not cutting short 1
		
	/**If this comes up again create helper function**/
	//?? make sure it's proplery addressing the memory location to lowercase
	for(auto& ch : tempS)//Converts to lower case
		ch = tolower(ch);
	
	return tempS;
}

// TODO: Add a function header comment here to explain the
// behavior of the function and how you implemented this behavior
set<string> gatherTokens(string text) {
    set<string> tokens;
    
    
    // TODO:  Write this function.
    
    
    return tokens;  // TODO:  update this.
}

// TODO: Add a function header comment here to explain the
// behavior of the function and how you implemented this behavior
int buildIndex(string filename, map<string, set<string>>& index) {
    
    
    // TODO:  Write this function.
    
    
    return 0;
}

// TODO: Add a function header comment here to explain the
// behavior of the function and how you implemented this behavior
set<string> findQueryMatches(map<string, set<string>>& index, string sentence) {
    set<string> result;
    
    
    // TODO:  Write this function.
    
    
    return result;  // TODO:  update this.
}

// TODO: Add a function header comment here to explain the
// behavior of the function and how you implemented this behavior
void searchEngine(string filename) {

    
    // TODO:  Write this function.
    
    
}


