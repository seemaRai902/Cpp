
----------------------------------------------------------------------------------------------------------------------
    problems:
----------------------------------------------------------------------------------------------------------------------
p1. Define a Person class like we did in the previous module. Only add name and age.

Name : Seema
Age : 22
I am a person with name Seema and age 22
----------------------------------------------------------------------------------------------------------------------
p2. Create two instances of Person and call print_info() on them.

I am a person with name Seema and age 22
I am a person with name Neema and age 19
----------------------------------------------------------------------------------------------------------------------
p3. Make the attributes private and see if you can still access them from outside the class.

    // Uncommenting the lines below will lead to errors
    /*
    cout << "Name of p1: " << p1.name << endl;  // Error: 'name' is private
    cout << "Age of p1: " << p1.age << endl;    // Error: 'age' is private
    cout << "Name of p2: " << p2.name << endl;  // Error: 'name' is private
    cout << "Age of p2: " << p2.age << endl;    // Error: 'age' is private
    */
/*  Errors are :
person_private.cpp: In function ‘int main()’:
person_private.cpp:40:34: error: ‘std::string person::name’ is private within this context
   40 |     cout << "Name of p1: " << p1.name << endl;  // Error: 'name' is private
      |                                  ^~~~
person_private.cpp:26:16: note: declared private here
   26 |         string name;
      |                ^~~~
person_private.cpp:41:33: error: ‘int person::age’ is private within this context
   41 |     cout << "Age of p1: " << p1.age << endl;    // Error: 'age' is private
      |                                 ^~~
person_private.cpp:27:13: note: declared private here
   27 |         int age;
      |             ^~~
person_private.cpp:41:33: note: field ‘int person::age’ can be accessed via ‘int person::getAge()’
   41 |     cout << "Age of p1: " << p1.age << endl;    // Error: 'age' is private
      |                                 ^~~
      |                                 getAge()
person_private.cpp:42:34: error: ‘std::string person::name’ is private within this context
   42 |     cout << "Name of p2: " << p2.name << endl;  // Error: 'name' is private
      |                                  ^~~~
person_private.cpp:26:16: note: declared private here
   26 |         string name;
      |                ^~~~
person_private.cpp:43:33: error: ‘int person::age’ is private within this context
   43 |     cout << "Age of p2: " << p2.age << endl;    // Error: 'age' is private
      |                                 ^~~
person_private.cpp:27:13: note: declared private here
   27 |         int age;
      |             ^~~
person_private.cpp:43:33: note: field ‘int person::age’ can be accessed via ‘int person::getAge()’
   43 |     cout << "Age of p2: " << p2.age << endl;    // Error: 'age' is private
*/

----------------------------------------------------------------------------------------------------------------------
p4. Add a class called Student that inherits from Person. Add a field called department. Add a constructor that takes a 
    name, age and department. Add a method called print_info() that prints out the name, age and department of the student.
p5. Create an instance of Student and call print_info() on it.


I am a person with name Seema and age 22. I'm a student of ECE dept.
I am a person with name Neema and age 19. I'm a student of AIML dept.
----------------------------------------------------------------------------------------------------------------------
p6. Create a class called Teacher that inherits from Person. Add a field called salary. Add a constructor that takes 
   a name, age and salary. Add a method called print_info() that prints out the name, age and salary of the teacher.
p7. Create an instance of Teacher and call print_info() on it.

I am a teacher with name John, age 30, and salary 50000
----------------------------------------------------------------------------------------------------------------------
