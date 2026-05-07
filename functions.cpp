#include<iostream>
#include<vector>

double  triangle_area1(double base, double height){
    double area = 1./2*base*height;
return area;
/*return 1./2*base*height intead of [double area = 1./2*base*height;
return area]*/
}

void  triangle_area2(double base, double height, double &area){
    area = 1./2*base*height;
}

void  square_info(double length, double &area, double &perimeter){
    area = length * length;
    perimeter = 4 * length;
}

void print_vec(std::vector<double> out){
    for(int i =0; i<out.size(); i++){
        std::cout<<out[i] << std::endl ;
    }
}

int main(){
    /*double Area1, Perimeter1 ;
    square_info(3., Area1, Perimeter1);
    std::cout<<Area1 << " " << Perimeter1 << std::endl;*/
    std::vector<double> test(3,1.2);
    print_vec(test);

    return 0;
}