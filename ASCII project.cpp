#include <iostream>
using namespace std;

int main(){

  char charactar;
  cout << "enter the charctar A-Z = " << endl;
  cin >> charactar;
  cout << "your charactar in ASCII is = " << int(charactar) << endl;

  int ASCII_value;
  cout << "enter ASCII value : " << endl ;
  cin >> ASCII_value;
  cout << "your ASCII value = " << char(ASCII_value) << endl;

  return 0;
}