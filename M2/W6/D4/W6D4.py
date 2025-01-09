def quadrato(lato):
    return lato*4

def cerchio(raggio):
    pi = 3.14
    return 2*raggio*pi

def triangolo(base, altezza):
    perimetro = (base*2)+(altezza*2)
    return perimetro

input("Benvenuto nel calcolatore di figure geometriche(Premi INVIO per proseguire)")
input("Ti verranno richiesti dei valori per eseguire i calcoli")

lato = int(input("Inserisci il lato del quadrato:"))
raggio = int(input("Inserisci il raggio del cerchio:"))
base = int(input("Inserisci la base del triangolo:"))
altezza = int(input("Inserisci l'altezza del triangolo:"))

print(f"L'area del quadrato è: {quadrato(lato)}")

print(f"La circonferenza del cerchio è: {cerchio(raggio)}")

print(f"Il perimetro del triangolo è: {triangolo(base, altezza)}")
