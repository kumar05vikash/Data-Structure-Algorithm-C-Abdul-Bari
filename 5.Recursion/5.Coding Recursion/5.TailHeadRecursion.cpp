
//__________________________________________________________Recursion_______________________________________________________________//
//-----------------------------------------------------------------------------------------------------------------------------------//
//__Recursion__//

//__________________Tail Recursion__________________//

// #include<stdio.h>

// void fun(int n){

//     if(n>0){
//         printf("Printing First : %d\n",n);                  //----------------------Calling Time--------------------------//
//         fun(n-1);
//     }
// }

// int main(){
//     int x=5;
//     fun(x);

//     return 0;
// }

//_______________Head Recursion_______________________//

// #include<stdio.h>

// void fun(int n){

//     if(n>0){
//     fun(n-1);
//     printf("Printing last : %d \n",n);                     //----------------------Returning Time------------------------//
//     }

// }

// int main(){
// int a=5;
// fun(a);

// return 0;
// }

//-----------------------------------------------------------------------------------------------------------------------------------//