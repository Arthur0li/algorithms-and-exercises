# 💾 Manipulação de Arquivos / File Handling

## Português (PT-BR)

1. **Leitura e escrita de caracteres em arquivo**
   Escreva um programa que:

   * crie e abra um arquivo
   * receba **caracteres via teclado (um por vez)**
   * grave cada caractere no arquivo
   * finalize a entrada quando o caractere `'0'` for digitado

   Em seguida:

   * reabra o arquivo
   * leia os caracteres **um por vez**
   * exiba todos na tela

2. **Agenda de contatos com arquivo**
   Desenvolva um programa para gerenciar uma **agenda de contatos**.

   Para cada contato:

   * nome
   * telefone
   * aniversário (dia e mês)

   Utilize um **vetor de estruturas com 4 elementos**, declarado como
   **variável local na função `main()`**, e use **ponteiros** para manipulá-lo nas funções.

   ⚠️ Regras:

   * ao encerrar o programa, os dados devem ser **salvos no arquivo**
   * ao iniciar o programa, os dados devem ser **carregados do arquivo**
   * cada opção do menu deve ser implementada como **uma função**

   **Menu:**

   1. inserir contato
   2. listar todos os contatos
   3. pesquisar contato pelo nome completo
   4. listar contatos cujo nome inicia com uma letra
   5. listar aniversariantes do mês
   6. alterar contato pelo nome completo
   7. excluir contato pelo nome completo
   8. sair

3. **Cadastro de clientes (arquivo direto)**
   Escreva um programa para gerenciar um **cadastro de clientes** diretamente em arquivo.

   Para cada cliente:

   * nome
   * email
   * celular

   ⚠️ Regras:

   * não utilizar **vetor de estruturas**
   * utilizar apenas uma **estrutura local na função `main()`**
   * os dados devem ser gravados **diretamente no arquivo**
   * utilizar **`fseek`** quando necessário
   * utilizar **ponteiros** nas funções
   * cada opção do menu deve ser implementada como **uma função**

   **Menu:**

   1. incluir registros
   2. listar todos os registros
   3. pesquisar registro pelo nome
   4. alterar registro
   5. excluir registro
   6. sair

---

## English (EN)

1. **Character file read and write**
   Write a program that:

   * creates and opens a file
   * reads **characters from input (one at a time)**
   * writes each character to the file
   * stops when the character `'0'` is entered

   Then:

   * reopen the file
   * read all characters **one by one**
   * display them on the screen

2. **Contact agenda with file storage**
   Develop a program to manage a **contact list**.

   For each contact:

   * name
   * phone
   * birthday (day and month)

   Use an **array of structs with 4 elements**, declared as a
   **local variable in `main()`**, and manipulate it using **pointers**.

   ⚠️ Rules:

   * when the program ends, data must be **saved to a file**
   * when the program starts, data must be **loaded from the file**
   * each menu option must be implemented as a **function**

   **Menu:**

   1. insert contact
   2. list all contacts
   3. search contact by full name
   4. list contacts whose name starts with a letter
   5. list birthdays by month
   6. update contact by full name
   7. delete contact by full name
   8. exit

3. **Customer registry (direct file access)**
   Write a program to manage a **customer registry** using direct file access.

   For each customer:

   * name
   * email
   * phone

   ⚠️ Rules:

   * do not use an **array of structs**
   * use only a **single struct declared in `main()`**
   * records must be written **directly to the file**
   * use **`fseek`** when necessary
   * use **pointers** in functions
   * each menu option must be implemented as a **function**

   **Menu:**

   1. add records
   2. list all records
   3. search by name
   4. update record
   5. delete record
   6. exit
