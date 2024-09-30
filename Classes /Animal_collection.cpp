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
