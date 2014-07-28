
#include <stdlib.h>
#include <stdio.h>
#include <cstdlib>
#include <cstdio>
#include <fstream>
#include <iostream>
#include <string>
#include <ctype.h>
#include <sstream>
#include "tokenList.cpp"

using namespace std;


void analise::automato(string token, analise tok)
{
    int estado = 1;
    int i;
    //analise tok;//objeto para inserir na lista
    string categ;
    tokenNo* ptr = new tokenNo; 

    for(i = 0; i < token.length() && estado != 0; i++)
    {  
            switch(estado)
            {
                case 1:{
                        estado = 0;
                        if(token[i] == '\n' )
                            estado = 1;

                        //novo caso
                        if(token[i] == ' ' || token[i] == '\n' || token[i] == '\r' || token[i] == '\t')
                            estado = 1;
                    
                        if(isalpha(token[i]))
                                estado = 2;
                           
                        if(isdigit(token[i]))
                                estado = 3;  
                            
                        if(token[i] == '-' || token[i] == '+')
                                estado = 4;
                            
                        if(token[i] == ',' || token[i] == ';' || token[i] == '=' || token[i] == '/' || token[i] == '[' || token[i] == ']' ||token[i] == '{' || token[i] == '}' ||token[i] == '.' ||token[i] == ')')
                                estado = 5;
                            
                        if(token[i] == '(')
                                estado = 6;
                            
                        if(token[i] == ':' || token[i] == '>')
                                estado = 8;
                                
                        if(token[i] == '<')
                                estado = 7;
                                
                        if(token[i] == '*')
                                estado = 9;

                        break;
                }
                case 2:{
                        estado = 0;
                    
                        if(isalpha(token[i]))
                                estado = 2;
                                
                        if(isdigit(token[i]))
                                estado = 2;
                            
                        if(token[i] == '-' || token[i] == '+')
                                estado = 0;
                            
                        if(token[i] == ',' || token[i] == ';' || token[i] == '=' || token[i] == '/' || token[i] == '[' || token[i] == ']' ||token[i] == '{' || token[i] == '}' ||token[i] == '.' ||token[i] == ')')
                                estado = 0;
                            
                        if(token[i] == '(')
                                estado = 0;
                            
                        if(token[i] == ':' || token[i] == '>')
                                estado = 0;
                                
                        if(token[i] == '<')
                                estado = 0;
                                
                        if(token[i] == '*')
                                estado = 0;
                    
                        break;
                }
                case 3:{
                        estado = 0;
                    
                        if(isalpha(token[i]))
                                estado = 0;
                                
                        if(isdigit(token[i]))
                                estado = 3;
                            
                        if(token[i] == '-' || token[i] == '+')
                                estado = 0;
                            
                        if(token[i] == ',' || token[i] == ';' || token[i] == '=' || token[i] == '/' || token[i] == '[' || token[i] == ']' ||token[i] == '{' || token[i] == '}' ||token[i] == '.' ||token[i] == ')')
                                estado = 0;
                            
                        if(token[i] == '(')
                                estado = 0;
                            
                        if(token[i] == ':' || token[i] == '>')
                                estado = 0;
                                
                        if(token[i] == '<')
                                estado = 0;
                                
                        if(token[i] == '*')
                                estado = 0;
                    
                        break;
                }
                case 4:{
                        estado = 0;
                    
                        if(isalpha(token[i]))
                                estado = 0;
                                
                        if(isdigit(token[i]))
                                estado = 3;
                            
                        if(token[i] == '-' || token[i] == '+')
                                estado = 0;
                            
                        if(token[i] == ',' || token[i] == ';' || token[i] == '=' || token[i] == '/' || token[i] == '[' || token[i] == ']' ||token[i] == '{' || token[i] == '}' ||token[i] == '.' ||token[i] == ')')
                                estado = 0;
                            
                        if(token[i] == '(')
                                estado = 0;
                            
                        if(token[i] == ':' || token[i] == '>')
                                estado = 0;
                                
                        if(token[i] == '<')
                                estado = 0;
                                
                        if(token[i] == '*')
                                estado = 0;
                   
                        break;
                }
                case 5:{
                        estado = 0;
                    
                        if(isalpha(token[i]))
                                estado = 0;
                                
                        if(isdigit(token[i]))
                                estado = 0;
                            
                        if(token[i] == '-' || token[i] == '+')
                                estado = 0;
                            
                        if(token[i] == ',' || token[i] == ';' || token[i] == '=' || token[i] == '/' || token[i] == '[' || token[i] == ']' ||token[i] == '{' || token[i] == '}' ||token[i] == '.' ||token[i] == ')')
                                estado = 0;
                            
                        if(token[i] == '(')
                                estado = 0;
                            
                        if(token[i] == ':' || token[i] == '>')
                                estado = 0;
                                
                        if(token[i] == '<')
                                estado = 0;
                                
                        if(token[i] == '*')
                                estado = 0;
                  
                        break;
                }
                case 6:{
                        estado = 0;
                    
                        if(isalpha(token[i]))
                                estado = 0;
                                
                        if(isdigit(token[i]))
                                estado = 0;
                            
                        if(token[i] == '-' || token[i] == '+')
                                estado = 0;
                            
                        if(token[i] == ',' || token[i] == ';' || token[i] == '=' || token[i] == '/' || token[i] == '[' || token[i] == ']' ||token[i] == '{' || token[i] == '}' ||token[i] == '.' ||token[i] == ')')
                                estado = 0;
                            
                        if(token[i] == '(')
                                estado = 0;
                            
                        if(token[i] == ':' || token[i] == '>')
                                estado = 0;
                                
                        if(token[i] == '<')
                                estado = 0;
                                
                        if(token[i] == '*')
                                estado = 10;
                    
                        break;
                }
                case 7:{
                        estado = 0;
                        
                        if(isalpha(token[i]))
                                estado = 0;
                                
                        if(isdigit(token[i]))
                                estado = 0;
                            
                        if(token[i] == '-' || token[i] == '+')
                                estado = 0;
                            
                        if(token[i] == ',' || token[i] == ';' || token[i] == '/' || token[i] == '[' || token[i] == ']' ||token[i] == '{' || token[i] == '}' ||token[i] == '.' ||token[i] == ')')
                                estado = 0;
                            
                        if(token[i] == '(')
                                estado = 0;
                            
                        if(token[i] == ':')
                                estado = 0;
                                
                        if(token[i] == '<')
                                estado = 0;
                                
                        if(token[i] == '*')
                                estado = 0;
                        
                        if(token[i] == '>' || token[i] == '=')
                                estado = 10;
                    
                        break;
                }
                case 8:{
                        estado = 0;
                        
                        if(isalpha(token[i]))
                                estado = 0;
                                
                        if(isdigit(token[i]))
                                estado = 0;
                            
                        if(token[i] == '-' || token[i] == '+')
                                estado = 0;
                            
                        if(token[i] == ',' || token[i] == ';' || token[i] == '/' || token[i] == '[' || token[i] == ']' ||token[i] == '{' || token[i] == '}' ||token[i] == '.' ||token[i] == ')')
                                estado = 0;
                            
                        if(token[i] == '(')
                                estado = 0;
                            
                        if(token[i] == ':' || token[i] == '>')
                                estado = 0;
                                
                        if(token[i] == '<')
                                estado = 0;
                                
                        if(token[i] == '*')
                                estado = 0;
                        
                        if(token[i] == '=')
                                estado = 10;
                        
                        break;
                }
                case 9:{
                        estado = 0;
                        
                        if(isalpha(token[i]))
                                estado = 0;
                                
                        if(isdigit(token[i]))
                                estado = 3;
                            
                        if(token[i] == '-' || token[i] == '+')
                                estado = 0;
                            
                        if(token[i] == ',' || token[i] == ';' || token[i] == '=' || token[i] == '/' || token[i] == '[' || token[i] == ']' ||token[i] == '{' || token[i] == '}' ||token[i] == '.')
                                estado = 0;
                            
                        if(token[i] == '(')
                                estado = 0;
                            
                        if(token[i] == ':' || token[i] == '>')
                                estado = 0;
                                
                        if(token[i] == '<')
                                estado = 0;
                                
                        if(token[i] == '*')
                                estado = 0;
                        
                        if(token[i] == ')')    
                                estado = 10;
                 
                        break;
                }
                case 10:{
                        estado = 0;
                        
                        if(isalpha(token[i]))
                                estado = 0;
                                
                        if(isdigit(token[i]))
                                estado = 0;
                            
                        if(token[i] == '-' || token[i] == '+')
                                estado = 0;
                            
                        if(token[i] == ',' || token[i] == ';' || token[i] == '=' || token[i] == '/' || token[i] == '[' || token[i] == ']' ||token[i] == '{' || token[i] == '}' ||token[i] == '.' ||token[i] == ')')
                                estado = 0;
                            
                        if(token[i] == '(')
                                estado = 0;
                            
                        if(token[i] == ':' || token[i] == '>')
                                estado = 0;
                                
                        if(token[i] == '<')
                                estado = 0;
                        
                        if(token[i] == '*')
                                estado = 0;
                       
                        break;
                }
            }
    }
 
     if (estado == 0)
     {
              if(isdigit(token[0]))  
                  cout << "Entrada invalida, deve possuir apenas numeros" << endl;
              
              else {
                   if(isalpha(token[i-1]) || token[i-1] == '-' || token[i-1] == '+' || token[i-1] == ',' || token[i-1] == ';' || token[i-1] == '=' || token[i-1] == '/' || token[i-1] == '[' || token[i-1] == ']' ||token[i-1] == '{' || token[i-1] == '}' ||token[i-1] == '.' ||token[i-1] == ')' || token[i-1] == '(' || token[i-1] == ':' || token[i-1] == '>' || token[i-1] == '<' || token[i-1] == '*')
                   cout << "Entrada invalida, a palavra nao e gerada pela linguagem" << endl;
              
                    else
                    cout << "Entrada invalida, caractere " << token[i-1] << " nao pertence ao alfabeto" << endl;
          
              }
      }
              
     if (estado == 2){
         if(token == "until" || token ==  "boolean" || token == "char" || token == "string" || token == "case" || token ==  "downto" || token == "and" || token == "while" || token ==  "write" || token == "do" || token == "end" || token == "begin" || token == "integer" || token == "read" || token == "or" || token == "for" || token == "to" || token == "program" || token == "real" || token == "repeat" || token == "if" || token == "else" || token == "go to" || token == "var" || token == "array")   
         {    cout << "PALAVRA RESERVADA" << endl;
              categ = "PALAVRA RESERVADA";
              if(raiz==NULL){
                ptr->dado = token;
                ptr->tipo = categ;
                raiz = ptr;
                last = ptr;
                last->prox = NULL;
            }else{
                ptr->dado = token;
                ptr->tipo = categ;
                last->prox = ptr;
                last = last->prox;
                last->prox = NULL;
            }//********************
              //return tok;
         }
         else{
             cout << "ID" << endl;
             categ = "ID";
             //inserir na lista
              if(raiz==NULL){
                ptr->dado = token;
                ptr->tipo = categ;
                raiz = ptr;
                last = ptr;
                last->prox = NULL;
            }else{
                ptr->dado = token;
                ptr->tipo = categ;
                last->prox = ptr;
                last = last->prox;
                last->prox = NULL;
            }//********************
         }
     }
  
     if (estado == 3){
            cout << "NUMERO" << endl;
            categ = "NUMERO";
            //inserir na lista
              if(raiz==NULL){
                ptr->dado = token;
                ptr->tipo = categ;
                raiz = ptr;
                last = ptr;
                last->prox = NULL;
            }else{
                ptr->dado = token;
                ptr->tipo = categ;
                last->prox = ptr;
                last = last->prox;
                last->prox = NULL;
            }//********************
        }
    
     if (estado == 4 || estado == 5 || estado == 6 || estado == 7 || estado == 8 || estado == 9){
            cout << "SIMBOLO ESPECIAL" << endl;
            categ = "SIMBOLO ESPECIAL";
            //inserir na lista
            if(raiz==NULL){
                ptr->dado = token;
                ptr->tipo = categ;
                raiz = ptr;
                last = ptr;
                last->prox = NULL;
            }else{
                ptr->dado = token;
                ptr->tipo = categ;
                last->prox = ptr;
                last = last->prox;
                last->prox = NULL;
            }//********************
        }
  
     if (estado == 10){
            cout << "SIMBOLO COMPOSTO" << endl;
            categ = "SIMBOLO COMPOSTO";
            //inserir na lista
              if(raiz==NULL){
                ptr->dado = token;
                ptr->tipo = categ;
                raiz = ptr;
                last = ptr;
                last->prox = NULL;
            }else{
                ptr->dado = token;
                ptr->tipo = categ;
                last->prox = ptr;
                last = last->prox;
                last->prox = NULL;
            }//********************
        }
}

