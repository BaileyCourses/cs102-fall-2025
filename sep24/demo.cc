#include <iostream>
#include <fstream>

using namespace std;

size_t loadDict(){
  size_t count;
  string word;
  ifstream fin("./demo.cc");

  if (!fin.good()) {
    cerr << "Error opening file" << endl;
    exit (EXIT_FAILURE);
  }

  // While we haven't encountered the end of the file

  while (fin >> word) {
    cout << word << endl;
    count++;
  }
  return count;
}

int main() {
  cout << loadDict() << endl;
  cout << "Hi" << endl;
}
