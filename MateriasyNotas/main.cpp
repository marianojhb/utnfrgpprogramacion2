#include <iostream>
using namespace std;

void recalcularMateriaMasInscripciones(int&, int&, int, int); // Procesa y determina la materia con más inscripciones
void pausar(); // Función para pausar en Windows, Linux y MacOS
int maxVector(int*,int); // Calcula el máximo de un vector. Utiliza el nombre del vector y su tamaño como argumento
void matrizLlamadosModalidad(int (*vec_llamados)[4]); // Matriz que guarda por cada llamado, el recuento de cada modalidad elegida

int main()
{
    // DEFINICION DE VARIABLES

    const int cantidadMaterias = 3; // Total de materias existentes

    int ingresoMateria; // Captura el codigo de materia ingresado por teclado
    int ingresoCantidadInscripciones=0; // Captura el total de inscripciones de la materia en cuestión
    int legajo, llamado, modalidad, nota; // Captura la tabla de datos de los exámenes

    // PUNTO 1
    int materiaMasInscripciones_id = 0; // Variable que aloja el ID de la materia con más inscripciones
    int materiaMasInscripciones_cantidad = 0; // Variable que aloja la cantidad de inscripciones de la materia con más inscripciones

    // PUNTO 2
    const int modalidades = 4; // Constante de la cantidad de modalidades ofrecidas
    int contadorModalidades[modalidades]{}; // Vector que aloja la cantidad de inscripciones por cada modalidad
    int mayorModalidad = -1; // Variable que guarda la modalidad con más inscripciones

    // PUNTO 3
    int vec_llamados[3][modalidades]{}; // Matriz que guarda la cantidad de inscripciones para por cada tipo de llamado (fila) y por cada modalidad (col)

    // PUNTO 4
    int materiasLegajosRepetidos[cantidadMaterias]{}; // Vector que guarda por cada materia, cantidad de legajos repetidos
    int materias_codigos[cantidadMaterias];

    // OUTPUT

    // ENCABEZADO

    for(int i=0; i<cantidadMaterias; i++)
    {
        system("clear");
        cout << "MATERIA CON MAS INSCRIPTOS AL MOMENTO" << endl;
        cout << "MATERIA ID " << materiaMasInscripciones_id
                    << " CON " << materiaMasInscripciones_cantidad 
                    << " INSCRIPCIONES" << endl;
        cout << endl;
        cout << "MATRIZ LLAMADOS Y MODALIDADES " << endl;
        matrizLlamadosModalidad(vec_llamados);
        cout << endl;
        cout << "-------------------------------------------------------------------------------" << endl;
        cout << endl;
        cout << "CARGA DE DATOS" << endl;
        cout << endl;
        cout << endl << "*** MATERIA " << i+1 << "/" << cantidadMaterias << " ***" << endl;
        cout << "MATERIA ID ";
        cin >> ingresoMateria;
        materias_codigos[0]=ingresoMateria;
        cout << "INGRESO CANTIDAD DE INSCRIPTOS ";
        cin >> ingresoCantidadInscripciones;
        recalcularMateriaMasInscripciones(materiaMasInscripciones_id,
                                          materiaMasInscripciones_cantidad,
                                          ingresoMateria,
                                          ingresoCantidadInscripciones);// Punto 1

        int legajos[ingresoCantidadInscripciones]; // PUNTO 4. SE GUARDAN PARA BUSCAR REPETIDOS, POR MATERIA

        // CARGA DE DATOS
        for(int j=0; j < ingresoCantidadInscripciones; j++)
        {
            cout << endl << "--- INSCRIPCION "<< j+1 << "/" << ingresoCantidadInscripciones << " ---" << endl;
            cout << "INGRESE LEGAJO ";
            cin >> legajo;
            cout << "INGRESE LLAMADO ";
            cin >> llamado;
            cout << "INGRESE MODALIDAD ";
            cin >> modalidad;
            cout << "INGRESE NOTA ";
            cin >> nota;

            // PROCESO DE DATOS -> MIENTRAS SE CARGAN

            // PUNTO 2
            contadorModalidades[modalidad-1] +=1;
            mayorModalidad = maxVector(contadorModalidades, modalidades);

            // PUNTO 3
            vec_llamados[llamado-1][modalidad-1] +=1; // falta calcular por cada llamado, la modalidad mas elegida

            // PUNTO 4
            // revisar si el legajo ya estaba en el vector de legajos

            for (int k = 0; k < ingresoCantidadInscripciones-(ingresoCantidadInscripciones-k+1); k++) // El vector va a recorrer desde el 0 hasta la posicion actual-1 buscando repetidos
            {
                if (legajos[k]==legajo)
                {
                    materiasLegajosRepetidos[i] +=1; // suma uno repetido en el vector. i es la materia actual
                }
            }
            //
            legajos[j] = legajo; // Va guardando en el vector legajos, cada legajo registrado en esta materia

        }
    }


    // RESULTADOS

    system("clear"); // LIMPIO PANTALLA PARA MOSTRAR RESULTADOS

    // PUNTO 1
    cout << endl << "--- PUNTO 1 ---" << endl;
    cout << "MATERIA CON MAS INSCRIPCIONES " << materiaMasInscripciones_id << " CON " << materiaMasInscripciones_cantidad << endl;


    // PUNTO 2
    cout << endl << "--- PUNTO 2 ---" << endl;
    cout << "MODALIDAD MAS USADA " << mayorModalidad << endl;
    cout << endl << "OBS. DE REPETIRSE SE MUESTRA SOLAMENTE LA ULTIMA MODALIDAD MAS USADA" << endl;

    // PUNTO 3
    cout << endl << "--- PUNTO 3 ---" << endl;
    cout << "MATRIZ LLAMADOS Y MODALIDADES " << endl;
    matrizLlamadosModalidad(vec_llamados);
    cout << endl;
    cout << endl;
    cout << "LLAMADO 1: " << maxVector(vec_llamados[0],modalidades) << " INSCRIPCIONES" << endl;
    cout << "LLAMADO 2: " << maxVector(vec_llamados[1],modalidades) << " INSCRIPCIONES" << endl;
    cout << "LLAMADO 3: " << maxVector(vec_llamados[2],modalidades) << " INSCRIPCIONES" << endl;

    // PUNTO 4
    cout << endl << "--- PUNTO 4 ---" << endl;
    cout << "MATERIAS CON LEGAJOS REPETIDOS " << endl;
    for(int t=0; t<cantidadMaterias; t++)
    {
        cout << "MATERIA " << materias_codigos[t] << " REPETICIONES " << materiasLegajosRepetidos[t] << endl;
    }

    pausar();

    return 0;
}

