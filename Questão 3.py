import json

vet_fat = [0.0]*32
count_uteis = count_sup = sum = 0
dados = json.load(open("dados.json", encoding='utf-8'))

for i in dados:
    vet_fat[i["dia"]] = i["valor"]
    if i["valor"] != 0:
        count_uteis += 1
        sum += i["valor"]

maior = {"dia": 0, "valor": 0}
menor = {"dia": 0, "valor": sum} #Usei o valor soma para estabelecer um limite máximo inalcançável
media = sum/count_uteis

for dia in range(1,32):
    if vet_fat[dia] != 0:
        if vet_fat[dia] > media:
            count_sup += 1
            if vet_fat[dia] > maior["valor"]:
                maior["valor"] = vet_fat[dia]
                maior["dia"] = dia
        else:
            if vet_fat[dia] < menor["valor"]:
                menor["valor"] = vet_fat[dia]
                menor["dia"] = dia


print("\nmenor valor: ", menor["valor"], "ocorrido no dia", menor["dia"],"\n")
print("maior valor: ", maior["valor"], "ocorrido no dia", maior["dia"],"\n")
print("Número de dias acima da méida:", count_sup, "\n")