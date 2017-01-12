/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Edificios.h
 * Author: carlo
 *
 * Created on 29 de Dezembro de 2016, 10:51
 */

#ifndef EDIFICIOS_H
#define EDIFICIOS_H

#include <string>

#include "Unidade.h"

using namespace std;

class Edificios:public Unidade{
private:
    string nome;
    static int conta;
    int id, custo, saude, defesa;
public:
    Edificios(string nome, int custo, int saude, int defesa, int linha, int coluna, int equipa);
    int getDefesa() const;
    int getSaude() const;
    int getCusto() const;
    
    void setDefesa(int defesa);
    void setSaude(int saude);
    
   virtual int getID() const override;
   virtual string getNome() const override;

    virtual ~Edificios() override;

};

#endif /* EDIFICIOS_H */

