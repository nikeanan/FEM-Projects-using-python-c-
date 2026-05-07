#include<iostream>

class Triangle{
public:
    // class constructor function
    Triangle(double b, double h);
    //class function
    double area();
private:/* if we want to hide the class variables,
    we can declare them as private, 
     so they cannot be accessed outside the class.*/
     
    // class variables
    double base, height;
};


/*The Triangle class represents a geometric triangle with attributes base and height.
It includes a constructor to initialize these attributes and a member function area() 
to calculate the triangle's area.*/
Triangle::Triangle(double b, double h){
    base = b;
    height = h;
}

double Triangle::area(){
    return 0.5 *base*height;
}   

int main(){
    Triangle tri1(1.,5.), tri2(3.,2.);
    std::cout << tri1.area() << std::endl;
    
    return 0;

}