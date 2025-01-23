class Konto:
    gesamt = 0
    def __init__(self, name, vermoegen):
        self.name = name
        self.vermoegen = vermoegen
        Konto.gesamt += 1

    def einzahlung(self, einzahlung):
        self.vermoegen = self.vermoegen + einzahlung
        print(f"das neue vermögen beträgt {self.vermoegen}")

    
    def abheben(self, abhebung):
        self.vermoegen = self.vermoegen -abhebung
        print(f"das neue vermögen beträgt {self.vermoegen}")
    
    def kontostand(self):
        print(f"der Kontostand beträgt {self.vermoegen}")
    @classmethod
    def gesamt_anzahl_konten(cls,):
        print(f"es gibt {cls.gesamt} Konten")



konto_1 = Konto("Wilhelm", 2000)
konto_2 = Konto("Tom", 300)


konto_1.einzahlung(20)
konto_2.abheben(400)
konto_1.kontostand()

Konto.gesamt_anzahl_konten()