lista_A = ['pecora', 'maiale', 'pappagallo', 'rana', 'uccello']
lista_B = []

def contatore():
    for carattere in lista_A:
        lista_B.append(len(carattere))
    return lista_B

print(f"Nella lista B sono presenti parole con {contatore()} caratteri")