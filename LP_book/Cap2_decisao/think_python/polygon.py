
import turtle
import math
bob = turtle.Turtle()

def polygon(t,n,length):
    for i in range(n):
        angle=360/n      
        t.lt(angle)
        t.fd(length)

def circle(t,r):
    circumference=2*math.pi*r
    n=int(circumference/3)+1
    length=circumference/n
    polygon(t,n,length)

polygon(bob,20,8)
circle(80,90)

input("press")

turtle.mainloop()
