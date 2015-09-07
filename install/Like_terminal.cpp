#include "Like_terminal.h"

int startup(void){
  ifstream ifs("startup.txt");
  string str;

  if(ifs.fail()) return -1;

  while(getline(ifs,str)){
	cout << str << endl;
  }
  return 0;
}

int end(void){
  ifstream ifs("end.txt");
  string str;
  if(ifs.fail()) return -1;
  while(getline(ifs,str))cout << str << endl;
  return 0;
}
