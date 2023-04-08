#include <iostream>

using namespace std;

int main(){

  string nome_completo;

  cout << "Type your fullname: ";
  getline(cin, nome_completo);

  cout << "Hello, " << nome_completo << endl;

  return 0;
}