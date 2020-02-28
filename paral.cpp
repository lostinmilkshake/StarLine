#include<iostream>
#include "dot.cpp"
// Класс, который описывает квадрат
class Square
{
protected:
    Dot2d bottomLeftDot;
    //float bottomLeftDotX; // Координаты левой нижней точки по х
    //float bottomLeftDotY; // Координаты левой нижней точки по у
    float length; // Длина стороны квадрата
public:
    Square(Dot2d bottomLeftDot, float length=0);
    ~Square();
    virtual void print();
};

Square::Square(Dot2d bottomLeftDot, float length=0)
{
    this->bottomLeftDot = bottomLeftDot;
    this->length = length;
}

Square::~Square()
{
}

// Вывод в консоль точек квадрата
void Square::print() {
    std::cout << "Левая нижняя точка по х: " << bottomLeftDot.getX() << " Левая нижняя точка по y: " << bottomLeftDot.getY() << std::endl;
    std::cout << "Левая верхняя точка по х: " << bottomLeftDot.getX() << " Левая верхняя точка по y: " << bottomLeftDot.getY() + length << std::endl;
    std::cout << "Правая верхняя точка по х: " << bottomLeftDot.getX() + length<< " Правая верхняя точка по y: " << bottomLeftDot.getY() + length << std::endl;
    std::cout << "Правая нижняя точка по х: " << bottomLeftDot.getX() + length<< " Правая нижняя точка по y: " << bottomLeftDot.getY() << std::endl;
}


// Класс, который описывает параллелепипед
class Parallelepiped: public Square {
    private:
        //float bottomLeftDotZ; // Координаты левой нижней точки нижней полоскости по z
        float height; // Высота параллелепипеда
    public:
        Parallelepiped(Dot3d bottomLeftDot,float length=0, float height=0);
        ~Parallelepiped();
        void print();
};

Parallelepiped::Parallelepiped(Dot3d bottomLeftDot, float length, float height) : Square(bottomLeftDot, length) {
    this->height = height;
}

Parallelepiped::~Parallelepiped() {

}

// Вывод в консоль точек параллелепипеда
void Parallelepiped::print() {
    Dot3d ourDot = bottomLeftDot;
    // Выводим точки нижней плоскости
    std::cout << "Левая нижняя нижней плоскости точка по х: " << bottomLeftDot.getX();
    std::cout << " Левая нижняя нижней плоскости точка по y: " << bottomLeftDot.getY();
    std::cout << " Левая нижняя нижней плоскости точка по z: " << bottomLeftDot.getZ() << std::endl;

    std::cout << "Правая нижняя нижней плоскости точка по х: " << bottomLeftDotX +  length;
    std::cout << " Правая нижняя нижней плоскости точка по y: " << bottomLeftDotY;
    std::cout << " Правая нижняя нижней плоскости точка по z: " << bottomLeftDotZ << std::endl;

    std::cout << "Правая верхняя нижней плоскости точка по х: " << bottomLeftDotX + length;
    std::cout << " Правая верхняя нижней плоскости точка по y: " << bottomLeftDotY + length;
    std::cout << " Правая верхняя нижней плоскости точка по z: " << bottomLeftDotZ << std::endl;

    std::cout << "Левая верхняя нижней плоскости точка по х: " << bottomLeftDotX;
    std::cout << " Левая верхняя нижней плоскости точка по y: " << bottomLeftDotY + length;
    std::cout << " Левая верхняя нижней плоскости точка по z: " << bottomLeftDotZ << std::endl;

    // Выводим точки верхней плоскоти
    std::cout << "Левая нижняя верхней плоскости точка по х: " << bottomLeftDotX;
    std::cout << " Левая нижняя верхней плоскости точка по y: " << bottomLeftDotY;
    std::cout << " Левая нижняя верхней плоскости точка по z: " << bottomLeftDotZ + height << std::endl;

    std::cout << "Правая нижняя верхней плоскости точка по х: " << bottomLeftDotX + length;
    std::cout << " Правая нижняя верхней плоскости точка по y: " << bottomLeftDotY;
    std::cout << " Правая нижняя верхней плоскости точка по z: " << bottomLeftDotZ + height << std::endl;

    std::cout << "Правая верхняя верхней плоскости точка по х: " << bottomLeftDotX + length;
    std::cout << " Правая верхняя верхней плоскости точка по y: " << bottomLeftDotY + length;
    std::cout << " Правая верхняя верхней плоскости точка по z: " << bottomLeftDotZ + height<< std::endl;

    std::cout << "Левая верхняя верхней плоскости точка по х: " << bottomLeftDotX;
    std::cout << " Левая верхняя верхней плоскости точка по y: " << bottomLeftDotY + length;
    std::cout << " Левая верхняя верхней плоскости точка по z: " << bottomLeftDotZ + height << std::endl;
}

int main(int argc, const char** argv) {
    Square *newSq = new Square(0, 0, 2);
    Parallelepiped *newParall = new Parallelepiped(1, 1, 1, 3, 2);

    newSq->print();
    newParall->print();
    return 0;
}