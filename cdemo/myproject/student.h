#include <stdio.h>
#include <string.h>

struct Student {
  char firstName[50];
  char lastName[50];
  int age;
  int studentID;
};

void printStudent(struct Student* student) {
  printf("Student:\n");
  printf("Name: %s %s\n",student -> firstName, student -> lastName);
  printf("Age: %d\n", student -> age);
  printf("Student ID: %d\n", student -> studentID);
}
