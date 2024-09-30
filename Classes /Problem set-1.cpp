
// Problems:

// P1. Define a Person class like we did in the previous module. Only add name and age.
#include <string>
#include <iostream>

using namespace std;

class person {
    public:
        // Constructor to initialize name and age
        person(string name, int age) {
            this->name = name;
            this->age = age;
        }

        // Method to get the name
        string getName() {
            return name;
        }

        // Method to get the age
        int getAge() {
            return age;
        }

        // Method to print the information
        void print_info() {
            cout << "I am a person with name " << name << " and age " << age << endl;
        }

    private:
        // Private attributes
        string name;
        int age;
};

int main() {
    // Create an instance of person
    person p1("Seema", 22);

    // Access methods
    cout << "Name: " << p1.getName() << endl;
    cout << "Age: " << p1.getAge() << endl;

    // Print person's info
    p1.print_info();

    return 0;
}


// P2. Create two instances of Person and call print_info() on them.
#include <string>
#include <iostream>

using namespace std;

class person {
    public:
        // Constructor to initialize name and age
        person(string name, int age) {
            this->name = name;
            this->age = age;
        }

        // Getter for name
        string getName() {
            return name;
        }

        // Getter for age
        int getAge() {
            return age;
        }

        // Method to print person information
        void print_info() {
            cout << "I am a person with name " << name << " and age " << age << endl;
        }

    private:
        // Private attributes to enforce encapsulation
        string name;
        int age;
};

int main() {
    // Creating two person objects
    person p1("Seema", 22);
    person p2("Neema", 19);

    // Calling print_info() to print details
    p1.print_info();
    p2.print_info();

    return 0;
}

// P3. Make the attributes private and see if you can still access them from outside the class.
#include <string>
#include <iostream>

using namespace std;

class person {
    public:
        person(string name, int age) {
            this->name = name;
            this->age = age;
        }

        string getName() {
            return name;
        }

        int getAge() {
            return age;
        }

        void print_info() {
            cout << "I am a person with name " << name << " and age " << age << endl;
        }

    private:
        string name;
        int age;
};

int main() {
    person p1("Seema", 22);
    person p2("Neema", 19);

    p1.print_info();
    p2.print_info();

    // Attempting to access private members directly (will cause compile errors)
    // Uncommenting the lines below will lead to errors
    /*
    cout << "Name of p1: " << p1.name << endl;  // Error: 'name' is private
    cout << "Age of p1: " << p1.age << endl;    // Error: 'age' is private
    cout << "Name of p2: " << p2.name << endl;  // Error: 'name' is private
    cout << "Age of p2: " << p2.age << endl;    // Error: 'age' is private
    */

    return 0;
}

// P4. Add a class called Student that inherits from Person. Add a field called department. Add a constructor that takes a name, age and department. Add a method called print_info() that prints out the name, age and department of the student.
// P5. Create an instance of Student and call print_info() on it.

#include <string>
#include <iostream>

using namespace std;

class person {
    public:
        // Constructor to initialize name and age
        person(string name, int age) {
            this->name = name;
            this->age = age;
        }

        // Getter for name
        string getName() {
            return name;
        }

        // Getter for age
        int getAge() {
            return age;
        }

        // Method to print person information
        void print_info() {
            cout << "I am a person with name " << name << " and age " << age << endl;
        }

    private:
        string name;
        int age;
};

class student : public person {
    public:
        // Constructor to initialize name, age, and department
        student(string name, int age, string department) : person(name, age) {
            this->department = department;
        }

        // Overriding print_info method
        void print_info() {
            cout << "I am a person with name " << getName() << " and age " << getAge() << ". I'm a student of " << department << " dept." << endl;
        }

    private:
        string department; // No need for name and age, as they are inherited
};

int main() {
    // Creating student objects
    student s1("Seema", 22, "ECE");
    student s2("Neema", 19, "AIML");

    // Calling print_info() to print details
    s1.print_info();
    s2.print_info();

    return 0;
}


// P6. Create a class called Teacher that inherits from Person. Add a field called salary. Add a constructor that takes a name, age and salary. Add a method called print_info() that prints out the name, age and salary of the teacher.

// P7. Create an instance of Teacher and call print_info() on it.
