#include <iostream>

class Complejo{
    private:
        int a_;
        int b_;
    public:
        Complejo(int n, int m);
        Complejo();
        ~Complejo();
        void imprimir();
        void suma(Complejo A, Complejo B);
        void resta_real(Complejo A, int a);
        void resta(Complejo A, Complejo B);
        int get_a();
        int get_b();

};

