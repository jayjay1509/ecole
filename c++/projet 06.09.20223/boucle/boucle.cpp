
#include <iostream>

int main()
{

    const char* names[9] = {
        "linus",
        "maxence",
        "maxime",
        "adelina",
        "jayson",
        "matthieu",
        "anthony",
        "antoine",
        "thomas",
    };
    
    ;
  

    for (int a = 0; a < 9; a = a+1) {
        std::cout<< (a+1)<<"\t";
        std::cout<<"Hello "<<names[a]<<"\n";
        }

        
    
}


