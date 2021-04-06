//
// Created by kyoto on 01/04/2021.
//

#include "Bureaucrat.hpp"
#include "Forms.hpp"

int     main(){
    Bureaucrat toto("Toto", 1);
    Bureaucrat tutu("Tutu", 1);
    Bureaucrat tata("Tata", 20);
    Forms form28b("Form 28B", 1, 1);
    Forms form28c("Form28C", 10, 10);

    toto.signForm(form28b);
    std::cout << form28b << std::endl;

    tutu.signForm(form28c);
    std::cout << form28c << std::endl;

    tata.signForm(form28c);
    std::cout << form28c << std::endl;
    return (0);
}
