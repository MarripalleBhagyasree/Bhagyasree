#include <iostream>
using namespace std;
class String {
 private:
  char str[30];
 public:
    void getString() {
    cout << "Enter String:";
    cin >> str;
  }
string reverse() {
    char temp_str[30];
    int index_1, index_2, end;
    for (end = 0; str[end]; end++)
      ;
    for (index_1 = end - 1, index_2 = 0; index_1 >= 0; index_1--, index_2++) {
      temp_str[index_2] = str[index_1];
    }
    temp_str[index_2] = 0;
    return temp_str;
  }
};

int main() {

  String S;
string s;
  S.getString();

   s = S.reverse();

  cout << "Reversed String:" << s;

  return 0;
}
