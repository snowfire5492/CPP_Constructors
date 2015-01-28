/*
 * Cat.cpp
 *
 *  Created on: Apr 18, 2019
 *      Author: snowf
 */

#include <iostream>
#include "Cat.h"

using namespace std;


//Constructor
Cat::Cat(bool happy){
	isHappy = happy;
	age = 0;			// default age for a cat 
(newborn)
}


//Destructor
Cat::~Cat(){
	cout << "Cat Destroyed " << endl;
}



// Accessor and Mutator Methods
int Cat::getAge(){
	return age;
}
void Cat::setAge(int ageUpdate){
	age = ageUpdate;
}


// function
void Cat::speak(){
	if(isHappy){
		cout << "meoww" << endl;
	}else{
		cout << "bark" << endl;
	}
}






















