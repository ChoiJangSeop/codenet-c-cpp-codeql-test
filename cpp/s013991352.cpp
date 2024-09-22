include<iostream>                                                                 
                                                                                   
int main(void){                                                                    
  int a,b,c,i=0;                                                                   
  std::cin >> a >> b;                                                              
  c =a+b;                                                                          
 FLAG:                                                                             
    c =c/10;                                                                       
    i++;                                                                           
    if(0<c){                                                                       
      goto FLAG;                                                                   
    }                                                                              
  std::cout << i << std::endl;                                                     
  return 0;                                                                        
}