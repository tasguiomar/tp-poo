/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Ser.cpp
 * Author: carlo
 * 
 * Created on 28 de Dezembro de 2016, 18:29
 */

#include "Ser.h"

int Ser::conta = 500;

Ser::Ser(Perfil* p, int linha, int coluna, int equipa):Unidade(linha, coluna, equipa) {
    this->perfil = p;
    this->saude = 10;
    //TODO carregar as caracteristicas no ser.
    this->id = conta;
    this->conta++;
}

int Ser::getAtaque() const {
    return this->ataque;
}

int Ser::getDefesa() const {
    return this->defesa;
}

int Ser::getSaude() const {
    return this->saude;
}

int Ser::getVelocidade() const {
    return this->velocidade;
}

void Ser::setAtaque(int ataque) {
    this->ataque = ataque;
}

void Ser::setDefesa(int defesa) {
    this->defesa = defesa;
}

void Ser::setSaude(int saude) {
    this->saude = saude;
}

void Ser::setVelocidade(int velocidade) {
    this->velocidade = velocidade;
}

void Ser::setPerfil(Perfil* p) {
    this->perfil = p;
}

Perfil* Ser::getPerfil() const {
    return this->perfil;
}

int Ser::getID() const {
    return this->id;
}

string Ser::getNome() const {
    return this->perfil->getNome();
}

Ser::~Ser() {

}

