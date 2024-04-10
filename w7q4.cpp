#include <iostream>

using namespace std;

class Alphabet {
private:
  char ch;
public:
  // use ch to set the alphabet.
  Alphabet(char x) 
  {
    setCh();
  }
  void setCh(char c)
  {
    ch = c;
  }

  friend ostream& operator<<(ostream& out, const Alphabet& a);

  Alphabet& operator>>(int shift) {
    ch = ((ch - 'A') + shift) % 26 + 'A';
    return *this;
  }

  Alphabet& operator<<(int shift) {
    ch = ((ch - 'a') + shift) % 26 + 'a';
    return *this;
  }
  
};
ostream& operator<<(ostream& out, const Alphabet& a) {
  out << a.ch;
  return out;
}

int main() {
  Alphabet a('X'), b('c');
  cout<<a<<endl; // display X
  cout<<b<<endl; // display c
  a >> 3;
  b << 4;
  cout<<a<<endl; // display A
  cout<<b<<endl; // display y
  return 0;
}