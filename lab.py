from tkinter import *
master = Tk()
master.title('GUI')
master.geometry('200x200')
Label(master, text="Hello!").grid(row=0, column=0)
e1 = Entry(master)
e1.grid(row=1, column=1)


mainloop()
