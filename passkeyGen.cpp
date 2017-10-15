
#include "stdafx.h"
#include <iostream>
#include <random>
#include <ctime>
#include <Windows.h>
using namespace std;
int randVal(); //prototype

int main() {
	//cout << "alive" << endl;                            //DEBUG
    srand(static_cast<int>((time(0) / ((60 * 24)*.90))));
	const int MAX = 32;
	const int sMAX = 4;
	int str_e = 0;

	//cout << "alive b4 sA[]" << endl;                    //DEBUG
    int x=randVal();
	string sA[ ] = { "0123456789", " @#$%^&*;:?!","abcdefgijklm","nopqrstuvwxyz"};
	cout << "alive after sA[]" <<x<< endl;                 //DEBUG

	char pw[MAX];//8x4 group
	char temp = ' ';
	for( int e = 0; e<MAX; e++ ) {
       
																		 //set current temp char to: stringArray 
		temp = static_cast <char>(sA[str_e].at(sA[str_e].length() - 2)); //sA[str_e] @ the length of the string in array - 2;

		cout << "char at pw["<<e<<"]= " << temp << endl; //DEBUG
	 
		//modify how str_e is chosen.


		if( str_e == sMAX ) {
			str_e = 0;
		}
	}

	cout << "HelloWorld" << pw[1];
	return 0;
}

int randVal(){
int x = (rand() % 10) + 1;
cout<<x;
return x;
}
