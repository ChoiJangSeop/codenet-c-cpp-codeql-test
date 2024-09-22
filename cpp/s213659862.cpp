#include<iostream>
#include<math.h>
#include<algorithm>
#include<vector>
#include<map>
#include <string>
using namespace std;

double Sa(double a,double W,double H,double x,double y){
    return (H-H*H/(2*y))*a+H*H*x/(2*y);
}

double Sb(double b,double W,double H,double x,double y){
    return (W-W*W/(2*x))*b+y*W*W/(2*x);
}

int main(){
    double ans=0;
    double W,H,x,y;
    cin>>W>>H>>x>>y;

    int judge=0;

    double S1=0,S2=0;

    double a0=(x*H-W*y)/(H-y);
    double a1=(x*H)/(H-y);
    double b0=(y*W-H*x)/(W-x);
    double b1=(y*W)/(W-x);

    int check[4]={0};
    if((H-H*H/(2*y))>0){
        if(a1>W){
            if(Sa(W,W,H,x,y)<(H*W)/2.0){
                S1=Sa(W,W,H,x,y);
                check[0]=1;
            }else{
                S1=(H*W)/2.0;
            }
        }else{
            if(Sa(a1,W,H,x,y)<(H*W)/2.0){
                S1=Sa(a1,W,H,x,y);
            }else{
                S1=(H*W)/2.0;
            }
        }
    }else{
        if(a0<0){
            if(Sa(0,W,H,x,y)<(H*W)/2.0){
                S1=Sa(0,W,H,x,y);
                check[1]=1;
            }else{
            
                S1=(H*W)/2.0;
            }
        }else{
            if(Sa(a0,W,H,x,y)<(H*W)/2.0){
                S1=Sa(a0,W,H,x,y);
            }else{
            
                S1=(H*W)/2.0;
            }
        }
    }
    if((W-W*W/(2*x))>0){
        if(b1>H){
            if(Sb(H,W,H,x,y)<(H*W)/2.0){
                S2=Sb(H,W,H,x,y);
                check[2]=1;
            }else{
                S2=(H*W)/2.0;
            }
        }else{
            if(Sb(b1,W,H,x,y)<(H*W)/2.0){
                S2=Sb(b1,W,H,x,y);
            }else{
                S2=(H*W)/2.0;
            }
        }
    }else{
        if(b0<0){
            if(Sb(0,W,H,x,y)<(H*W)/2.0){
                S2=Sb(0,W,H,x,y);
                check[3]=1;
            }else{
                S2=(H*W)/2.0;
            }
        }else{
            if(Sb(b0,W,H,x,y)<(H*W)/2.0){
                S2=Sb(b0,W,H,x,y);
            }else{
                S2=(H*W)/2.0;
            }
        }

    }
    
    if(S1==S2){
        judge=1;
        ans=S1;
        if(check[0]==1 && check[3]==1){
            judge=0;
        }
        if(check[1]==1 && check[2]==1){
            judge=0;
        }
    }

    if(S1>S2){
        ans=S1;
        if((H-H*H/(2*y))==0){
            judge=1;
        }
    }else{
        ans=S2;
        if((W-W*W/(2*x))==0){
            judge=1;
        }
    }

    
    cout<<ans<<" "<<judge<<endl;

    return 0;
}
