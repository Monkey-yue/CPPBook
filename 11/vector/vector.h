#ifndef VECTOR_H_
#define VECTOR_H_
#include <iostream>
namespace VECTOR
{
    class Vector
    {
        public:
            enum Mode {RECT, POL};  // 直角坐标模式， 极坐标模式
        private:
            double x;
            double y;
            double mag; //  向量的长度
            double ang; // 向量的弧度
            Mode mode;
            void set_mag(); // 设置距离值
            void set_ang(); // 设置角度值
            void set_x();
            void set_y();
        public:
            Vector();
            Vector(double n1, double n2, Mode form = RECT);
            void reset(double n1, double n2, Mode form = RECT);
            ~Vector();
            double xval() const {return x;}
            double yval() const {return y;}
            double magval() const {return mag;}
            double angval() const {return ang;}

            void polar_mode();
            void rect_mode();

            Vector operator+(const Vector & b) const;
            Vector operator-(const Vector & b) const;
            Vector operator-() const;
            Vector operator*(double n) const;

            friend Vector operator*(double n, const Vector & a);
            friend std::ostream & operator<<(std::ostream & os, const Vector & v);
    };
}

#endif