/*
 * Cat.h
 *
 *  Created on: Apr 18, 2019
 *      Author: snowf
 */

#ifndef CAT_H_
#define CAT_H_

class Cat{

private:
	int age;
	bool isHappy;

protected:


public:
	// constructor
	Cat(bool happy);

	// desctructor
	~Cat();



	// Accessor and Mutator Methods
	int getAge();
	void setAge(int ageUpdate);

	// methods
	void speak();

};




#endif /* CAT_H_ */

