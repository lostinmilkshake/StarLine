import typing

class Square:
    def __init__(self, bottomLeftDotX=0, bottomLeftDotY=0, length=0):
        try:
            self._bottomLeftDotX = float(bottomLeftDotX) # Инициализация левой нижней точки по x
            self._bottomLeftDotY = float(bottomLeftDotY) # Инициализация левой нижней точки по y
            self._length = float(length) # Инициализация длины стороны квадрата
        except Exception:
            # Кидаем ошибку, если переданные данные не являются числами
            raise ValueError("Invalid values")
    # Вывод в консоль точек квадрата
    def printObj(self):
        print("Левая нижняя точка по х: ", self._bottomLeftDotX, " Левая нижняя точка по y: ", self._bottomLeftDotY)
        print("Левая верхняя точка по х: ", self._bottomLeftDotX, " Левая верхняя точка по y: ", self._bottomLeftDotY + self._length)
        print("Правая верхняя точка по х: ", self._bottomLeftDotX + self._length, " Правая верхняя точка по y: ", self._bottomLeftDotY + self._length)
        print("Правая нижняя точка по х: ", self._bottomLeftDotX + self._length, " Правая нижняя точка по y: ", self._bottomLeftDotY)

class Parallelepiped(Square):
    def __init__(self, bottomLeftDotX: float=0, bottomLeftDotY: float=0, bottomLeftDotZ: float=0, length: float=0, height: float=0)->None:
        try:
            Square.__init__(self, bottomLeftDotX, bottomLeftDotY, length)
            self.__bottomLeftDotZ = bottomLeftDotZ # Инициализация левой нижней точки нижней плоскости по z
            self.__height = height # Инициализация высоты
        except Exception: 
            # Кидаем ошибку, если переданные данные не являются числами
            raise ValueError("Invalid values")
    # Вывод в консоль точек параллелепипеда
    def printObj(self):
        print("Левая нижняя нижней плоскости точка по х: ", self._bottomLeftDotX)
        print(" Левая нижняя нижней плоскости точка по y: ", self._bottomLeftDotY)
        print(" Левая нижняя нижней плоскости точка по z: ", self.__bottomLeftDotZ)
        print("Правая нижняя нижней плоскости точка по х: ", self._bottomLeftDotX + self._length)
        print(" Правая нижняя нижней плоскости точка по y: ", self._bottomLeftDotY)
        print(" Правая нижняя нижней плоскости точка по z: ", self.__bottomLeftDotZ)
        print("Правая верхняя нижней плоскости точка по х: ", self._bottomLeftDotX + self._length)
        print(" Правая верхняя нижней плоскости точка по y: ", self._bottomLeftDotY + self._length)
        print(" Правая верхняя нижней плоскости точка по z: ", self.__bottomLeftDotZ)
        print("Левая верхняя нижней плоскости точка по х: ", self._bottomLeftDotX)
        print(" Левая верхняя нижней плоскости точка по y: ", self._bottomLeftDotY + self._length)
        print(" Левая верхняя нижней плоскости точка по z: ", self.__bottomLeftDotZ)
        print("Левая нижняя верхней плоскости точка по х: ", self._bottomLeftDotX)
        print(" Левая нижняя верхней плоскости точка по y: ", self._bottomLeftDotY)
        print(" Левая нижняя верхней плоскости точка по z: ", self.__bottomLeftDotZ + self.__height)
        print("Правая нижняя верхней плоскости точка по х: ", self._bottomLeftDotX + self._length)
        print(" Правая нижняя верхней плоскости точка по y: ", self._bottomLeftDotY)
        print(" Правая нижняя верхней плоскости точка по z: ", self.__bottomLeftDotZ + self.__height)
        print("Правая верхняя верхней плоскости точка по х: ", self._bottomLeftDotX + self._length)
        print(" Правая верхняя верхней плоскости точка по y: ", self._bottomLeftDotY + self._length)
        print(" Правая верхняя верхней плоскости точка по z: ", self.__bottomLeftDotZ + self.__height)
        print("Левая верхняя верхней плоскости точка по х: ", self._bottomLeftDotX)
        print(" Левая верхняя верхней плоскости точка по y: ", self._bottomLeftDotY + self._length)
        print(" Левая верхняя верхней плоскости точка по z: ", self.__bottomLeftDotZ + self.__height)
    
