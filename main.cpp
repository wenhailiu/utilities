#include <iostream>
#include <string>

#include "utilities.h"

int main(int argc, char* argv[]){

    std::string path = "/home/wenhai/img_registration_ws/3d_FUSION_DATA/mri/mri.raw.gz"; 
    std::cout << Utilities::GetFileExtension(path) << std::endl; 

    return 0; 
}