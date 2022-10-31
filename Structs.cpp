#include "iostream"
using namespace std;
struct Person{  // struct with Person attributes
    // Data members ↓
    string name;
    int salary;
    char Gpa;
};
// The following function will read person1's name and salary
// it will also calculate students Gpa based on marks
void readIn(Person& person1){
    int marks;
    cout<<"Enter Person's name, salary and marks: ";
    getline(cin,person1.name);
    cin>>person1.salary>>marks;
    if(marks>=87)
        person1.Gpa='A';
    if(marks>=80)
        person1.Gpa='B';
    if(marks>=50)
        person1.Gpa='C';
    else
        person1.Gpa='F';
}
// This function will print the person1's values
void printPerson(Person person1){
    cout<<"name is "<<person1.name<<endl;
    cout<<"salary is "<<person1.salary<<endl;
    cout<<"Gpa is "<<person1.Gpa<<endl;
}
int main(){

    Person p1;
    // p1 argument is passed as a person1 parameter to the function readIn,PrintPerson
    readIn(p1);
    printPerson(p1);
}