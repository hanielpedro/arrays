package javaapplication1;

import java.util.Scanner;


public class JavaApplication1 {

    public static void main(String[] args) {
        
         Scanner input = new Scanner(System.in);  

        System.out.println("Cadastre os nomes dos alunos: ");    
        int i;

        String[] alunos = new String[31];

        for( i = 0; i < 25; i++){
            alunos[i] = input.next();
        }
        

         
        System.out.println("Nome dos alunos cadastrados:  ");
        for( i = 0; i < 25; i++){
            System.out.println(alunos[i]);
        }
        
        System.out.println("Cadastre 5 novos alunos: ");
        
        for( i  = 25; i < 30; i++){
            alunos[i] = input.next();
        }
        
        System.out.println("Nome dos alunos cadastrados:  ");
        for( i = 0; i < 30; i++){
            System.out.println(alunos[i]);
        }
   
       
    }
} 
    

// Aluno Pedro Haniel Vasques Caetano Alves
// Feito no NetBeans 8.2