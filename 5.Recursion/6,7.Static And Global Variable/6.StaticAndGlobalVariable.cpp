//__-------------Static and Global Variable------------------__//

//----Returning Time-----//

//___________Recursion With Local Variable_______(----Normal Recursion----)______//

// #include<stdio.h>

// int fun(int n){

//     if(n>0){

//        return fun(n-1)+n;                                   //--value of n will be print at Returning time--//
//     }
//     return 0;
// }

// int main(){
//     int a=5;
//     printf("The value is %d",fun(a));

//     return 0;
// }

//_____________Recursion With Static Variable_____________//

// #include<stdio.h>

// int fun(int n){
//    static int x=0;
//     if(n>0){
//     x++;
//     return fun(n-1)+x;                                    //--value of x will be print at Returning time--//
//     }
//     return 0;
// }

// int main(){
//     int a=5;
//     printf("The value is %d",fun(a));

//     return 0;
// }

//_____________Recursion With Global Variable_____________//

// #include<stdio.h>

// int x=0;

// int fun(int n){

//     if(n>0){
//     x++;
//     return fun(n-1)+x;                                    //--value of x will be print at Returning time--//
//     }
//     return 0;
// }

// int main(){
//     int a=5;
//     printf("The value is %d",fun(a));

//     return 0;
// }

//_____________calling 2nd time Recursion With Global Variable in main()_____________//

// #include <stdio.h>

// int x = 0;

// int fun(int n)
// {

//     if (n > 0)
//     {
//         x++;
//         return fun(n - 1) + x; //--value of x will be print at Returning time--//
//     }
//     return 0;
// }

// int main()
// {
//     int a = 5;
//     printf("The value is %d\n", fun(a));
//     printf("The value is %d\n", fun(a));

//     return 0;
// }

//_____________calling 2nd time Recursion With Static Variable in main()_____________//

// #include<stdio.h>

// int fun(int n){
//    static int x=0;
//     if(n>0){
//     x++;
//     return fun(n-1)+x;                                    //--value of x will be print at Returning time--//
//     }
//     return 0;
// }

// int main(){
//     int a=5;
//     printf("The value is %d\n",fun(a));
//     printf("The value is %d\n",fun(a));

//     return 0;
// }

//___________calling 2nd time Recursion With Local Variable in main()_______(----Normal Recursion----)______//

// #include<stdio.h>

// int fun(int n){

//     if(n>0){

//        return fun(n-1)+n;                                   //--value of n will be print at Returning time--//
//     }
//     return 0;
// }

// int main(){
//     int a=5;
//     printf("The value is %d\n",fun(a));
//      printf("The value is %d\n",fun(a));

//     return 0;
// }

//-----------------------------------------------------------------------------------------------------------------------------------//
