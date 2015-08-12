#define __RASPBERRY_PI__1

#ifdef __RASPBERRY_PI__
#define NAME_COLOR1 "\x1b[1m\x1b[32m"
#define NAME_COLOR2 "\x1b[1m\x1b[34m"
#define NAME_STRING "pi@raspberrypi"
#define USER_NAME "/home/pi"
#endif

#ifndef __RASPBERRY_PI__
#define NAME_COLOR1 "\x1b[39m"
#define NAME_COLOR2 "\x1b[39m"
#define NAME_STRING "sakamoto@sakamoto-CF=AX2SDLTC"
#define USER_NAME "/home/sakamoto"
#endif

#include <fstream>
#include <iostream>
#include <string>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>

#define STARTUP_FILE "startup.txt"
#define PATH_SIZE 512

using namespace std;

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

int main(void)
{
  startup();
  int i=0;
  int name_size;
  int pwd_size;
  int flag;
  char pwd[PATH_SIZE];
  char input[500];

  getcwd(pwd,PATH_SIZE);

  flag=0;
  while(flag==0){

	cout << NAME_COLOR1 << NAME_STRING;

	name_size = strlen(USER_NAME);
	pwd_size = strlen(pwd);

	cout << NAME_COLOR2 << " ~";
	for(i=name_size; i<pwd_size ;i++){
	  printf("%c",pwd[i]);
	}
	printf(" $ \x1b[39m");

	gets(input);
	if(input[0]!='\0'){
	  flag=1;
	}
  }

  printf("%s\n",input);
  end();

  return 0;
}
