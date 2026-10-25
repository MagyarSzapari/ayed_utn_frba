#ifndef _MAINHPP
#define _MAINHPP
#include <iostream>
#include <iostream>
#include <sstream>
#include <string>
#include <string.h>
#include <stdlib.h>
#include "biblioteca/funciones/strings.hpp"
#include "biblioteca/funciones/tokens.hpp"
#include "biblioteca/tads/Coll.hpp"
using namespace std;

struct Inscripcion
{
   int idAlu;
   int idCur;
   int fecha;
};

struct Curso
{
   int idCur;
   char turno;
   int cap;
   char materia[20];
};

struct RCurso
{
   Curso c;
   int contIA;
};

struct Reasignacion
{
   int idAlu;
   int idCurReasig;
};

struct Revision
{
   int idAlu;
   char materia[20];
};

string inscripcionToDebug(Inscripcion x)
{
   stringstream sout;
   sout<< "[";
   sout << x.idAlu;
   sout << ",";
   sout << x.idCur;
   sout << ",";
   sout << x.fecha;
   sout<< "]";
   return sout.str();
}

string inscripcionToDebug(string mssg,Inscripcion x)
{
   stringstream sout;
   sout<< mssg<<":[";
   sout << x.idAlu;
   sout << ",";
   sout << x.idCur;
   sout << ",";
   sout << x.fecha;
   sout<< "]";
   return sout.str();
}

Inscripcion inscripcion(int idAlu,int idCur,int fecha)
{
   Inscripcion a;
   a.idAlu = idAlu;
   a.idCur = idCur;
   a.fecha = fecha;
   return a;
}

bool inscripcionEquals(Inscripcion a,Inscripcion b)
{
   if(a.idAlu!=b.idAlu) return false;
   if(a.idCur!=b.idCur) return false;
   if(a.fecha!=b.fecha) return false;
   return true;
}

string cursoToDebug(Curso x)
{
   stringstream sout;
   sout<< "[";
   sout << x.idCur;
   sout << ",";
   sout << x.turno;
   sout << ",";
   sout << x.cap;
   sout << ",";
   sout << x.materia;
   sout<< "]";
   return sout.str();
}

string cursoToDebug(string mssg,Curso x)
{
   stringstream sout;
   sout<< mssg<<":[";
   sout << x.idCur;
   sout << ",";
   sout << x.turno;
   sout << ",";
   sout << x.cap;
   sout << ",";
   sout << x.materia;
   sout<< "]";
   return sout.str();
}

Curso curso(int idCur,char turno,int cap,string materia)
{
   Curso a;
   a.idCur = idCur;
   a.turno = turno;
   a.cap = cap;
   strcpy(a.materia,materia.c_str());
   return a;
}

bool cursoEquals(Curso a,Curso b)
{
   if(a.idCur!=b.idCur) return false;
   if(a.turno!=b.turno) return false;
   if(a.cap!=b.cap) return false;
   return true;
}

string rCursoToDebug(RCurso x)
{
   stringstream sout;
   sout<< "[";
   sout << cursoToDebug(x.c);
   sout << ",";
   sout << x.contIA;
   sout<< "]";
   return sout.str();
}

string rCursoToDebug(string mssg,RCurso x)
{
   stringstream sout;
   sout<< mssg<<":[";
   sout << cursoToDebug(x.c);
   sout << ",";
   sout << x.contIA;
   sout<< "]";
   return sout.str();
}

RCurso rCurso(Curso c,int contIA)
{
   RCurso a;
   a.c = c;
   a.contIA = contIA;
   return a;
}

bool rCursoEquals(RCurso a,RCurso b)
{
   if(!cursoEquals(a.c,b.c)) return false;
   if(a.contIA!=b.contIA) return false;
   return true;
}

string reasignacionToDebug(Reasignacion x)
{
   stringstream sout;
   sout<< "[";
   sout << x.idAlu;
   sout << ",";
   sout << x.idCurReasig;
   sout<< "]";
   return sout.str();
}

string reasignacionToDebug(string mssg,Reasignacion x)
{
   stringstream sout;
   sout<< mssg<<":[";
   sout << x.idAlu;
   sout << ",";
   sout << x.idCurReasig;
   sout<< "]";
   return sout.str();
}

Reasignacion reasignacion(int idAlu,int idCurReasig)
{
   Reasignacion a;
   a.idAlu = idAlu;
   a.idCurReasig = idCurReasig;
   return a;
}

bool reasignacionEquals(Reasignacion a,Reasignacion b)
{
   if(a.idAlu!=b.idAlu) return false;
   if(a.idCurReasig!=b.idCurReasig) return false;
   return true;
}

string revisionToDebug(Revision x)
{
   stringstream sout;
   sout<< "[";
   sout << x.idAlu;
   sout << ",";
   sout << x.materia;
   sout<< "]";
   return sout.str();
}

string revisionToDebug(string mssg,Revision x)
{
   stringstream sout;
   sout<< mssg<<":[";
   sout << x.idAlu;
   sout << ",";
   sout << x.materia;
   sout<< "]";
   return sout.str();
}

Revision revision(int idAlu,string materia)
{
   Revision a;
   a.idAlu = idAlu;
   strcpy(a.materia,materia.c_str());
   return a;
}

bool revisionEquals(Revision a,Revision b)
{
   if(a.idAlu!=b.idAlu) return false;
   return true;
}

#endif
