#ifndef COORDIN_H_  // if not defined 防止多次包含同一文件
#define COORDIN_H_

struct polar
{
    double distance;
    double angle;
};

struct rect
{
    double x;
    double y;
};

polar rect_to_poalr(rect xypos);
void show_polar(polar dapos);

#endif  // 若包含则跳到这步
