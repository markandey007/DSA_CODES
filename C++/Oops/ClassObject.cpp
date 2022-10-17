#include<iostream>
using namespace std;


// class creation
class Human 
{
    //properties -> Data Members
    public:
    char gender;
    int age;

    //behaviour

    //constructor
    Human() {
        cout << " I m in constructor " << endl;
        age = 1;
        gender = 'f';
    }

    //parameterised constructor
    Human(int age, char gender) {
        cout << "I m in P Constructor" << endl;
        this -> age = age;
        this -> gender = gender;
    }

    //copy constructor
    Human(Human& temp) {
        cout << "I m in COPY COnstructor" << endl;
        this->age = temp.age;
        this->gender = temp.gender;
    }

    char getGender() {
        return gender;
    }

    void setGender(char ch) {
        gender = ch;
    }

    int getAge() {
        return age;
    }

    void setAge(int a) {
        age = a;
    }

    ~Human() {
        cout << "Destructor called" << endl;
    }


};

int main() {

    //object creation
    // Human obj;
    // cout << sizeof(obj) << endl ;

    // obj.age = 23;
    // //access
    // cout << obj.age << endl;

    //static
    Human ramesh;
    ramesh.age = 123;
    cout << ramesh.age << endl;

    //dynamic 
    Human *suresh = new Human();
    cout << suresh->age << endl;

    //parameterised constructor
    Human *mukeshika = new Human(12, 'f');
    cout << mukeshika -> gender << endl;

    //copy constructorr
    Human jignesh(ramesh);
    cout << jignesh.age << endl;

    delete suresh;
    delete mukeshika;




    return 0;
};