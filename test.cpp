#include <iostream>
#include <sys/utsname.h>

using namespace std;

void getSystem() {
  struct utsname unameInfo;

  if (uname(&unameInfo) == -1) {
    cout << "ERROR\n";
    exit(-1);
  }

  cout << "System: " << unameInfo.sysname << endl;
}

int main() {

  getSystem();

  return 0;
}