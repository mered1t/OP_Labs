import math
x = float(input('Enter the x: '))
y = float(input('Enter the y: '))
R=3
if ((x**2 + y**2) > R**2) and x>=-3 and x<=3 and y >=-3 and y<=0:
    print("The dot is in the 3d or 4th quarter")
elif ((x**2 + y**2) > R**2) and x>=0 and x<=3 and y >=0 and y<=3:
    print("The dot is in the 1st quarter")
else: print("The dot is not in the shaded area")