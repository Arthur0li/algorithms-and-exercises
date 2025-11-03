dict_book = {"Title": "", "Author": "", "Year": "", "Pages": ""}

dict_book["Title"] = input("Enter a title: ")
dict_book["Author"] = input("Enter an author: ")
dict_book["Year"] = input("Enter a year: ")
dict_book["Pages"] = input("Enter the number of pages: ")

print("Keys do dicionario",dict_book.keys())
print("Itens do dicionario", dict_book.items(), "\n")
print("\nDictionary values:", dict_book.values())
print("Dictionary keys:", dict_book.keys())
print("Dictionary items:", dict_book.items(), "\n")

print("Organizado:")
print("Organized:")
for k, v in dict_book.items():
    print(k, "→", v)
