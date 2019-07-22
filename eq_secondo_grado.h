#include<cmath>
#include<iostream>


void eq_secondo_grado(int a, int b, int c, double* soluzioni){
    int d = b*b-4*a*c;
    if (d < 0){
        std::cout << "delta minore di zero, non ci sono soluzioni!";
    }else{
        if(a==0){
            std::cout << "non è un'equazione di secondo grado";
        }else{
            double x;
            double y;
            x=(-b+sqrt(d))/(2*a);
            y=(-b-sqrt(d))/(2*a);

            soluzioni[0] = x;
            soluzioni[1] = y;
        }
    }
}



