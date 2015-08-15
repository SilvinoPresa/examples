import matplotlib.pyplot as plt #import matplotlib library

x=[-3,-2,-1,0,1,2,3]    #X values
y=[9,4,1,0,1,4,9]       #Y values

plt.plot(x,y, 'b-')     #instruction to create the plot with x, v and a blue line
plt.grid(True)          #show a grid on the plot
plt.axis([-3,3,0,9])    #set axis limits in the form: x0,x1,y0,y1
plt.title('Test: Quadratic Line') #title of the plot
plt.xlabel('X values')  #label for the X values
plt.ylabel('Y values')  #label for the Y vlaues
plt.show()              #command to show the plot
