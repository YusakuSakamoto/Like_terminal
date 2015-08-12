#define __RASPBERRY_PI__

#ifdef __RASPBERRY_PI__
#define NAME_COLOR1 "\x1b[1m\x1b[32m"
#define NAME_COLOR2 "\x1b[1m\x1b[34m"
#define NAME_STRING "pi@raspberrypi"
#endif

#ifndef __RASPBERRY_PI__
#define NAME_COLOR1 "\x1b[39m"
#define NAME_COLOR2 "\x1b[39m"
#define NAME_STRING "sakamoto@sakamoto-CF=AX2SDLTC"
#endif

#include <fstream>
#include <iostream>
#include <string>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

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
  const char USER_NAME[9] = "/home/pi";

  getcwd(pwd,PATH_SIZE);

  flag=0;
  while(flag==0){

	cout << NAME_COLOR1 << NAME_STRING;

	name_size = strlen(USER_NAME);
	pwd_size = strlen(pwd);

<<<<<<< HEAD
  printf("\x1b[39m");
  printf("前景色がデフォルト\n");

=======
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
>>>>>>> b92d729e28f1b394d709305efaff30f70f1504bb
  end();

  return 0;
}
