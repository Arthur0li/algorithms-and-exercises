dict_book = {"Título": "", "Autor": "", "Ano": "", "Páginas": ""}

dict_book["Título"] = input("Digite um título: ")
dict_book["Autor"] = input("Digite um autor: ")
dict_book["Ano"] = input("Digite um ano: ")
dict_book["Páginas"] = input("Digite as páginas do Livro: ")

print("\nValores do dicionario", dict_book.values())
print("Keys do dicionario",dict_book.keys())
print("Itens do dicionario", dict_book.items(), "\n")

print("Organizado:")
for k,v in dict_book.items():
    print(k, "→", v)