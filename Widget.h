//
// Created by lushakag on 8/21/2018.
//
#include <iostream>
#include <vector>

//int g_x; // external linkage by default // redundant extern
//extern int g_y(2); // redundant extern
//extern const int g_z(12); // extern required since default internal
//
//const std::string name{"scott"};
//
//int add(int x, int y)
//{
//    return x + y;
//}
class Widget{
public:


    Widget();
    ~Widget();
    Widget* findField(const std::string fieldName);
    const Widget* findField(const std::string fieldName) const;

    std::vector<int> vi {1,2,3,4};
};

