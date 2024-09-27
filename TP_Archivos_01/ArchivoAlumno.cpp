#include "ArchivoAlumno.h"

ArchivoAlumno::ArchivoAlumno(const char* url)
{
    _pAlumno = nullptr;
    _url = url;
}

void ArchivoAlumno::setPAlumno(FILE * pAlumno)
{
    _pAlumno = pAlumno;
}

bool ArchivoAlumno::leerRegistrosAlumnos()
{
    Alumno reg;
    setPAlumno(fopen(_url,"rb"));
    if(_pAlumno==nullptr)
    {
        std::cerr << "Error al abrir el archivo para leer" << std::endl;
        return false;
    } else
    {
        std::cout << "--- DATOS LEIDOS CORRECTAMENTE... ---" << std::endl;
    }
    limpiar();

    while(fread(&reg,sizeof(Alumno),1,_pAlumno)==1)
    {
            reg.mostrar();
            std::cout << "----------------o---------------" << std::endl;
    }
    pausar();
    fclose(_pAlumno);
    return true;
}

bool ArchivoAlumno::grabarRegistroAlumno(Alumno &reg)
{
    if ( buscaLegajo(reg.getLegajo()).getLegajo() == 0 )
    {
        _pAlumno = fopen(_url,"ab");
        if (_pAlumno == nullptr)
        {
            std::cerr << "Error al abrir el archivo para escribir." << std::endl;
            return false;
        }
        fwrite(&reg,sizeof(Alumno),1,_pAlumno);
        fclose(_pAlumno);
    }
    else
    {
        std::cerr << std::endl <<"El legajo ya existe. No se guardaron los datos" << std::endl;
        pausar();
        return false;
    }
    return true;
}

ArchivoAlumno::~ArchivoAlumno()
{
    if(_pAlumno != nullptr)
    fclose(_pAlumno);
}

Alumno ArchivoAlumno::buscaLegajo(int legajo)
{
    Alumno reg;
    int res; // 0 si no se encontro el registro, o la posicion donde se encontro
    _pAlumno = fopen(_url, "rb");

    while(fread(&reg,sizeof(Alumno),1,_pAlumno)==1)
    {
        if(reg.getLegajo() == legajo)
        {
            return reg;
        }
    }
    reg.setLegajo(0);
    return reg;

}