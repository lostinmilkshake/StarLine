#include<iostream>

// Класс, который описывает точку в двумерном пространстве 
class Dot2d
{
private:
    float x; // Координаты точки по х
    float y; // Координаты точки по у
public:
    Dot2d();
    Dot2d(float x, float y);
    virtual ~Dot2d();
    virtual void print(); 
    float getX() {
        return x;
    }
    float getY() {
        return y;
    }
};

Dot2d::Dot2d()
{
    this->x = 0;
    this->y = 0;
}

Dot2d::Dot2d(float x, float y) {
    // Инициализация координат точки
    this->x = x;
    this->y = y;
}

Dot2d::~Dot2d()
{
}

// Вывод точки в консоль
void Dot2d::print() {
    std::cout << " Координаты x: " << x << " Координаты y: " << y << std::endl;
}

// Класс, который описывает точку в трёхмерном пространстве
class Dot3d: public Dot2d {
    private: 
        float z; // Координаты точки по z
    public:
        Dot3d();
        Dot3d(float x, float y, float z) : Dot2d(x, y) {
            //Инициализация координат точки
            this->z = z;
        }
        ~Dot3d();
        void print();
        float getZ() {
            return z;
        }
};

Dot3d::Dot3d()
{
    this->z = 0;
}


Dot3d::~Dot3d() {

}

// Вывод координат точки в консоль
void Dot3d::print() {
    std::cout << "Координаты x: " << getX() << " Координаты y: " << getY() << " Координаты z: " << z << std::endl;
}
