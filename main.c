// Author: Alexander Barr ajb7463@psu.edu
// Collaborator: Raymond Chen rpc5459@psu.edu
// Collaborator: Stanley Wang szw5739@psu.edu
// Collaborator: Chao-Yang Fang cbf5338@psu.edu
// Section: 10
// Breakout: 14

#include <stdio.h>
#include <readline/readline.h>
#include <stdlib.h>

int main(void) {
  char *grade = readline("Enter your CMPSC 131 grade: ");
  double x = atof(grade);
  char *letter = " ";
  if (x >= 93.0) {
    letter = "A";
  }
  else if(x >= 90.0 && x < 93.0) {
    letter = "A-";
  }
  else if(x >= 87.0 && x < 90.0) {
    letter = "B+";
  }
  else if(x >= 83.0 && x < 87.0) {
    letter = "B";
  }
  else if(x >= 80.0 && x < 83.0) {
    letter = "B-";
  }
  else if(x >= 77.0 && x < 80.0) {
    letter = "C+";
  }
  else if(x >= 70 && x < 77.0) {
    letter = "C";
  }
  else if(x >= 60.0 && x < 70.0) {
    letter = "D";
  }
  else if(x < 60.0) {
    letter = "F";
  }
  printf("Your letter grade for CMPSC 131 is %s.\n", letter);
  return 0;
}