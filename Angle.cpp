//
// Created by lushakag on 11/1/2018.
//

#include <algorithm>
#include <vector>
#include <iostream>

using namespace std;

auto findNearest(int angle)
{
    std::vector<int> relativeAngles{-135, -90, -30, 0 , 30, 90, 135, 180};
    auto nearestAngle{angle};
    auto minDiff{360};
    for (auto value : relativeAngles)
    {
        if(abs(value - angle) < minDiff)
        {
            nearestAngle = value;
            minDiff = abs(value - angle);
        }
    }
    return nearestAngle;
}

int solution(int X, int Y)
{
    auto rotation = 0;
    if(abs(X - Y) == 0)
    {
        rotation = 180;
    }
    else if(abs(X - Y) == 180)
    {
        rotation = 0;
    }
    else if(X < Y)
    {
        rotation = abs(Y - X) - 180;
    }
    else if(X > Y)
    {
        rotation = 180 - abs(X - Y);
    }

    return findNearest(rotation);
}

int main()
{
    cout <<"NEAREST ANGLE : " << solution(270, 40) << endl;
    cout <<"NEAREST ANGLE : " << solution(5, 200) << endl;
    cout <<"NEAREST ANGLE : " << solution(100, 275) << endl;
    cout <<"NEAREST ANGLE : " << solution(200, 290) << endl;
    cout <<"NEAREST ANGLE : " << solution(200, 0) << endl;
    cout <<"NEAREST ANGLE : " << solution(200, 30) << endl;
    cout <<"NEAREST ANGLE : " << solution(300, 30) << endl;
    cout <<"NEAREST ANGLE : " << solution(30, 300) << endl;
    cout <<"NEAREST ANGLE : " << solution(30, 120) << endl;
    cout <<"NEAREST ANGLE : " << solution(180, 0) << endl;
    cout <<"NEAREST ANGLE : " << solution(180, 180) << endl;
    cout <<"NEAREST ANGLE : " << solution(90, 180) << endl;
    cout <<"NEAREST ANGLE : " << solution(90, 0) << endl;
    cout <<"NEAREST ANGLE : " << solution(90, 270) << endl;
    cout <<"NEAREST ANGLE : " << solution(5, 300) << endl;
    cout <<"NEAREST ANGLE : " << solution(5, 10) << endl;
    cout <<"NEAREST ANGLE : " << solution(5, 355) << endl;
    cout <<"NEAREST ANGLE : " << solution(135, 100) << endl;

    return 0;
}

//NEAREST ANGLE : -30
//NEAREST ANGLE : 0
//NEAREST ANGLE : 0
//NEAREST ANGLE : -90
//NEAREST ANGLE : -30
//NEAREST ANGLE : 0
//NEAREST ANGLE : -90
//NEAREST ANGLE : 90
//NEAREST ANGLE : -90
//NEAREST ANGLE : 0
