package arquivodecodigos;
 
public class Estudos{
  public static void main(String a[]){    
    // vamos criar um vetor de 5 elementos int
    int[] valores = {32, 7, 21, 4, 90};    
    // vamos pesquisar o valor 21
    int valor = 21;
 
    // vamos verifiar se o valor está no vetor
    int indice = pesquisaLinear(valores, valor);
    if(indice > -1){
      System.out.println("O valor foi encontrado no índice: " 
        + indice);  
    }
    else{
      System.out.println("O valor não foi encontrado.");
    }    
  } 
     
  // método que permite efetuar a busca linear em um vetor  
  public static int pesquisaLinear(int[] vetor, int valor){    
    // percorre os elementos do vetor
    for(int i = 0; i < vetor.length; i++){    
      // o valor foi encontrado?
      if(vetor[i] == valor){    
        return i;    
      }    
    }    
 
    // não foi encontrado? vamos retornar -1    
    return -1;    
  }   
}