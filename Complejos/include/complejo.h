#ifndef COMPLEJO_H
#define COMPLEJO_H


class complejo
{
    private:
        int r;
        int i;
    public:
        complejo();
        complejo(int x, int y);

        complejo suma(complejo x);
        bool igualdad(complejo x);
        complejo multiplicacion(complejo x);
        void print()
};

#endif // COMPLEJO_H
