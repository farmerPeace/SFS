#include <iostream>
#include <string>
#include <fstream>
#include <sys/utsname.h>

using namespace std;

void fileMode(string option, string file) {
  ofstream iFile;

  if (option == "--create" || option == "-c") {
    iFile.open(file);
  } else if (option == "--open" || option == "-o") {
    cout << "Elegiste la opcion 'abrir' para el archivo " << file << endl;
  } else if (option == "--write" || option == "-w") {
    cout << "Elegiste la opcion 'abrir' para el archivo " << file << endl;
  } else if (option == "--remove" || option == "-r") {
    cout << "Elegiste la opcion 'abrir' para el archivo " << file << endl;
  } else {
    cout << "No elegite una opcion valida\n";
  }
  exit(0);
}

int main(int argc, char **argv) {
  if (argc < 2) {
    cout << "Faltan argumentos";
    exit(-1);
  }
  
  fileMode(argv[1], argv[2]);

  return 0;
}