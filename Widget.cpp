//
// Created by lushakag on 8/21/2018.
//

#include "Widget.h"


Widget::Widget()
{
    std::cout << "Widget construtor called" << std::endl;
}

Widget::~Widget() {
    std::cout << "Widget destructor called" << std::endl;
}

Widget* Widget::findField(const std::string fieldName)
{
    std::cout << "non const  findField called" << std::endl;
}
const Widget* Widget::findField(const std::string fieldName) const
{
    std::cout << "const  findField called" << std::endl;
}