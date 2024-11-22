//
//  main.cpp
//  week6
//
//  Created by Jordon Marchesano on 11/18/24.
//

#include <iostream>
#include <cctype>
#include <iomanip>
#include <string>
using namespace std;

int const ARRLENGTH = 10;
int mainArr[ARRLENGTH];


void displayNames(){
    int studentId1, studentId2;
     studentId1 = 900536880;
     studentId2 = 900914917;
     string nameStudent1, nameStudent2;
     nameStudent1 = "Jordon Marchesano";
     nameStudent2 = "Glen Dsouza";
     cout  << left << setw(18) << "Student Name: " << nameStudent1 << endl;
     cout  << left << setw(18) << "Student ID: " << studentId1 << endl;
     cout  << left << setw(18) << "Student Name: " << nameStudent2 << endl;
     cout  << left << setw(18) << "Student ID: " << studentId2 << "\n" << endl;
};


void getArr(){
    cout << "Please enter 10 numbers to be sorted: ";
    for (int i = 0; i < ARRLENGTH; i++){
        cin >> mainArr[i];
    }
   
};


void sortArr(int *arr) {
    for (int i = 0; i < ARRLENGTH - 1; i++) {
        for (int j = 0; j < ARRLENGTH - i - 1; j++) {
            if (*(arr + j) > *(arr + j + 1)) {
                int temp = *(arr + j);
                *(arr + j) = *(arr + j + 1);
                *(arr + j + 1) = temp;
            }
        }
    }
};

int* reversedArr = new int[ARRLENGTH];

void reverseArr(int arr[], int newArr[]){
    for (int i = 0; i < ARRLENGTH; i++){
        newArr[i] = arr[ARRLENGTH - i -1];
    }
};

void printArr(int *arr){
    for (int i = 0; i < ARRLENGTH; i++){
        cout << *(arr + i) << endl;
    }
};

void deAllocate(int arr[]){
    delete[] arr;
};


int main(int argc, const char * argv[]) {

    displayNames();
    getArr();
    sortArr(mainArr);
    printArr(mainArr);
    reverseArr(mainArr,reversedArr);
    printArr(reversedArr);
    deAllocate(reversedArr);
    cin.get();
    cin.ignore();

    return 0;
}
