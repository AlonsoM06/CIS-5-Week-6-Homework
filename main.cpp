#include <iostream>
#include <string>
using std::cout;
using std::cin;
using std::endl;

// Homework 6 — Alonso Martinez 
// CIS 5 Week 06 · Menu

int main() {
int n = 0;
do {
cout << "Enter number 1-3" << endl;
cin >> n;
 

if (n==1) {
  cout << "Hello Alonso " << endl; 
}
if (n==2) {
  for (int i = 50 ; i >= 0; i--)
  cout << i << endl;
}
if (n==3) {
  break;
}

}while (n >= 1 && n <= 3);

cout <<"The menu has ended " << endl;


  return 0;
}
