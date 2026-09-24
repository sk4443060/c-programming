// int - stores whole numbers (integers), such as 123 or -123
// float - stores numbers with decimals, such as 19.99 or -19.99
// char - stores a single character, such as 'a' or 'B'. Characters are surrounded by single quotes

// Declaring (Creating) Variables
// type variableName = value;
// Ex: int studentAge = 25;
// OR
// int studentAge;
// studentAge = 25;

#include <stdio.h>

/*int main() {
    int studentAge, studentRollNo;
    studentAge = 25;
    studentRollNo = 20260924;
    // printf(studentAge);  // <- error: passing argument 1 of 'printf' makes pointer from integer without a cast [-Wint-conversion]|
                         // To solve this see the next line (This is called formet specifier)
    printf("The student age is %d and roll no is %d.\n", studentAge, studentRollNo);

    return 0;
}*/

// Change Variable Values
/* int main() {
    int myNum = 15;  // myNum is 15
    printf("This is original Value: %d.\n", myNum);

    myNum = 10;      // Now myNum is 10
    printf("This id updated Value : %d.\n", myNum);

    return 0;
} */

// Real-Life Example
/* int main() {
    // Student data
    int studentID = 15;
    int studentAge = 23;
    float studentFee = 75.25;
    char studentGrade = 'B';

    // Print variables
    printf("Student ID: %d\n", studentID);
    printf("Student age: %d\n", studentAge);
    printf("Student fee: %f\n", studentFee);
    printf("Student grade: %c\n", studentGrade);

    return 0;
} */

// Calculate the Area of a Rectangle
int main() {
    // Var declaration
    int length, bredth;

    // Assining val
    length = 20;
    bredth = 10;

    // Using Var
    printf("Area of Rect: %d unit sq.\n", length*bredth);

    return 0;
}
