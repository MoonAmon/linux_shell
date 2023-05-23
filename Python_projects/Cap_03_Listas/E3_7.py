convidados = ["bruce lee", "george washington", "michael jackson"]

print("Saudações, " + convidados[0].title() + " gostaria de convida-lo para a festa!")
print("Saudações, " + convidados[1].title() + " gostaria de convida-lo para a festa!")
print("Saudações, " + convidados[2].title() + " gostaria de convida-lo para a festa!")

print(convidados[1].title() + " não poderar comparecer!")
convidados[1] = "elizabeth queen"

print("Saudações, " + convidados[0].title() + " gostaria de convida-lo para a festa!")
print("Saudações, " + convidados[1].title() + " gostaria de convida-lo para a festa!")
print("Saudações, " + convidados[2].title() + " gostaria de convida-lo para a festa!")

print("Acabei de achar uma mesa maior! \n")

convidados.insert(0, "the weeknd")
convidados.insert(1, "bruce wayne")
convidados.append("deadpool")

print("Saudações, " + convidados[0].title() + " gostaria de convida-lo para a festa!")
print("Saudações, " + convidados[1].title() + " gostaria de convida-lo para a festa!")
print("Saudações, " + convidados[2].title() + " gostaria de convida-lo para a festa!")
print("Saudações, " + convidados[3].title() + " gostaria de convida-lo para a festa!")
print("Saudações, " + convidados[4].title() + " gostaria de convida-lo para a festa!")
print("Saudações, " + convidados[5].title() + " gostaria de convida-lo para a festa!\n")

print("Infelizmente só poderei convidar 2 pessoas! :(\n")

ex_convidado = convidados.pop(0)
print("Infelizmente, " + ex_convidado.title() + " você esta desconvidado.\nSinto muito :(")
ex_convidado = convidados.pop(0)
print("Infelizmente, " + ex_convidado.title() + " você esta desconvidado.\nSnto muito :(")
ex_convidado = convidados.pop(0)
print("Infelizmente, " + ex_convidado.title() + " você esta desconvidado.\nSnto muito :(")
ex_convidado = convidados.pop(0)
print("Infelizmente, " + ex_convidado.title() + " você esta desconvidado.\nSnto muito :(\n")

print(convidados[0].title() + ", você continua convidado!\n")
print(convidados[1].title() + ", você continua convidado!\n")

del convidados[0]
del convidados[0]

print(convidados)
