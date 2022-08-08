#include <iostream>
using namespace std;

int main(){
  int end = 10000;
  int sum = 0;
  int average;

  for (int i=0; i<end; i+=2){
    sum += i;
  }
  average = sum/5000;
  cout<<"The average of even numbers from 0 to 10000 is " <<average<<endl;
}
