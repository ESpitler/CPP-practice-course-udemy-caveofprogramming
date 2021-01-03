//============================================================================
// Name        : Arrays.cpp
// Author      : Evan
// Version     :
// Copyright   : cc by 4.0
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

void show1(const int nElements, string texts[]){//array size value is not read by compiler

	//cout << sizeof(texts) << endl; //returns size of pointer
	for(int i=0;i<nElements;i++){
		cout << texts[i] << endl;
	}

}

void show2(const int nElements, string *texts){

	//cout << sizeof(texts) << endl; //returns size of pointer
	for(int i=0;i<nElements;i++){
		cout << texts[i] << endl;
	}

}

void show3(string (&texts)[3]){//array size must be explicitly defined and correct

	//cout << sizeof(texts) << endl; //returns size of pointer
	for(int i=0;i<sizeof (texts)/sizeof (string);i++){
		cout << texts[i] << endl;
	}

}

//to return an array from a function, return a pointer
/*string *getArray(){
	//string texts[] = {"one", "two", "three"}; //do not return pointers to local variables

	return texts;
}*/

char *getMemory(){
	char *pMem = new char[100];
	return pMem;
}

void freeMemory(char *pMem){ //if you create a function that allocates memory, you should also create a
	delete []pMem;			 //function that deallocates that memory and note in documentation which
}							 //functions require it to be called.

int main() {

	string texts[] = {"apple", "orange", "banana"};

	cout << sizeof(texts) << endl;

	show3(texts);
	char *pMemory = getMemory(); //allocates memory
	freeMemory(pMemory); //dellocates memory

	return 0;
}
