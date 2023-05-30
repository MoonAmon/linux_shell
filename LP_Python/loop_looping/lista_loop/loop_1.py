DEN = float(1)
DIV = float(1)
X = float (0)

while DEN<=99 and DIV<=50:
    X=DEN/DIV
    print("%.0f/%.0f= %.2f"%(DEN,DIV,X))
    DIV += 1
    DEN += 2
