/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: carlo
 *
 * Created on 28 de Dezembro de 2016, 17:51
 */

#include <cstdlib>

#include "Gestor.h"

using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {
    
    Gestor::getInstance()->start();
    
    return 0;
}

