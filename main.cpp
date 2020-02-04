//Nick Marzella
//2/4/20
// This program will prompt the user with two random numbers
// Then the user will add them together and check their answer
// rand()% and a number can reduce the max of rand
#include <iostream>
#include <cstdlib>
using namespace std;

int main() 
{
  
  int aNumber1 = 0;
  int aNumber2 = 0;
  long long int sum = 0;
  

  aNumber1 = rand()%200;

  cout<< "Your first number is: "<< aNumber1 << endl;  

  aNumber2 = rand()%200;

  cout<<"Your second number is: "<< aNumber2 << endl;

  sum = aNumber1 + aNumber2;

  cout<<"Press enter when ready to check your answer "<<endl;

  string command;

  getline(cin,command);

  cout<<"Your sum is: "<< sum << endl;




  return 0;
}