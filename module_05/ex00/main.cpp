//
// Created by kyoto on 01/04/2021.
//

#include "Bureaucrat.hpp"

int     main(){
    try {
        Bureaucrat init_too_low = {"Blanquer", 200};
    } catch ( const std::exception &e ){
        std::cerr << "Blanquer has " << e.what() << std::endl;
    }

    try {
        Bureaucrat init_too_high = { "Macron", 0 };
    } catch ( const std::exception &e ){
        std::cerr << "Macron has " << e.what() << std::endl;
    }

    try {
        Bureaucrat runtime_too_low = { "Castex", 1 };

        runtime_too_low.incGrade();
    } catch ( const std::exception &e ){
        std::cerr << "Castex has " << e.what() << std::endl;
    }

    try {
        Bureaucrat runtime_too_high = { "Darmanin", 150 };

        runtime_too_high.decGrade();
    } catch ( const std::exception &e ){
        std::cerr << "Darmanin has " << e.what() << std::endl;
    }
    return (0);
}