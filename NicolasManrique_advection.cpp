#include <iostream>
#include <math.h>
#include <ctime>

using namespace std;

double bd( double u01, double u00, double c, double dt, double dx  );
double fd( double u01, double u00, double c, double dt, double dx  );

int main () {

    double dt = 0.001;
    double c = 1;
    double dx;
    double rx=4;
    dx = 10*dt*c;
    int n;
    n=rx/dx;


    double x[n];



    for(int i=0; i<n ; i++){
        double pos;
        pos = i * dx-(rx/2);
        if(pos>=-0.5 && pos<=0.5){
            x[i]=1.0;
        }
        else{
            x[i]=0.0;
        }
        cout<<x[i]<<" ";
    }
    cout<<"\n";
    
    int j = 1;
    while(j<701){
        for(int k=1; k<n ; k++){
            x[k+1]=bd(x[k+1],x[k],c,dt,dx);
            if(j % 3500/5 == 0){
                if(k == 1){
                    cout<<x[0]<<" "<<x[k]<<" ";
                }
                else{
                    cout<<x[k]<<" ";
                }
            }
        }    
        if(j % 700/5 == 0){
            cout<<"\n";
        }
        j++;
    }



    for(int i=0; i<n ; i++){
        double pos;
        pos = i * dx-(rx/2);
        if(pos>=-0.5 && pos<=0.5){
            x[i]=1.0;
        }
        else{
            x[i]=0.0;
        }
        cout<<x[i]<<" ";
    }
    cout<<"\n";
    
    j = 1;
    while(j<701){
        for(int k=1; k<n ; k++){
            x[k+1]=bd(x[k+1],x[k],-c,dt,dx);
            if(j % 3500/5 == 0){
                if(k == 1){
                    cout<<x[0]<<" "<<x[k]<<" ";
                }
                else{
                    cout<<x[k]<<" ";
                }
            }
        }    
        if(j % 700/5 == 0){
            cout<<"\n";
        }
        j++;
    }



   return 0;
}

double bd( double u01, double u00, double c, double dt, double dx  ){

    double u11;
    u11 = u01-((c*dt/dx)*(u01-u00));
    return u11;

}

double fd( double u01, double u00, double c, double dt, double dx  ){

    double u11;
    u11 = u01-((c*dt/dx)*(u01-u00));
    return u11;

}


