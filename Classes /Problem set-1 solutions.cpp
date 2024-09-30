#include <string>
#include <iostream>


using namespace std;

// Create a class called Animal with name attribute
class Animal {
    // Create a constructor that takes a string as a parameter
    // and sets the name attribute to the value of the parameter
    public:
        Animal(string name) {
            this->name = name;
        }
        string getName() {
            return name;
        }
        void speak() {
            cout << "I am an animal" << endl;
        }
        void print_info() {
            cout << "I am an animal with name " << name << endl;
        }
    private:
        string name;
};

class Dog : public Animal {
    public:
        Dog(string name) : Animal(name) {
        }
        void speak() {
            cout << "Woof!" << endl;
        }
        void bark() {
            cout << "Bark!" << endl;
        }
};

int main() {
    // Create an instance of the Animal class with the name "Pumba"
    Animal pumba("Pumba");
    // Print out the name of the animal
    cout << pumba.getName() << endl;

    Dog dog("Fido");
    dog.speak();
    dog.bark();

    Animal *animal = new Dog("Jumbo");
animal->speak();
    animal->bark(); // This will not work

    free(animal);
    return 0;
}

// Problems:

// P1. Define a Person class like we did in the previous module. Only add name and age.

// P2. Create two instances of Person and call print_info() on them.

// P3. Make the attributes private and see if you can still access them from outside the class.

// P7. Add a class called Student that inherits from Person. Add a field called department. Add a constructor that takes a name, age and department. Add a method called print_info() that prints out the name, age and department of the student.

// P8. Create an instance of Student and call print_info() on it.

// P9. Create a class called Teacher that inherits from Person. Add a field called salary. Add a constructor that takes a name, age and salary. Add a method called print_info() that prints out the name, age and salary of the teacher.

// P10. Create an instance of Teacher and call print_info() on it.

// Define a class AnimalCollection

// Pure virtual class
class AnimalCollection {
    public:
        // Pure virtual function
        void append(Animal animal);
        void speak();
        int remove(char* name);
        int removeAt(int index);
        int length();
        void print_info();
};

// Concrete class
class AnimalCollectionArray : public AnimalCollection {
    public:
        void append(Animal animal) {
        }
        void speak() {
        }
        int remove(char* name) {
        }
        int removeAt(int index) {
        }
        int length() {
        }
        void print_info() {
        }
        AnimalCollectionArray() {
        }
    private:
};

class AnimalCollectionLL : public AnimalCollection {
    public:
        void append(Animal animal) {
        }
        void speak() {
       }
        int remove(char* name) {
        }
        int removeAt(int index) {
        }
        int length() {
        }
        void print_info() {
        }
        AnimalCollectionLL() {
        }
    private:
};

main() {
    AnimalCollection *animals = new AnimalCollectionArray();
    // AnimalCollection *animals = new AnimalCollectionLL();

    animals->append(Dog("Pumba"));
    animals->append(Person("Alok", 50));
    animals->speak();
    animals->remove("Pumba");
    animals->removeAt(0);
    cout << animals->length() << endl;
}
