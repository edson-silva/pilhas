
     #include <iostream>
     #include <stack>

     using namespace std;

     int main()   {

      stack <string> cartas;


      if(cartas.empty()) {
        cout << "Pilha vazia\n\n";

      } else {

        cout << "Pilha com cartas\n\n"; 

      }

      cartas.push("Rei de Copas");
      cartas.push("Rei de Espadas");
      cartas.push("Rei de ouros");
      cartas.push("Rei de Paus");

      cout << "Tamanho da pilha:  " << cartas.size() << "\n";

      cout << "Carta do Topo:  " << cartas.top() << "\n";

      cartas.pop();
      cartas.pop();
 
      cout <<  "Nova carta do topo: "<< cartas.top() << "\n";

      return 0;

      } 
