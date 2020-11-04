//____________________________Indirect Recursion_________________________//

#include<stdio.h>

void fun2(int z);

void fun1(int a){
    if(a>0){
        printf("%d",a);
        fun2(a-1);
    }
}

void fun2(int b){
   if(b>1){
       printf("%d",b);
       fun1(b/2);
   }
}

int main(){
  int x=20;
  fun1(x);

  return 0;
}


//---------------------------------------------------------------------//