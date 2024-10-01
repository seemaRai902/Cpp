#include <iostream>
#include <cstring>
using namespace std;

// Animal base class
class Animal {
    public:
        virtual void speak() = 0;
        virtual const char* getName() = 0;
        virtual void print_info() = 0;
        virtual ~Animal() {}  // Virtual destructor for proper cleanup
};

// Derived Dog class
class Dog : public Animal {
    private:
        const char* name;
    public:
        Dog(const char* n) : name(n) {}
        void speak()  {
            cout << name << " says Woof!" << endl;
        }
        const char* getName()  {
            return name;
        }
        void print_info()  {
            cout << "Dog: " << name << endl;
        }
};

// Derived Person class
class Person : public Animal {
    private:
        const char* name;
        int age;
    public:
        Person(const char* n, int a) : name(n), age(a) {}
        void speak()  {
            cout << name << " says Hello!" << endl;
        }
        const char* getName()  {
            return name;
        }
        void print_info()  {
            cout << "Person: " << name << ", Age: " << age << endl;
        }
};

// Abstract AnimalCollection class
class AnimalCollection {
    public:
        virtual void append(Animal* animal) = 0;
        virtual void speak() = 0;
        virtual int remove(const char* name) = 0;
        virtual int removeAt(int index) = 0;
        virtual int length() = 0;
        virtual void print_info() = 0;
        virtual ~AnimalCollection() {}
};

// Array-based implementation
class AnimalCollectionArray : public AnimalCollection {
    public:
        AnimalCollectionArray() : size(0) {}

        void append(Animal* animal)  {
            if (size < 10) animals[size++] = animal;
        }

        void speak()  {
            for (int i = 0; i < size; ++i)
                animals[i]->speak();
        }

        int remove(const char* name)  {
            for (int i = 0; i < size; ++i) {
                if (strcmp(animals[i]->getName(), name) == 0) {
                    for (int j = i; j < size - 1; ++j)
                        animals[j] = animals[j + 1];
                    size--;
                    return 1;
                }
            }
            return 0;
        }

        int removeAt(int index)  {
            if (index < 0 || index >= size) return 0;
            for (int i = index; i < size - 1; ++i)
                animals[i] = animals[i + 1];
            size--;
            return 1;
        }

        int length()  {
            return size;
        }

        void print_info()  {
            for (int i = 0; i < size; ++i)
                animals[i]->print_info();
        }

    private:
        Animal* animals[10];  // Array of Animal pointers
        int size;
};

// Linked-list-based implementation
struct Node {
    Animal* animal;
    Node* next;
    Node(Animal* a) : animal(a), next(nullptr) {}
};

class AnimalCollectionLL : public AnimalCollection {
    public:
        AnimalCollectionLL() : head(nullptr), size(0) {}

        void append(Animal* animal)  {
            Node* newNode = new Node(animal);
            if (!head) head = newNode;
            else {
                Node* temp = head;
                while (temp->next) temp = temp->next;
                temp->next = newNode;
            }
            size++;
        }

        void speak()  {
            Node* temp = head;
            while (temp) {
                temp->animal->speak();
                temp = temp->next;
            }
        }

        int remove(const char* name)  {
            Node* temp = head;
            Node* prev = nullptr;
            while (temp) {
                if (strcmp(temp->animal->getName(), name) == 0) {
                    if (prev) prev->next = temp->next;
                    else head = temp->next;
                    delete temp;
                    size--;
                    return 1;
                }
                prev = temp;
                temp = temp->next;
            }
            return 0;
        }

        int removeAt(int index)  {
            if (index < 0 || index >= size) return 0;
            Node* temp = head;
            Node* prev = nullptr;
            for (int i = 0; i < index; ++i) {
                prev = temp;
                temp = temp->next;
            }
            if (prev) prev->next = temp->next;
            else head = temp->next;
            delete temp;
            size--;
            return 1;
        }

        int length()  {
            return size;
        }

        void print_info()  {
            Node* temp = head;
            while (temp) {
                temp->animal->print_info();
                temp = temp->next;
            }
        }

    private:
        Node* head;
        int size;
};

int main() {
//     AnimalCollection *animals = new AnimalCollectionArray();
     AnimalCollection *animals = new AnimalCollectionLL();

    animals->append(new Dog("Pumba"));
    animals->append(new Person("Alok", 50));
    animals->speak();
    animals->remove("Pumba");
    animals->removeAt(0);
    cout << animals->length() << endl;

    delete animals;
    return 0;
}
------------------------------------------------------------------------------------------------
OUTPUT :
Pumba says Woof!
Alok says Hello!
0
----------------------------------------------------------------------------------------------------

    
