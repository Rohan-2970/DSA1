#include<iostream>
using namespace std;

void findMin(float y, float x){
   if(y > x){
      cout << "y is greater than x";
   }
   else if(y == x){
      cout << "Both are equal";
   }
   else{
      cout << "x is greater than y";
   }
}

int main(){
   findMin(54, 65);
}
