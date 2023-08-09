i = 1
maior = 0
while i<=10:
   numero = int(input("Digite um numero: "))
   
   if numero >= maior:
      maior = numero
   i = i + 1  
     
print(f"O maior numero dentre os digitados são: {maior}")