//
// Created by chris on 11.02.2022.
//
#include <iostream>
#include <cmath>
#include "Complex.h"

void Complex::set_real(double real) {
    c_real = real;
    this->calculate_pol();
}

void Complex::set_imag(double imag) {
    c_imag = imag;
    this->calculate_pol();
}

void Complex::set_theta(double t) {
    p_theta = t * (M_PI / 180);
    this->calculate_cart();
}

void Complex::set_complex(double complex) {
    p_complex = complex;
    this->calculate_cart();
}

void Complex::calculate_cart() {
    c_real = p_complex * cos(p_theta * (M_PI / 180));
    c_imag = p_complex * sin(p_theta * (M_PI / 180));
}

void Complex::calculate_pol() {
    p_complex = sqrt((c_real * c_real) + (c_imag * c_imag));
    p_theta = atan(c_imag / c_real) * (180 / M_PI);
}

std::string Complex::toString() const{
    std::string result = "Realteil: " + std::to_string(c_real) + "\n" + "Imaginaerteil: " + std::to_string(c_imag) + "\n" + "Phasenwinkel (GRAD): " + std::to_string(p_theta) + "\n" + "Betrag: " + std::to_string(p_complex) + "\n";
    return result;
}

void Complex::set_cart(double real, double imag) {
    c_real = real;
    c_imag = imag;
    //this->calculate_pol();
}

void Complex::set_polar(double theta, double complex) {
    p_complex = complex;
    p_theta = theta;
    //this->calculate_cart();
}

std::string Complex::cartToString() const{
    std::string result = "Realteil: " + std::to_string(c_real) + "\n" + "Imaginaerteil: " + std::to_string(c_imag) + "\n";
    return result;
}

std::string Complex::polarToString() const{
    std::string result = "Phasenwinkel (GRAD): " + std::to_string(p_theta) + "\n" + "Betrag: " + std::to_string(p_complex) + "\n";
    return result;
}
