#include "Cat.hpp"
#include "Dog.hpp"
#include "Animal.hpp"
#include "WrongCat.hpp"
int main()
{



const Animal* meta = new Animal();
const Animal* j = new Dog();
const Animal* i = new Cat();
const WrongAnimal* k = new WrongCat();
std::cout << j->getType() << " " << std::endl;
std::cout << i->getType() << " " << std::endl;


i->makeSound(); //will output the cat sound!
j->makeSound();
k->makeSound();
meta->makeSound();

delete i;
delete k;
delete j;
delete meta;


return 0;

}