i = 1
maior = 0
maior2 = 0
while i<=10:
   numero = int(input("Digite um numero: "))
   
   if numero >= maior:
      maior = numero
   if (numero< maior) & (numero > maior2):
      maior2 = numero
   i = i + 1  
     
print(f"Os maiores numeros dentre os digitados são: {maior} e {maior2}")