from tkinter import *

count = 0

def click():
    global count
    count += 1
    print(count)

# Create the main window
window = Tk()

# Set the title of the window
window.title('Safim\'s First GUI Program')

# Set the size of the window
window.geometry('1080x1080')

# Load an image to use as the window icon
icon = PhotoImage(file='C:/Users/ACER/Documents/mathematics/Whatsapp/python/1715972512177.png')

# Set the window's icon to the loaded image
window.iconphoto(True, icon)

# Change the background of the window
window.config(background="green")

# Load the image for the label
desh = PhotoImage(file='C:/Users/ACER/Documents/mathematics/Whatsapp/python/1715972512177.png', height='100', width='100')

# Add label to the window
label = Label(window,
              text="Welcome to my window.",
              font=('Arial', 24, 'italic'),
              foreground='Purple',
              background='skyblue',
              relief=RAISED,
              border=20,
              padx=0,
              pady=0,
              image=desh,
              compound='left')

# Place the label on the window
label.pack()

# Add a button to the window
button = Button(window,
                text="Click here!",
                command=click,
                font=('Comic Sans MS', 15))

# Place the button in a visible position on the window
button.place(x=200, y=200)  # Adjust x and y as needed

# Start the main event loop, place the window on the computer screen.
window.mainloop()
