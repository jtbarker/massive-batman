#include <iostream>
using namespace std;
 
int main(int argc, const char * argv[])
{
  cout << "Enter your first number: " << endl;
  float number1 = 0.0f;
  cin >> number1;
 
  cout << "Enter your second number: " << endl;
  float number2 = 0.0f;
  cin >> number2;
 
  float result = number1 + number2;
  cout << "The result of adding your two numbers is: " << result << endl;
  return 0;
}
