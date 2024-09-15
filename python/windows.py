from tkinter import * 

#execute some sort of code when button on window clicked.
count= 0
def click():
    global count
    count+=1
    print(count)

# Create the main window
window = Tk() # Instantiate an instance of the window



#( Set the title of the window
window.title('safims first gui programe')

# Set the size of the window
window.geometry('1080x1080')

# Load an image to use as the window icon
icon = PhotoImage(file='C:/Users/ACER/Documents/mathematics/Whatsapp/python/1715972512177.png')

# Set the window's icon to the loaded image
window.iconphoto(True, icon)

#to change the background of the window
window.config(background="green")


desh=PhotoImage(file='C:/Users/ACER/Documents/mathematics/Whatsapp/python/1715972512177.png')

#to add label on window
label = Label(window,
              text="Welcome to my window.",
              font= ('Arial', 24, 'italic'),
              foreground='Purple',
              background='skyblue',
              relief=RAISED,
              border= 20,
              padx=0,
              pady=0,
              image= desh,
              compound= 'left'
              )

#to place the label on window
label.pack()

#To add a button on window
button = Button(window,
                text="Clicked here1",
                command= click,
                font=('comic sans',15))
# Place the button in a visible position on the window
button.place(x=200, y=200)  # Adjust x and y as needed

# Start the main event loop, place the window on computer screen.
window.mainloop()
