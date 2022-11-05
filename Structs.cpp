#include "iostream"
using namespace std;
struct Person{  // struct with Person attributes
    // Data members ↓
    string name;
    int salary;
    char Gpa;
};
// The following function will read persons name and salary
// it will also calculate students Gpa based on marks
void readIn(Person persons[],int size){
    int marks[3];
    for(int i=0;i<size;i++) {
        cout << "Enter Person's name, salary and marks: ";
        cin >>persons[i].name>> persons[i].salary >>marks[i];
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
// This function will print the persons values
void printPerson(Person persons[],int size){
    for(int i=0;i<size;i++){
    cout<<"name is "<<persons[i].name<<endl;
    cout<<"salary is "<<persons[i].salary<<endl;
    cout<<"Gpa is "<<persons[i].Gpa<<endl;
    cout<<"..........................\n";
    }
}
int main(){

     // it will create three instances of persons in which we can store 3 different data sets
    Person persons[3]; // person[0], person[1], person[2]
    int size=3;
    // person arguments is passed as a person1 parameter to the function readIn,PrintPerson
    readIn(persons,size);
    printPerson(persons,size);
}