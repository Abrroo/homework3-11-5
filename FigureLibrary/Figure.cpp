#include "Figure.h"
#include <iostream>


    Figure::Figure() {}
    Figure::Figure(int a, int b, int c, int A, int B, int C)
    {
        this->a = a;
        this->b = b;
        this->c = c;
        this->A = A;
        this->B = B;
        this->C = C;
    }
    Figure::Figure(int a, int b, int c, int d, int A, int B, int C, int D)
    {
        this->a = a;
        this->b = b;
        this->c = c;
        this->d = d;
        this->A = A;
        this->B = B;
        this->C = C;
        this->D = D;
    }
    std::string Figure::get_name_figure()
    {
        return "Фигура";
    }
    void Figure::print()
    {
        std::cout << get_name_figure() << std::endl;
        std::string result1 = "Стороны: a=" + std::to_string(a) + " b=" + std::to_string(b) + " c=" + std::to_string(c);
        if (d > 0)
        {
            result1 = result1 + " d=" + std::to_string(d);
        }
        std::string result2 = "Углы: A=" + std::to_string(A) + " B=" + std::to_string(B) + " C=" + std::to_string(C);
        if (D > 0)
        {
            result2 = result2 + " D=" + std::to_string(D);
        }
        std::cout << result1 << std::endl;
        std::cout << result2 << std::endl << std::endl;
    }