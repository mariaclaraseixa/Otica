### Enunciado para a Atividade: Gerenciamento de Estoque de Óculos em C++

Nesta atividade, você irá implementar um sistema simples de gerenciamento de estoque de óculos em C++. O sistema deverá permitir ao usuário adicionar óculos ao estoque, exibir o conteúdo do estoque e continuar ou finalizar o processo de adição de novos itens. Abaixo estão os passos detalhados para a implementação.

#### Passos para a Atividade:

1. **Crie a classe `Oculos`**:
    - A classe `Oculos` deve conter os atributos privados `marca` e `modelo`, ambos do tipo `string`.
    - Deve ter:
        - Um construtor padrão.
        - Um construtor que receba os valores da `marca` e do `modelo`.
        - Métodos `set` e `get` para `marca` e `modelo`.
    
    Exemplo de código esperado:

    ```cpp
    class Oculos {
    private:
        string marca;
        string modelo;

    public:
        Oculos();
        Oculos(const string& marca, const string& modelo);

        void set_marca(const string& ma);
        string get_marca() const;

        void set_modelo(const string& mo);
        string get_modelo() const;
    };
    ```

2. **Crie a classe `Estoque`**:
    - A classe `Estoque` será responsável por gerenciar o estoque de óculos.
    - Esta classe deve conter:
        - Um atributo privado do tipo `unordered_map<int, Oculos>` para armazenar os óculos, onde a chave é o código (int) e o valor é um objeto `Oculos`.
        - Métodos públicos para:
            - **Incluir** um novo óculos no estoque com um código único.
            - **Alterar** um óculos existente no estoque com base em um código.
            - **Excluir** um óculos do estoque com base em um código.
            - **Verificar** se um código existe no estoque.
            - **Obter** o conteúdo do estoque (sem exibir nada na tela, apenas retornando o `unordered_map`).

    Exemplo do método para obter o estoque:

    ```cpp
    const unordered_map<int, Oculos>& obter_estoque() const;
    ```

3. **Crie as funções de Entrada e Saída de Dados**:
    - Implemente três funções auxiliares para:
        - Capturar a **marca** dos óculos.
        - Capturar o **modelo** dos óculos.
        - Perguntar ao usuário se ele deseja **continuar** inserindo novos óculos no estoque.
    
    Exemplo de funções:

    ```cpp
    string escolherMarca();
    string escolherModelo();
    int continuar();
    ```

4. **Crie a função de Listagem do Estoque**:
    - Crie uma função chamada `listar_estoque` fora da classe `Estoque`. Ela deve receber um objeto `Estoque` e percorrer o `unordered_map` retornado pelo método `obter_estoque()`, exibindo os itens (código, marca e modelo) na tela.
    - Se o estoque estiver vazio, exiba a mensagem "Estoque vazio".

    Exemplo da função:

    ```cpp
    void listar_estoque(const Estoque& estoque);
    ```

5. **Implementação do `main()`**:
    - Dentro do `main()`, implemente o seguinte fluxo:
        1. Crie um objeto do tipo `Estoque`.
        2. Em um loop `do-while`, peça ao usuário para:
            - Escolher a marca e o modelo dos óculos.
            - Incluir o óculos no estoque usando o método da classe `Estoque`.
            - Chamar a função `listar_estoque()` para exibir o conteúdo atual do estoque.
        3. Pergunte ao usuário se deseja continuar inserindo novos óculos.
        4. O loop deve continuar enquanto o usuário escolher "1 - Sim" como resposta.
        5. Finalize o programa quando o usuário escolher "2 - Não".

    Exemplo básico do fluxo:

    ```cpp
    int main() {
        Estoque estoque;
        int codigoOculos = 0;

        do {
            Oculos oculos("", "");
            // Captura da marca e do modelo
            string marcaEscolhida = escolherMarca();
            oculos.set_marca(marcaEscolhida);

            string modeloEscolhido = escolherModelo();
            oculos.set_modelo(modeloEscolhido);

            // Inclui o óculos no estoque
            codigoOculos++;
            estoque.incluir_estoque(codigoOculos, oculos);

            // Exibe o conteúdo do estoque
            listar_estoque(estoque);

            // Pergunta se o usuário deseja continuar
        } while (continuar() == 1);

        return 0;
    }
    ```

6. **Teste o Programa**:
    - Após implementar todos os passos, compile e execute o programa.
    - Verifique se as seguintes funcionalidades estão funcionando corretamente:
        - Inclusão de novos óculos no estoque.
        - Exibição do relatório com todos os óculos no estoque.
        - Continuação ou término do programa com base na escolha do usuário.

#### Resumo:

- Você criará um sistema de gerenciamento de estoque de óculos com classes para os óculos e o estoque.
- A entrada e saída de dados, assim como a listagem do estoque, devem ser realizadas no `main()` ou em funções auxiliares.
- O objetivo é praticar o uso de classes, `unordered_map`, manipulação de objetos e laços de repetição em C++.

#### Dicas:
- Use o comando `cin.ignore()` após `cin` para limpar o buffer antes de capturar strings com `getline`.
- Certifique-se de testar o programa para diferentes cenários, como estoque vazio e inclusão de múltiplos óculos.
