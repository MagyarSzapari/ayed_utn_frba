//Parcial de Ranking Películas

#include <iostream>

using namespace std

const MAX_RANK = 10;

typedef char str5[6];
typedef char str15[16];
typedef char str20[21];
typedef char str30[31];

typedef unsigned short ushort;
typedef unsigned int uint;

// typedef tsRank tvrRank[MAX_RANK]; //Esto tiene que ir abajo de todos los structs.

struct tsPeli{
    str20 cadenaCine;
    str20 cine;
    ushort nroSala;
    str30 pelicula;
    uint fechaEstreno;
    ushort cantBoletos;
    ushort capacidadSala;
    char calificacion;
    str15 idioma;
    str5 imagen;
};

struct tsRank{
    str30 pelicula;
    uint fechaEstreno;
    ushort cantBoletos;
    char calificacion;
};

typedef tsRank tvrRank[MAX_RANK];

void obtDatos(tsPeli &rPeli)
