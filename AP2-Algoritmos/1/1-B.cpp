		
#include <iostream>
#include <vector>
#include <string>

// Função de busca binária
int buscaBinaria(const std::vector<std::string>& livros, const std::string& tituloBuscado) {
    int inicio = 0;
    int fim = livros.size() - 1;

    while (inicio <= fim) {
        int meio = (inicio + fim) / 2;

        if (livros[meio] == tituloBuscado) {
            return meio; // Encontrado
        } else if (livros[meio] < tituloBuscado) {
            inicio = meio + 1; // Buscar na metade direita
        } else {
            fim = meio - 1; // Buscar na metade esquerda
        }
    }

    return -1; // Não encontrado
}

int main() {
    std::vector<std::string> livros = {
        "1984",
        "A Culpa é das Estrelas",
        "A Droga da Obediência",
        "A Estrada",
        "A Fera de Gaia",
        "A Hora da Estrela",
        "A Menina que Roubava Livros",
        "A Metamorfose",
        "A Montanha Mágica",
        "A Revolução dos Bichos",
        "A Sombra do Vento",
        "A Teia de Charlotte",
        "Admirável Mundo Novo",
        "Alice no País das Maravilhas",
        "As Crônicas de Nárnia: O Leão, a Feiticeira e o Guarda-Roupa",
        "Assassinato no Expresso do Oriente",
        "Cem Anos de Solidão",
        "Corte de Espinhos e Rosas",
        "Crepúsculo",
        "Dom Casmurro",
        "Duna",
        "Ensaio sobre a Cegueira",
        "Fahrenheit 451",
        "Frankenstein",
        "Harry Potter e a Pedra Filosofal",
        "Jogos Vorazes",
        "Memórias Póstumas de Brás Cubas",
        "O Alquimista",
        "O Código Da Vinci",
        "O Cortiço",
        "O Grande Gatsby",
        "O Guia do Mochileiro das Galáxias",
        "O Hobbit",
        "O Iluminado",
        "O Ladrão de Raios",
        "O Pequeno Príncipe",
        "O Poder do Hábito",
        "O Retrato de Dorian Gray",
        "O Silmarillion",
        "O Senhor dos Anéis: A Sociedade do Anel",
        "O Sol é Para Todos",
        "Onde Vivem os Monstros",
        "Orgulho e Preconceito",
        "Percy Jackson e o Ladrão de Raios",
        "Sapiens: Uma Breve História da Humanidade",
        "Um Estudo em Vermelho",
        "Vidas Secas"
    };

    std::string titulo;
    std::cout << "Digite o título do livro que deseja buscar: ";
    std::getline(std::cin, titulo);

    int indice = buscaBinaria(livros, titulo);
    if (indice != -1) {
        std::cout << "Livro encontrado na posição: " << indice << std::endl;
    } else {
        std::cout << "Livro não encontrado." << std::endl;
    }

    return 0;
}
