#include <iostream>
#include <string.h>
#include <stdlib.h>
// code
using namespace std;

int main(){

  FILE *fr;
  char* sito;
  char* user;
  char* pass;

  if ((fr=fopen("passrem.txt","wt")) == NULL){
    cout<<"ERROR"<<endl;
    exit(0);
  }

  cout<<"sito:"<<endl;
  cin>>sito;
  cout<<"user:"<<endl;
  cin>>user;
  cout<<"passw:"<<endl;
  cin>>pass;
  fflush(stdin);
  fprintf(fr,"site: %s user: %s password: %s", sito, user, pass);
  fclose(fr);

  return 0;
}
