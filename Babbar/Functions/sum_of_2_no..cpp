 #include<iostream>
 using namespace std;

// sum of 2 numbers

//  int sum(int a , int b){
//     int s=a+b;
//     return s;
//  }

// min of 2 numbers
void min(float y, float x){
   if(y>x){
      cout<< "x is a greater number";
   }
   else if(y==x){
      cout<<"they both are equal";
   }
   else
   {
      cout<<"y is greater than x";
   }
   
}

int main(){
   min(54, 65);

}
//  redundancy -- unnececary repetion of code 