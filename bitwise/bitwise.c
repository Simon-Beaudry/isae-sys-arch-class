#include <stdio.h>
#include <stdbool.h>

bool LSBisOdd(int n){
  if ((n & 1) == 1){
    return true;
  }
  else{
    return false;
  }
}

bool MSBisOdd(int n){
  if ((n & 0x80000000) == 0x80000000){
    return true;
  }
  else{
    return false;
  }
}

bool bitIsOdd(int n, int pos){
  n = n >> pos;
  if ((n & 1) == 1){
    return true;
  }
  else{
    return false;
  }
}

int setBit(int n, int pos){
  n = n | (1 << pos);
  return n;
}

int clearBit(int n, int pos){
  n = n & (1 << pos);
  return n;
}

void decimalToBinary(int dec){
  for(int i = 0; i < sizeof(dec)*8; i++){
    if((dec & 1) == 1){printf("1");}
    else {printf("0");}
    dec = dec >> 1;
  }
}

int calculateLeadingZeros(int n){
  int count = 0;
  while((n & 0x80000000) != 0x80000000){
    n = n << 1;
    count++;
  }
  return count;
}


int main() {

  printf("answ : %d\n",LSBisOdd(1));
  printf("answ : %d\n",MSBisOdd(-2));
  printf("answ : %d\n",bitIsOdd(2,0));
  printf("answ : %d\n",calculateLeadingZeros(2));
  decimalToBinary(5);

  return 0;
}
