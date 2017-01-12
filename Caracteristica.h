/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Caracteristica.h
 * Author: carlo
 *
 * Created on 28 de Dezembro de 2016, 17:53
 */

#ifndef CARACTERISTICA_H
#define CARACTERISTICA_H

#include <string>

using namespace std;

class Caracteristica {
private:
    int id, monetario, forca;
    string nome;
public:
    Caracteristica(int id);
    int getId() const;
    string getNome() const;
    int getMonetario() const;
    int getForca() const;
    virtual ~Caracteristica();

};

#endif /* CARACTERISTICA_H */

