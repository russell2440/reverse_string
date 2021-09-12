
#include <iostream>
#include <string>

using namespace std;

string reverse_string(string str){
  if (str == ""){
    return("");
  } else {
    return(reverse_string(str.substr(1)) + str.at(0));
  }
}
int main() {
  string s = "Hello World!";
  cout<<"s: "<<s<<endl;
  string r = reverse_string(s);
  cout<<"r: "<<r<<endl;
}