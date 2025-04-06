#include <bits/stdc++.h>
using namespace std;

int main() {
	
    float cal[7][3];
    string materias[7];
    float promedios[7] = {0};
    float suma = 0;
    float mult =0;
    int entero;
    float decimal;
    
    cout << "Calificaciones Primer Semestre" << endl;

    //ingresar materias
    for (int i = 0; i < 7; i++) {
        cout << "Ingresa la materia " << i + 1 << ": ";
        cin >> materias[i];
    }

    //llenar matriz con calificaciones
    for (int y = 0; y < 7; y++) {
        cout << "Ingrese las calificaciones para " << materias[y] << ":" << endl;
        for (int x = 0; x < 3; x++) {
            cout << "  Calificacion " << x + 1 << ": ";
            cin >> cal[y][x];
        }
    }
    cout<<endl<<endl;

   //calcular el promedio
   for (int y = 0; y < 7; y++) {
        suma = cal[y][0] * 0.2 + cal[y][1] * 0.2; 
        mult = cal[y][2] * 0.6;
        promedios[y] = suma + mult;

        
        entero = (int)(promedios[y]);
        decimal = promedios[y] - entero; 

        if (decimal >= 0.6) {
            promedios[y] = entero + 1; // Redondear hacia arriba
        } else {
            promedios[y] = entero; // redondear hacia abajo
        }
    }


   //imprimir la tabla
    cout << "Materias y sus promedios: "<<endl;
    for (int y = 0; y < 7; y++) {
        cout << materias[y] << ": ";
        
        for (int x = 0; x < 3; x++) {
            cout <<" | "<< cal[y][x] << " | ";
        }
        cout << " Promedio: " << promedios[y] << endl;
    }
    cout<<endl<<endl;
    
    //encontrar mayor y menor promedio, aprobadas y reprobadas
    float max=promedios[0];
    float min=promedios[0];
    float aprobada=0;
    float reprobada=0;
    
    for (int y = 0; y < 7; y++) {
        
            if(promedios[y]>max){
            	max=promedios[y];
			}
			if(promedios[y]<min){
            	min=promedios[y];
			}
			if(promedios[y]<6){
            	reprobada++;
			}
			if(promedios[y]>=6){
            	aprobada++;
			}
    }
    
    cout<<"tu promedio mas alto es de: "<<max<<endl;
    cout<<"tu promedio mas bajo es de: "<<min<<endl;
    cout<<"tienes "<<aprobada<<" materias aprobadas"<<endl;
    cout<<"tienes "<<reprobada<<" materias reprobadas"<<endl;
    
    cout<<endl<<endl;
    
    
    
    //CALIFICACIONES SEGUNDO SEMESTRE
    cout << "Calificaciones Segundo Semestre" << endl;
    
    //ingresar materias
    for (int i = 0; i < 7; i++) {
        cout << "Ingresa la materia " << i + 1 << ": ";
        cin >> materias[i];
    }

    //llenar matriz con calificaciones
    for (int y = 0; y < 7; y++) {
        cout << "Ingrese las calificaciones para " << materias[y] << ":" << endl;
        for (int x = 0; x < 3; x++) {
            cout << "  Calificacion " << x + 1 << ": ";
            cin >> cal[y][x];
        }
    }
    cout<<endl<<endl;

    //calcular el promedio
   for (int y = 0; y < 7; y++) {
        suma = cal[y][0] * 0.2 + cal[y][1] * 0.2; 
        mult = cal[y][2] * 0.6;
        promedios[y] = suma + mult;

        
        entero = (int)(promedios[y]);
        decimal = promedios[y] - entero; 

        if (decimal >= 0.6) {
            promedios[y] = entero + 1; // Redondear hacia arriba
        } else {
            promedios[y] = entero; // redondear hacia abajo
        }
    }
    
   //imprimir la tabla
    cout << "Materias y sus promedios: "<<endl;
    for (int y = 0; y < 7; y++) {
        cout << materias[y] << ": ";
        
        for (int x = 0; x < 3; x++) {
            cout <<" | "<< cal[y][x] << " | ";
        }
        cout << " Promedio: " << promedios[y] << endl;
    }
    cout<<endl<<endl;
    
    //encontrar mayor y menor promedio, aprobadas y reprobadas
  		max=promedios[0];
    	min=promedios[0];
    	aprobada=0;
    	reprobada=0;  
    
    for (int y = 0; y < 7; y++) {
        
            if(promedios[y]>max){
            	max=promedios[y];
			}
			if(promedios[y]<min){
            	min=promedios[y];
			}
			if(promedios[y]<6){
            	reprobada++;
			}
			if(promedios[y]>=6){
            	aprobada++;
			}
			      
    }
    
    cout<<"tu promedio mas alto es de: "<<max<<endl;
    cout<<"tu promedio mas bajo es de: "<<min<<endl;
    cout<<"tienes "<<aprobada<<" materias aprobadas"<<endl;
    cout<<"tienes "<<reprobada<<" materias reprobadas"<<endl;
     
     
    return 0;
}

