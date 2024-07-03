#include<iostream>
using namespace std;

int main () {

  char ch = '1';

  cout<<endl;
  switch(ch) {

    case 1: cout<< "first" <<endl;
          break;

    case '1': cout<<"char" <<endl;
          break;

    default: cout<< " it is default case" <<endl;
  }

  cout<<endl; 

  return 0;
}