alunos = int(input("Digite o numero de alunos da sua turma: "))
i = 1
media = 0
while i <= alunos :
    print('Digite a nota dos alunos :')
    nota = float(input())
    media = media + nota
    i = i+1

media = media/alunos
print(f"A media da turma é : {media}")