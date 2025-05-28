#include <iostream>

using namespace std; 

class Animal
{
protected :
	string sound; 
public : 
	Animal() :sound("animal sound") {}
	void eat() { cout << "Eat" << '\t'; }
	void walk() { cout << "Walk" << '\t'; }
	void makeSound() { cout << "Make a sound" << endl;}
	virtual void soundlike() { cout << "sound like - " << sound << endl; }
	//void soundlike() { cout << "sound like - " << sound << endl; }
};

class cat : public Animal
{
	string sound; 
public : 
	cat():sound("meow"){}

	void displayCat() { cout << "Cat----\t" ; }
	// overidded function // function overriding
	void soundlike() { cout << "sound like - " << sound << endl; }
};

class dog : public Animal
{
	string sound;
public:
	dog() :sound("bow") {}

	void displayDog() { cout << "Dog----\t" ; }
	// overidded function
	void soundlike() { cout << "sound like - " << sound << endl; }
};

int main()
{
	Animal* bcPtr = nullptr ;

	cat c; 
	dog d; 

	c.displayCat();
	c.eat();
	c.walk();
	c.makeSound();
	c.soundlike();

	d.displayDog();
	d.eat();
	d.walk();
	d.makeSound();
	d.soundlike();

	bcPtr = &c; 
	
	//bcPtr->displayCat();

	bcPtr->eat();
	bcPtr->walk();
	bcPtr->makeSound();
	bcPtr->soundlike();

	bcPtr = &d;

	bcPtr->eat();
	bcPtr->walk();
	bcPtr->makeSound();
	bcPtr->soundlike();

}