#ifndef __Matrix__
#define __Matrix__

#include<iostream>
using namespace std;
class Matrix {
    private:
    int m,n;
    float **values;
    public:
    Matrix(int m=1, int n=1);
    Matrix(float *_values, int _n, int _m);

    ~Matrix();

    int getM();

    int getN();

    void setM(int _m);

    void setN(int _n);

    void setValues(float _values,int _n,int _m);

    float getValues(int i,int j);

    void showData();

    Matrix operator+(Matrix b);
    Matrix operator*(Matrix b);
    Matrix operator-(Matrix b);
    void operator=(Matrix b);
    void operator++(void);
    void operator--(void);
    void operator+=(int a);
    void operator-=(int a);
    void operator*=(int a);
};
#endif