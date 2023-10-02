hora: int

hora = int(input("Digite a hora: "))

if hora < 12:
    print(f"Bom dia")
elif hora < 18:
    print(f"Boa tarde")
else:
    print(f"Boa noite")