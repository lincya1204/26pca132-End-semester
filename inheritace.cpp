#include <iostream>
using namespace std;
class Animal
{
public:
        virtual void makeSound()
         {
         cout << "Animal makes a sound" << endl;
         }
};
        class Dog : public Animal
 {
public:
        void makeSound() override
        {
        cout << "Dog says: Woof Woof!" << endl;
        }
};
        class Cat : public Animal
        {
public:
         void makeSound() override
       {
        cout << "Cat says: Meow Meow!" << endl;
       }
};
int main()
{
    Dog dog;
    Cat cat;
    dog.makeSound();
    cat.makeSound();

    return 0;
}
