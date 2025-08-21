'''
Escreva um algoritmo para calcular e imprimir o número de lâmpadas necessárias para 
iluminar um determinado cômodo de uma residência. 

Dados de entrada: a potência da lâmpada utilizada (em watts), as dimensões 
(largura e comprimento, em metros) do cômodo. 

Considere que a potência necessária é de 18 watts por metro quadrado.
'''

wattage = float(input("Type the wattage of the lamps: "))
width = float(input("Type the width of the room: "))
length = float(input("Type the length of the room: "))

print("\n the number of bulbs you need is:", ((width*length)*18)/wattage)