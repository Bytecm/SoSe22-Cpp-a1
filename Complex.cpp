//
// Created by chris on 11.02.2022.
//
#include <iostream>
#include <cmath>
#include "Complex.h"

void Complex::set_x(double x) {
    k_x = x;
    this->calculate_pol();
}

void Complex::set_y(double y) {
    k_y = y;
    this->calculate_pol();
}

void Complex::set_theta(double t) {
    p_t = t;
    this->calculate_kart();
}

void Complex::set_r(double r) {
    p_r = r;
    this->calculate_kart();
}

void Complex::calculate_kart() {
    k_x = p_r * cos(p_t);
    k_y = p_r * sin(p_t);
}

void Complex::calculate_pol() {
    p_r = sqrt( (k_x * k_x) + (k_y * k_y));
    p_t = atan( k_y / k_x);
}

void Complex::print() {
    std::cout << "Realteil: " << k_x << " Imaginaerteil: " << k_y << " Phasenwinkel: " << p_t << " Betrag: " << p_r << std::endl;
}

double *Complex::get_kart(double *kart) {
    kart[0] = k_x;
    kart[1] = k_y;
    return kart;
}

double *Complex::get_pol(double *pol) {
    pol[0] = p_r;
    pol[1] = p_t;
    return pol;
}

void Complex::set_kart(double x, double y) {
    k_x = x;
    k_y = y;
    this->calculate_pol();
}

void Complex::set_polar(double t, double r) {
    p_r = r;
    p_t = t;
    this->calculate_kart();
}

