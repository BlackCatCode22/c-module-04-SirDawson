/*
sD 9/25/24
arrivingAnimals.cpp
*/

#include <iostream>
#include <string>
#include <list>

using std::string, std::cout, std::list;

class Animal
{
    // Create constructors for our class.
    public:
    Animal(string aName)
    {
        name = aName;
        origin = "Someplace far away";
    }

    Animal()
    {
        age = 0;
        sex = '?';
        weight = 0;
        birthDate = "unknown";
        color = "unknown";
        name = "toBeNamed";
        origin = "somewhere";
    }

    public:
    int age;
    char sex;
    int weight;
    string birthDate;
    string color;
    string name;
    string origin;
};

class Hyena : public Animal
{
    // Create a constructor that uses the super class' constructor.
    public:
    Hyena(string someName) : Animal(someName){}
    Hyena() : Animal(){}
};

int main()
{
    cout << "\n**********Welcome to my Zoo Program!**********\n";

    // Create a NEW animal object.
    // The 'new' keyword allocates memory on the heap and returns the address of the object.
    Animal* myAnimal = new Animal();
    myAnimal -> age = 10;
    myAnimal -> color = "Red";
    myAnimal -> name = "Bob";
    myAnimal -> sex = 'M';
    myAnimal -> weight = 20;
    myAnimal -> birthDate = "2021";

    cout << "\nThis is my animal object:\n"
         << "Age: " << myAnimal -> age << '\n' << "Color: " << myAnimal -> color << '\n' << "Birth Date: " << myAnimal -> birthDate << '\n';

    // Create another animal without using a pointer or 'new'.
    Animal anotherAnimal;
    anotherAnimal.age = 10;
    anotherAnimal.color = "Red";
    anotherAnimal.birthDate = "2021";
    anotherAnimal.name = "Bob";
    anotherAnimal.sex = 'M';
    anotherAnimal.weight = 20;

    cout << "\nThis is 'anotherAnimal':\n"
         << "Age: " << anotherAnimal.age << '\n' << "Color: " << anotherAnimal.color << '\n' << "Birth Date: " << anotherAnimal.birthDate << '\n';

    // Create an animal with a name.
    Animal* animalWithName = new Animal("Leo");

    cout << "\nThis is an animal with a name:\n"
         << "Name: " << animalWithName -> name << '\n';

    // Create an animal with the default constructor.
    Animal* animalWithDeafultConstructor = new Animal();

    cout << "\nThis is an animal with a 'defaultConstructor:\n"
         << "Age: " << animalWithDeafultConstructor -> age << '\n' << "Sex: " << animalWithDeafultConstructor -> sex << '\n' << "Name: " << animalWithDeafultConstructor -> name << '\n';

    // Create a Hyena.
    Hyena* myNewHyena = new Hyena("Zig");
    cout << "\nThis is a Hyena:\n"
         << "Origin: " << myNewHyena -> origin << '\n' << "Name: " << myNewHyena -> name << '\n';

    Hyena* myNewHyena2 = new Hyena();
    cout << "\nThis is 'myNewHyena2':\n"
         << "Name: " << myNewHyena2 -> name << '\n';

    cout << "\n********** End of Program. **********\n";

    system("pause>0");
}