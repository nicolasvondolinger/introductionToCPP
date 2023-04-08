#include <iostream>
#include <sstream>

using namespace std;

int main(){

  string phrase = "Lorem ipsum dolor sit amet";
  string word;

  stringstream s(phrase);

  while ( s >> word){
    cout << word << endl;
  }
  

  return 0;
}