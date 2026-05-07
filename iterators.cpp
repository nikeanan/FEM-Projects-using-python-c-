#include<iostream>
#include<vector>

int main(){
    std::vector<double> vec(2,3.1); /* The (2, 3.1) means: "Make the vector have 2 elements, and initialize them to 3.1" */
    
    vec[1] = 4.3;
    for(std::vector<double>::iterator it =vec.begin(); it!=vec.end(); ++it){
        std::cout<< *it << std::endl;
    }
    return 0;
}