void tokenizerCode(string code)
{
	int pos = 0;
	string strtemp;//string temporaria
	string simbol;//string temporaria para simbolos
    analise tok;//objeto para inserir na lista e imprimir lista
    bool op;
	//substituir token velho pelo novo na string temporaria
	for(pos=0;pos<code.length();pos++){
                    strtemp.insert(strtemp.end(),code[pos]);
                    
                    if(code[pos+1] == '(' && code[pos+2] == '*'){
                            cout<<strtemp<<" ";
                            tok.automato(strtemp,tok);

			    strtemp.clear();
                            
                            int aux;
                            simbol.insert(simbol.end(),code[pos+1]);
                            simbol.insert(simbol.end(),code[pos+2]);
                            cout<<simbol<<" ";
                            tok.automato(simbol,tok);
			    simbol.clear();
                            
                            for(aux = pos+3; aux < code.length(); aux++){//Comentarios
                                if(code[aux] == '*' && code[aux+1] == ')'){
                                    cout<<strtemp<<" COMENTARIO"<<endl;
                                    simbol.insert(simbol.end(),code[aux]);
                                    simbol.insert(simbol.end(),code[aux+1]);
                                    cout<<simbol<<" ";
                                    tok.automato(simbol,tok);
			            simbol.clear();
                                    aux++;
                                    pos = aux;
                                    strtemp.clear();
                                    break;
                                }
                                else strtemp.insert(strtemp.end(),code[aux]);
                            }
                            strtemp.clear();
                            
                           
                   }
                   else{
			if(pos == code.length()){
                                cout<<strtemp<<" ";
                                tok.automato(strtemp,tok);

				strtemp.clear();
                        }
                        else{
                           if(code[pos]==' ' || code[pos]== '\n' || code[pos] == '\r' || code[pos] == '\t'){//(code[pos]==' ' || code[pos]=='\n' ){//|| (!isalpha(code[pos]) && !isdigit(code[pos])) ){//se encontrar um delimitador como espaço ou quebra de linha, envia para o automato
				strtemp.erase(strtemp.end()-1);//apaga da string espaço e quebras de linha
				cout<<strtemp<<" ";
				tok.automato(strtemp,tok);
                tok.output(strtemp);//salvar
				strtemp.clear();
                           }
			   else{
				if(!isalpha(code[pos]) && !isdigit(code[pos])){
                                        if(!isalpha(code[pos+1]) && !isdigit(code[pos+1]) && code[pos+1] != ' ' && code[pos+1] != '\n'){
                                            simbol.insert(simbol.end(),code[pos]);
                                            simbol.insert(simbol.end(),code[pos+1]);
                                            strtemp.erase(strtemp.end()-1);
                                            cout<<strtemp<<" ";
                                            tok.automato(strtemp,tok);
                                            tok.output(strtemp);//salvar
                                            cout<<simbol<<" ";
					    tok.automato(simbol,tok);
                        tok.output(simbol);//salvar
					    strtemp.clear();
					    simbol.clear();
                                            pos++;
                                        }
                                        else{
                                            simbol.insert(simbol.end(),code[pos]);
                                            strtemp.erase(strtemp.end()-1);
                                            cout<<strtemp<<" ";
                                            tok.automato(strtemp,tok);
                                            tok.output(strtemp);//salvar
                                            cout<<simbol<<" ";
					    tok.automato(simbol,tok);
                        //if (automato(simbol))
                        //    tok.inserir(simbol);
                        tok.output(simbol);//salvar
					    strtemp.clear();
					    simbol.clear();
                                       }     
				}
                           } 
                        }
                        
                }
        //strtemp.insert(strtemp.end(),code[pos]);           
        }
                        
    cout<<" qtd caracteres: "<<pos<<endl;
    cout<<" ----Lista gerada: ----"<<endl;
    tok.imprimir();
    tok.outFromList();
}


void lerArquivo()//lê codigo do arquivo e armazena em uma string
{
	string identificador="";
	string str = " ";
	std::ifstream is("teste.txt");
	while(is.good()){
		char c = is.get();
		if(is.good()){
			identificador.insert(identificador.end(),c);
		}
	}

	is.close();
	tokenizerCode(identificador);
}


int main()
{
	lerArquivo();

//um exemplo de tokenizer
	/*std::string s = "Hello,How,Are,You,Today";
    std::vector<std::string> v;
    std::istringstream buf(s);
    for(std::string token; getline(buf, token, ','); )
        v.push_back(token);
    copy(v.begin(), v.end(), std::ostream_iterator<std::string>(std::cout, "."));
    std::cout << '\n';*/

}
