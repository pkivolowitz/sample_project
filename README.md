# Sample Project (Mac)

This is a sample project. We'll use it to have you:

* practice downloading starter code
* practice downloading data files
* building and running uses VS Code
* running from the command line

## Create a new project

* Find your class folder.
* Double click on the project creation script.
* Enter a project name like: sample_project
* Hit return - the script runs.
* Hit return - the window closes.

## Enter the folder just created using the terminal

* Start up a terminal. You are now in your home directory.
* You are instructed to create your class folder in your home folder so it should be there. Also, you just visited it using the Finder. Suppose you called your class folder `csc1810`. Type the following into your terminal and hit return `cd csc1810`.
* Now, enter the folder containing your freshly made sample project: `cd sample_project`.

## Get the starter code

Copy this whole line and paste it into your terminal. Triple click on the line to easily select the whole line.

```text
wget --no-check-certificate --content-disposition https://raw.githubusercontent.com/pkivolowitz/sample_project/master/main.cpp
```

* The file you just downloaded is called `main.cpp` *but* you already had a `main.cpp` in the folder. Therefore, the new file was automatically renamed to `main.cpp.1`.
* Rename `main.cpp.1` to `main.cpp` by entering this: `mv main.cpp.1 main.cpp` into the terminal and hit return.


## Get the data file

Copy this whole line and paste it into your terminal. Triple click on the line to easily select the whole line.

```text
wget --no-check-certificate --content-disposition https://raw.githubusercontent.com/pkivolowitz/sample_project/master/datafile.txt
```

## Start up VS Code

You can do this two ways:

1. Double click in Finder on the `project.code-workspace` file, or
2. Since you may already be in the terminal, type: `code project.code-workspace`.

## Edit `main.cpp`

In the explorer view on the left, double click on `main.cpp`.

The explorer view is the top most icon on the left. It is a toggle. The toggle action can also be performed with command-b.

## Build and launch the program

You can do this two ways:

1. Click on the insect with the play button icon (fourth one down) then click on the green play button next to the work `run`, or 
2. press `F5`

## Use the program

1. A terminal window should appear - the last thing it prints are the instructions on how to use the program (printed by the program).
2. Type in a few lines. They are echoed back to you.
3. Hit control-d (^D). This should exit the program and may or may not close the window.

## Run the program with the data file

1. If the `Terminal` window in Code is open, it will say something about `press any key to close it.` If this is so, click in the window and hit any key. The `any` key is shift-6. Just kidding. Any key means ANY key. The whole tab may disappear.
2. If it does disappear, depress command-j.
3. A new terminal appears right inside Code! Alas, it too has the same name as the previous tab even though it does something completely different. This is one example of what we Computer Scientists call: *crappy design*.
4. If you were to execute `ls` in this new terminal you would see:
```text
a.out                   datafile.txt            project.code-workspace
a.out.dSYM              main.cpp
```
5. `a.out` is the name of the executable file (program file) you built. The reason it is called `a.out` is that it is short for `assembler output` and was so named by [Ken Thompson](https://en.wikipedia.org/wiki/Ken_Thompson).
6. Enter `./a.out` and hit return. 
7. You're now running your program. Use it and exit.
8. Let's use the data file. Enter `./a.out < datafile.txt`.
9. Instead of input coming from you, the input came from the data file. The key here is the `<`. It means `redirect input from`. Your instructors may use this term a lot so please remember it.




