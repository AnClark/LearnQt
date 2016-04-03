#ifndef CIRCLETOOL_H
#define CIRCLETOOL_H

const double pi=3.1415926;

class CircleTool
{
private:
    double radius;
public:
    CircleTool(const double &r);           //构造函数
    double GenSquare();             //求圆的面积
    double GenCircum();             //求圆的周长
};

#endif // CIRCLETOOL_H
