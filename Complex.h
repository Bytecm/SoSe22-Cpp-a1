//
// Created by chris on 11.02.2022.
//

#ifndef SOSE22_CPP_A1_COMPLEX_H
#define SOSE22_CPP_A1_COMPLEX_H


class Complex {

public:

    Complex(){
        k_x = 0.00;
        k_y = 0.00;
        p_t = 0.00;
        p_r = 0.00;
    }

    void set_kart(double x, double y);

    void set_polar(double t, double r);

    void set_x(double x);

    void set_y(double y);

    void set_theta(double theta);

    void set_r(double r);

    void print();

    double* get_kart(double *kart);

    double* get_pol(double *pol);

    void calculate_kart();

    void calculate_pol();

private:
    double k_x;
    double k_y;
    double p_t;
    double p_r;
};

#endif //SOSE22_CPP_A1_COMPLEX_H
