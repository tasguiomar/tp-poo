/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Edificios.cpp
 * Author: carlo
 * 
 * Created on 29 de Dezembro de 2016, 10:51
 */

#include "Edificios.h"

int Edificios::conta = 0;

Edificios::Edificios(string nome, int custo, int saude, int defesa, int linha, int coluna, int equipa):Unidade(linha, coluna, equipa) {
    this->nome = nome;
    this->custo = custo;
    this->saude = saude;
    this->defesa = defesa;
    this->id = conta;
    this->conta++;
}

int Edificios::getSaude() const {
    return this->saude;
}

int Edificios::getDefesa() const {
    return this->defesa;
}

int Edificios::getCusto() const {
    return this->custo;
}

void Edificios::setSaude(int saude) {
    this->saude = saude;
}

void Edificios::setDefesa(int defesa) {
    this->defesa = defesa;
}

int Edificios::getID() const {
    return this->id;
}

string Edificios::getNome() const {
    return this->nome;
}

Edificios::~Edificios() {

}



