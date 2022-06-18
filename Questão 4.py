Faturamento = {"SP": 67836.43, "RJ": 36678.66, "MG": 29229.88, "ES": 27165.48, "Outros": 19849.53}
sum = 0

for i in Faturamento:
    sum += Faturamento[i]

for i in Faturamento:
    print(i, ":{: .2%}".format((Faturamento[i]/sum)))