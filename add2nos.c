#include<iostream>
using namespace std;

int add1(int a, int b){
  int c = a+b;
  return c;
}

int add2(int a, int b){
  return a+b;
}
int add6(int &a,int&b){
  cout<<"refernce ";
  return a+b;
}
int add7(int *a, int *b){
  cout<<"pointer ";
  return (*a) + (*b);
}

int& add3(int a, int b){
  int c=a+b;
  return c;
}

int* add4(int a, int b){
  int c=a+b;
  return &c;
}

void add5(int a, int b){
  cout<<"Method 10  "<<a+b<<endl;
}



int main(){
  int a=5, b=2, sum , *ptr;
  cout<<"Method 1  "<<a+b<<endl;
  cout<<"Method 2  "<<add1(a,b)<<endl;
  cout<<"Method 3  "<<add2(a,b)<<endl;
  cout<<"Method 4  "<<add7(&a,&b)<<endl;
  cout<<"Method 5  "<<add6(a,b)<<endl;
  sum=add3(a,b);
  cout<<"Method 6  "<<"sum = "<<sum<<endl;
  ptr = add4(a,b);
  cout<<"Method 7  "<<"ptr = "<<*ptr<<endl;
  cout<<"Enter 2 nos to add them"<<endl;
  cin>>a>>b;
  cout<<"Method 8  "<<"The addition of 2 nos is "<<a+b<<endl;
  sum = a+b;
  cout<<"Method 9  "<<"sum = "<<sum<<endl;
  add5(a,b);
  return 0;
}
