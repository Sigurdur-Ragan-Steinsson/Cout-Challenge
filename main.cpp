#include <iostream>

using namespace std;

int main() {
  string grade; 
  cout << "My name is oliver smith \n";
  cout << "My faovrite book is Reamde (as of right now)\n";
  cout << "Please enter your grade: ";
  cin >> grade; 
  string your_grade = "Your grade is ";
  string your_final_grade = your_grade + grade; 

  cout << your_final_grade; 
}

// Another way
//int main() {
//  int grade = 5; 
//  cout << "oliver smith \n";
//  cout << "I'm in grade: " << grade << endl;
//  cout << "My favorite tv show was \"Chicken attack\" ";
//}

// Note: cin >> lets the user input things
// << is into the console
// >> is out of the console