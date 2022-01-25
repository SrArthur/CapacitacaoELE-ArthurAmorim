prateleira = ['arduino','servoMotor', 'potenciometro', 'LEDverm', 'LEDverd', 'resistor1', 'resistor100k']

precoPrat = [74, 5, 1.9 , 1, 1, 0.1, 0.5]

comprados = ['resistor100k','resistor100k', 'servoMotor', 'arduino', 'arduino', 'potenciometro', 'resistor1', 'LEDverm','LEDverm','LEDverm', 'LEDverd','LEDverd']

precoPago = [0.7,1, 5, 100,74,2.5,0.1, 1,1,2,2,1]


class objeto():#object
    def __init__(self,name):
                self.name = name

    # Como imprimiria para um usuário
    def __str__(self):
        return self.name

    # Como imprimiria para uma pessoa depuradora
    def __repr__(self):
        return "'"+self.name+"'"


def compara():
    pt = prateleira
    pprat = precoPrat
    c = comprados
    ppag = precoPago

    itens_prat = {}
    itens_comp = {}

    Erros = 0 #São as compras com valor pago acima do da prateleira.
    Compras_corretas = 0
    for i in range(len(pt)):
        itens_prat[objeto(pt[i])]= pprat[i]
        
    for j in range(len(c)):
        itens_comp[objeto(c[j])]= ppag[j]

    print(itens_prat)
    print(itens_comp)

    for k1,v1 in itens_comp.items():
        for k2,v2 in itens_prat.items():
            print(k1,k2)
            print(v1,v2)
            if (str(k2) == str(k1)):
                if (v1 > v2):
                    print('X'*50) #Deixei para facilitar a visualização
                    Erros += 1
                else:
                    Compras_corretas += 1

    print(Erros,Compras_corretas)
    return (Erros,Compras_corretas)



compara()