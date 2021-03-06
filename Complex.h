//
// Created by chris on 11.02.2022.
//

#ifndef SOSE22_CPP_A1_COMPLEX_H
#define SOSE22_CPP_A1_COMPLEX_H

#include <string>


class Complex {

public:

    //Fix for non empty initial value
    Complex() {
        c_real = 0.00;
        c_imag = 0.00;
        p_theta = 0.00;
        p_complex = 0.00;
        instance_count++;
    }


    Complex(double real = 0.00, double imag = 0.00, double theta = 0.00, double complex = 0.00) : c_real(real),
                                                                                                  c_imag(imag),
                                                                                                  p_theta(theta),
                                                                                                  p_complex(complex) {
        if (real == 0.00 && imag == 0.00) {
            this->calculate_cart();
        } else {
            this->calculate_pol();
        }
        instance_count++;
    }

    Complex( const Complex& input_complex){
        instance_count++;
    }

    ~Complex() {
        Complex::instance_count--;
    }

    void set_cart(double real, double imag);  //Setting all cartesian values

    void set_polar(double theta, double complex); //setting all polar

    void set_real(double real);   //set real part

    void set_imag(double imag); //set imaginal part

    void set_theta(double theta);   //set theta

    void set_complex(double complex);   //set complex

    std::string toString() const;   //toString cartesian and polar values

    std::string cartToString() const;  //toString cartesian values

    std::string polarToString() const;   //toString polar values

    static int instance_count;

private:
    //cartesian values
    double c_real;
    double c_imag;
    //polar values
    double p_theta;
    double p_complex;

    void calculate_cart();  //calculate cartesian from polar

    void calculate_pol();   //calculate polar from cartesian
};


#endif //SOSE22_CPP_A1_COMPLEX_H
