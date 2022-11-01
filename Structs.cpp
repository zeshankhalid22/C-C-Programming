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
void readIn(Person persons[3],int size){
    int marks[3];
    for(int i=0;i<size;i++) {
        cout << "Enter Person's name, salary and marks: ";
        getline(cin, persons[i].name);
        cin >> persons[i].salary >>marks[i];
        if (marks[i] >= 87)
            persons[i].Gpa = 'A';
        if (marks[i] >= 80)
            persons[i].Gpa = 'B';
        if (marks[i] >= 50)
            persons[i].Gpa = 'C';
        else
            persons[i].Gpa = 'F';
    }
}
// This function will print the person1's values
void printPerson(Person persons[3],int size){
    for(int i=0;i<size;i++){
    cout<<"name is "<<persons[i].name<<endl;
    cout<<"salary is "<<persons[i].salary<<endl;
    cout<<"Gpa is "<<persons[i].Gpa<<endl;
    }
}
int main(){

    Person persons[3];
    int size=3;
    // p1 argument is passed as a person1 parameter to the function readIn,PrintPerson
    readIn(persons[3],size);
    printPerson(persons[3],size);
}