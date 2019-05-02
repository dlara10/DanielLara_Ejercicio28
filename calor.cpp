#include <iostream>
#include <fstream>
using namespace std;

int main(){
    int i, j;
    int L = 2;
    float t = 0.0;
    int k = 200; int c = 900; int rho = 2700;
    float u[201], x[201];
    float deltax, deltat = 0.01;
    float error;
    
    float n = (deltat*k)/((deltax*deltax)*c*rho);
    
    
    for (i = 0; i <= 200; i++){
           u[i] = 300; 
           x[i] = 300;
    }
    
    if (i >= 80 && i <= 120 ){
        u[i] = 500;
        x[i] = 500;
    }
      
    
    while (t<100){                           
        for(int i=1; i<200; i++){                  
            u[i]= x[i] + n*(x[i+1]-2*x[i]+x[i-1]);     
            x[i] = u[i];
        }
    t = t + deltat;   
    }
    
    ofstream datos;
    datos.open ("calor.dat");
    for (i = 0; i <= 200; i++){
           datos << u[i];
    }
    datos.close();
    
         return 0;
    }
