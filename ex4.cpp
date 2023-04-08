#include <iostream>
#include <sstream>
#include <fstream>

using namespace std;

int main(){

  ifstream in("entrada.txt", fstream::in);
  ofstream out("saida.txt", fstream::out);

  string line;

  while (getline(in, line)){
    cout << "*" << line << "*" << endl;
    out << "[" << line << "]" << endl;
  }
  
  return 0;
}