#include <iostream>

using namespace std;


void sevenchars(string text) {
  for (int i=0; i < 7; i++){
    cout << text[i];
  }
}

int main() {
  string text = "Andy is the greatest";
  cout << text << endl << "String length: " << text.length() << endl;
  cout << text.substr (0,7) << endl;
  sevenchars(text);
}
