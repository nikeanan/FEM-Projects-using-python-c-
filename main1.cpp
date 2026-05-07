#include<iostream>
/* comment section */
/* (1)
int main(){
    int a = 2;
    if(a==3){
        std::cout<< a << std::endl;
    }
    else if(a==3){
     std::cout<<"statement 2 is true.\n" ;
    }
    else{
        std::cout<< "no conditions met\n";
    }
    
    return 0;
}*/
/* (2)
int main(){
    int a = 2;
    int b = 3;
    if(a==2 &&b==3){
        std::cout<< a <<""<<b << std::endl;
    }
    else if(a==2 && b!=3){
     std::cout<<"statement 2 is true.\n" ;
    }
    else if(a!=2 && b==3){
     std::cout<<"statement 2 is true.\n" ;
    }
    else{
        std::cout<< "no conditions met\n";
    }
    
    return 0;
}*/

/* (3)
int main(){
    int a = 2;
    int b = 3;
    if(a==5 && b==6){
        std::cout<< a <<""<<b << std::endl;
    }
    else if(a==2 && b!=3){
     std::cout<<"statement 2 is true.\n" ;
    }
    else if(a!=2 || b==3){
     std::cout<<"statement 2.\n" ;
    }
    else{
        std::cout<< "no conditions met\n";
    }
    
    return 0;
}*/

#include<iostream>
#include<vector>

int c = 4;

int main(){
    int a=1;
    if(a==1){
        std::cout <<"a = 1\n";
        int b =1 ;
    }

    std:: cout << c << std::endl;

   std::vector<double> vec(10,2); /* The (10, 2) means: "Make the 
   vector size 10, and fill every single spot with the number 2.0*/
   for(int i=0; i<10; i+=1){
    std::cout<< vec[i] << std::endl;
    
   } /* The above code creates a vector of doubles with 10 elements, all initialized to 2.0. 
   It then uses a for loop to iterate through the vector and print each element to the console. 
   The output will be ten lines, each containing the number 2.0.*/
   return 0;
}