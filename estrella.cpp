#include<iostream>
int main(){
    const int alto = 22;
    const int ancho = 44;

    int lateralIzquierda=22;
    int lateralDerecha=22;
    int izquierdaInvertido=2;
    int derechaInvertido=42;
    int finalIzquierda=22;
    int finalDerecha=22;

    for(int y=1; y <= alto; y++){
        for(int x=1; x <= ancho; x++){

            if(y<8){
                if(lateralIzquierda==x || lateralDerecha==x){
                std::cout<<"*";
                }
                else{
                std::cout<<" ";
                }
            }

            else if(y==8){
                
                if((x<=15 || x>=29) && (x % 2 == 1) ){
                    std::cout<<"*";
                }
                else{
                    std::cout<<" ";
                }
            }

            else if(y>8 && y<14){
                if(izquierdaInvertido==x || derechaInvertido==x){
                    std::cout<<"*";
                }
                else{
                    std::cout<<" ";
                }
            }

            else if(y>=14 && y<17){
                if(lateralIzquierda==x || lateralDerecha==x){
                    std::cout<<"*";
                }
                else{
                    std::cout<<" ";
                }
            }

            else if(y>=17){
                
                /*
                    if(lateralIzquierda==x || lateralDerecha==x){
                        
                    }
                    else if(finalIzquierda==x || finalDerecha==x){
                        std::cout<<"*";
                    }
                */

                if((lateralIzquierda==x || lateralDerecha==x) || (finalIzquierda==x || finalDerecha==x))
                    std::cout<<"*";

                else{
                std::cout<<" ";
                }
            }
        }
        if(y>8 && y < 17){
            if(izquierdaInvertido<22 || derechaInvertido>22){
                izquierdaInvertido+=2;
                derechaInvertido-=2;
            }
            else{
                izquierdaInvertido=22;
                derechaInvertido=22;
            }
        }
        if(y>=17){
            finalIzquierda-=4;
            finalDerecha+=4;
        }
        lateralIzquierda-=1;
        lateralDerecha+=1;
        std::cout<<"\n";
    }

    return 0;
}