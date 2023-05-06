#include<iostream>

using namespace std;

class cls_alumnos {
    //atributos
    private:
        string grado;

    public:
        static int num_alumnos;
        string nombre;
        int edad;
        double nota;
        string sexo; 
    
    //constructor
    cls_alumnos(){
        nombre = "(sin nombre)";
        sexo = "(sin sexo)";
        nota = -1;
        grado = "(Sin grado)";
        num_alumnos +=1;
        cout<< "Numero de alumnos: " << num_alumnos << endl;
    }

    cls_alumnos(
        string vNombre,
        int vEdad,
        double vNota,
        string vSexo,
        string vGrado
    ){
        nombre = vNombre;
        edad = vEdad,
        sexo = vSexo;
        nota = vNota;
        set_grado(vGrado);

        num_alumnos +=1;
        cout<< "Numero de alumnos: " << num_alumnos << endl;
    }

    //metodos
    string met_calificar(){
        string msj;
        if(nota < 11){
            msj = "Desaprobado";
        }else{
            msj = "Aprobado";    
        }
        return "Calificaión: " + msj;
    }

    //setter
    void set_grado(string vGrado){
        grado = vGrado;
    }

    //getter
    string get_grado(){
        return grado;
    } 


};

int cls_alumnos::num_alumnos = 0;

int main()
{
    
    cls_alumnos primero;
    primero.nombre = "Jair";
    primero.sexo = "Masculino";
    primero.set_grado("Sistemas");
    primero.nota = 7;

    cout << primero.nombre << endl;
    cout << primero.sexo << endl;
    cout << primero.nota << endl;
    cout << primero.get_grado() << endl;
    cout << primero.met_calificar() << endl;
    cout << endl;

    cls_alumnos segundo;
    segundo.nombre = "July Sanguinetti";
    segundo.sexo = "Femenino";
    segundo.nota = 16.5;

    cout << segundo.nombre << endl;
    cout << segundo.sexo << endl;
    cout << segundo.nota << endl;
    cout << segundo.get_grado() << endl;
    cout << segundo.met_calificar() << endl;
    cout << endl;

    cls_alumnos p;
    cout << p.nombre << endl;
    cout << p.sexo << endl;
    cout << p.nota << endl;
    cout << p.get_grado() << endl;
    cout << p.met_calificar() << endl;
    cout << endl;
    
    cls_alumnos a("Javier", 20, 12.45, "Masculino","Adminstracion");
    cout << a.nombre << endl;
    cout << a.edad << endl;
    cout << a.sexo << endl;
    cout << a.nota << endl;
    cout << a.get_grado() << endl;
    cout << a.met_calificar() << endl;
    cout << endl;

    cls_alumnos obj_estudiante;
    
    return 0;
}