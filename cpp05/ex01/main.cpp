#include "Bureaucrat.hpp"
#include "Form.hpp"
#include <iostream>
#include <string>

int main() {
    try {
        Bureaucrat bure(120, "John");
        Form form(50, 60, "Ingilizce Yeterlilik Formu");
        bure.signForm(form);
    } catch(std::exception &e) {
        std::cout << e.what();
    }
}