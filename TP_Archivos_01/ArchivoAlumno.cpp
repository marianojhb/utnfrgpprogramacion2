#include "ArchivoAlumno.h"

ArchivoAlumno::ArchivoAlumno(const char* url)
{
    _pAlumno = nullptr;
    _url = url;
}

bool ArchivoAlumno::leerRegistrosAlumnos()
{
    Alumno reg;
    _pAlumno = fopen(_url,"rb");
    if(this->_pAlumno==nullptr)
    {
        std::cerr << "Error al abrir el archivo para leer" << std::endl;
        return false;
    }
    while(fread(&reg,sizeof(Alumno),1,_pAlumno) == 1)
    {
        fread(&reg,sizeof(Alumno),1,_pAlumno);
        reg.mostrar();
        std::cout << "----------------o---------------" << std::endl;
    }
    fclose(_pAlumno);
    return true;
}

bool ArchivoAlumno::grabarRegistroAlumno(Alumno &reg)
{
    this->_pAlumno = fopen(this->_url,"ab");
    if (this->_pAlumno == nullptr)
    {
        std::cerr << "Error al abrir el archivo para escribir." << std::endl;
        return false;
    }
    fwrite(&reg,sizeof(Alumno),1,this->_pAlumno);
    fclose(this->_pAlumno);
    return true;
}

ArchivoAlumno::~ArchivoAlumno()
{
    if(_pAlumno != nullptr)
    fclose(_pAlumno);
}
