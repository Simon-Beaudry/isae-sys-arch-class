#include <stdio.h>
#include <math.h>

double computePi(int n){
  float my_sum = 4.0;
  int one = -1;

  for(int i=1;i<n+1;i++){
    my_sum += (4.0 * (one))/(2.0*i+1);
    one = -1*one;
  }

  return my_sum;
}

int main() {

  printf("Pi is : %f \n",computePi(1000));

  return 0;

}
