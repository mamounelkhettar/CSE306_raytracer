#ifndef vector_h
#define vector_h

#include <iostream>
#include <math.h>       
using namespace std;

class Vector {
    public :
        explicit Vector ( double x = 0., double y = 0., double z = 0.) {
            coord[0] = x ;
            coord[1] = y ;
            coord[2] = z ;
        }
        Vector& operator+=(const Vector& b) {
            coord[0] += b[0] ;
            coord[1] += b[1] ;
            coord[2] += b[2] ;
            return *this ;
        }
        const double& operator[](int i) const {return coord[i] ; } 
        double& operator[](int i) { return coord[i] ; } 

    private :
        double coord[3] ;
};

Vector operator+(const Vector& a, const Vector &b) {
    return Vector(a[0]+b[0], a[1]+b[1], a[2]+b[2]) ;
}

double dot(const Vector& a, const Vector &b) {
    return a[0]*b[0] + a[1]*b[1] + a[2]*b[2] ;
}

double norm(const Vector& a) {
    return sqrt(a[0]*a[0] + a[1]*a[1] + a[2]*a[2]) ;
}

#endif