void pausar()
{
#ifdef _WIN32
    system("pause");
#else
    cout << endl << endl;
    system("bash -c 'read -p \"Press Enter to continue...\"'");
#endif
}

void recalcularMateriaMasInscripciones(int &materiaMasInscripciones_id, int &materiaMasInscripciones_cantidad, int ingresoMateria, int ingresoCantidadInscripciones)
{
    if (ingresoCantidadInscripciones > materiaMasInscripciones_cantidad)
    {
        materiaMasInscripciones_id = ingresoMateria;
        materiaMasInscripciones_cantidad = ingresoCantidadInscripciones;
    }
}

// calcula el mayor de un vector
int maxVector(int*vec, int tam)
{
    int res;
    for(int i=0; i<tam-1; i++)
    {
        if(vec[i]>vec[i+1])
        {
            res = i+1; //mas 1 porque 0 no es opcion
        }
    }
    return res;
}

void matrizLlamadosModalidad(int (*vec_llamados)[4])
{
    cout << endl;
    cout << "\t\tMODALIDAD" << endl;
    cout << "LLAM.\t1\t2\t3\t4" << endl;

    for (int x=0; x<3; x++)
    {
        cout << x+1 << "\t\t";
        for(int y=0; y<4; y++)
        {
            cout << vec_llamados[x][y] << "\t";
        }
        cout << endl;
    }
}